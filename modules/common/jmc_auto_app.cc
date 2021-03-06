/******************************************************************************
 * Copyright 2017 The JmcAuto Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#include "modules/common/jmc_auto_app.h"

#include <fstream>
#include <csignal>
#include <memory>
#include <string>
#include <vector>

#include "gflags/gflags.h"
#include "modules/common/log.h"
#include "modules/common/status/status.h"
#include "modules/common/util/string_util.h"

DECLARE_string(log_dir);

namespace jmc_auto {
namespace common {

void JmcAutoApp::SetCallbackThreadNumber(uint32_t callback_thread_num) {
    CHECK_GE(callback_thread_num, 1);
    callback_thread_num_ = callback_thread_num;
}

void JmcAutoApp::ExportFlags() const {
    const auto export_file = util::StrCat(FLAGS_log_dir, "/", Name(), ".flags");
    std::ofstream fout(export_file);
    CHECK(fout) << "Cannot open file " << export_file;

    std::vector<gflags::CommandLineFlagInfo> flags;
    gflags::GetAllFlags(&flags);
    for (const auto &flag : flags) {
        fout << "# " << flag.type << ", default=" << flag.default_value << "\n"
             << "# " << flag.description << "\n"
             << "--" << flag.name << "=" << flag.current_value << "\n"
             << std::endl;
    }
}

int JmcAutoApp::Spin() {
    auto status = Init();
    if (!status.ok()) {
        AERROR << Name() << " Init failed: " << status;
        return -1;
    }

    status = Start();
    if (!status.ok()) {
        AERROR << Name() << " Start failed: " << status;
        return -2;
    }
    ExportFlags();
    // Stop();
    AINFO << Name() << " exited.";
    return 0;
}

void jmc_auto_app_sigint_handler(int signal_num) {
    AINFO << "Received signal: " << signal_num;
    if (signal_num != SIGINT) {
        return;
    }
    bool static is_stopping = false;
    if (is_stopping) {
        return;
    }
    is_stopping = true;
}

} // namespace common
} // namespace jmc_auto
