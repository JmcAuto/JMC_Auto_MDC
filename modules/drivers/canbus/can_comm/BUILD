
cc_library(
    name = "can_receiver",
    hdrs = ["can_receiver.h"],
    deps = [
        "//modules/common",
        "//modules/common/proto:error_code_proto",
        "//modules/drivers/canbus/can_client",
        "//modules/drivers/canbus/can_comm:message_manager_base",
    ],
)

cc_library(
    name = "can_sender",
    hdrs = ["can_sender.h"],
    deps = [
        "//modules/common",
        "//modules/common/proto:error_code_proto",
        "//modules/drivers/canbus/can_client",
        "//modules/drivers/canbus/can_comm:message_manager_base",
        "@gtest//:gtest",
    ],
)

cc_library(
    name = "message_manager_base",
    hdrs = [
        "message_manager.h",
        "protocol_data.h",
    ],
    deps = [
        "//modules/common/proto:error_code_proto",
        "//modules/common/time",
        "//modules/drivers/canbus/common:canbus_common",
    ],
)

