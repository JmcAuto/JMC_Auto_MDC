/******************************************************************************
 * Copyright 2017 The jmc_auto Authors. All Rights Reserved.
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

#ifndef MODULES_CANBUS_VEHICLE_CX75_CX75_PROTOCOL_MANAGER_H_
#define MODULES_CANBUS_VEHICLE_CX75_CX75_PROTOCOL_MANAGER_H_

#include <memory>
#include <thread>

#include "modules/canbus/vehicle/vehicle_controller.h"

#include "modules/canbus/proto/canbus_conf.pb.h"
#include "modules/canbus/proto/chassis.pb.h"
#include "modules/canbus/proto/vehicle_parameter.pb.h"
#include "modules/common/macro.h"
#include "modules/common/proto/error_code.pb.h"
#include "modules/control/proto/control_cmd.pb.h"

#include "modules/canbus/vehicle/cx75/protocol/pam_0x270_270.h"
#include "modules/canbus/vehicle/cx75/protocol/pam_0x271_271.h"
#include "modules/canbus/vehicle/cx75/protocol/pam_0x272_272.h"
#include "modules/canbus/vehicle/cx75/protocol/mrr_0x238_238.h"
#include "modules/canbus/vehicle/cx75/protocol/mrr_0x239_239.h"
#include "modules/canbus/vehicle/cx75/protocol/mrr_0x246_246.h"
#include "modules/canbus/vehicle/cx75/protocol/mrr_frobj_0x279_279.h"
#include "modules/canbus/vehicle/cx75/protocol/mrr_frobj_0x480_480.h"
#include "modules/canbus/vehicle/cx75/protocol/ipm_0x245_245.h"
#include "modules/canbus/vehicle/cx75/protocol/ipm_leftline_0x278_278.h"
#include "modules/canbus/vehicle/cx75/protocol/ipm_rightline_0x490_490.h"



namespace jmc_auto {
namespace canbus {
namespace cx75 {

class Cx75Controller final : public VehicleController {
 public:

  explicit Cx75Controller() {};

  virtual ~Cx75Controller();

  ::jmc_auto::common::ErrorCode Init(
      const VehicleParameter& params,
      CanSender<::jmc_auto::canbus::ChassisDetail> *const can_sender,
      MessageManager<::jmc_auto::canbus::ChassisDetail> *const message_manager) override;

  bool Start() override;

  /**
   * @brief stop the vehicle controller.
   */
  void Stop() override;

  /**
   * @brief calculate and return the chassis.
   * @returns a copy of chassis. Use copy here to avoid multi-thread issues.
   */
  Chassis chassis() override;

 private:
  // main logical function for operation the car enter or exit the auto driving
  void Emergency() override;
  ::jmc_auto::common::ErrorCode EnableAutoMode() override;
  ::jmc_auto::common::ErrorCode DisableAutoMode() override;
  ::jmc_auto::common::ErrorCode EnableSteeringOnlyMode() override;
  ::jmc_auto::common::ErrorCode EnableSpeedOnlyMode() override;
  ::jmc_auto::common::ErrorCode EnableRemoteMode() override;
  ::jmc_auto::common::ErrorCode EnableAPAMode() override;
  ::jmc_auto::common::ErrorCode DisableAPAMode() override;
  // NEUTRAL, REVERSE, DRIVE
  void Gear(Chassis::GearPosition state) override;

  // brake with new acceleration
  // acceleration:0.00~99.99, unit:
  // acceleration_spd: 60 ~ 100, suggest: 90
  void Brake(double acceleration) override;

  // drive with old acceleration
  // gas:0.00~99.99 unit:
  void Throttle(double throttle) override;

  // steering with old angle speed
  // angle:-99.99~0.00~99.99, unit:, left:+, right:-
  void Steer(double angle) override;

  // steering with new angle speed
  // angle:-99.99~0.00~99.99, unit:, left:+, right:-
  // angle_spd:0.00~99.99, unit:deg/s
  void Steer(double angle, double angle_spd) override;
  void Acceleration(double acc) override;
  //CX75
  void SteerTorque(double torque) override;
  void PamStopDistance(int distance) override;
  void SpeedTarget(float speed) override;
  // set Electrical Park Brake
  void SetEpbBreak(const ::jmc_auto::control::ControlCommand& command) override;
  void SetBeam(const ::jmc_auto::control::ControlCommand& command) override;
  void SetHorn(const ::jmc_auto::control::ControlCommand& command) override;
  void SetTurningSignal(
      const ::jmc_auto::control::ControlCommand& command) override;

  void ResetProtocol();
  bool CheckChassisError();

 private:
  void SecurityDogThreadFunc();
  virtual bool CheckResponse(const int32_t flags, bool need_wait);
  void set_chassis_error_mask(const int32_t mask);
  int32_t chassis_error_mask();
  Chassis::ErrorCode chassis_error_code();
  void set_chassis_error_code(const Chassis::ErrorCode& error_code);

 private:
  // control protocol
  Pam0x270270* pam_0x270_270_ = nullptr;
  Pam0x271271* pam_0x271_271_ = nullptr;
  Pam0x272272* pam_0x272_272_ = nullptr;
  Mrr0x238238* mrr_0x238_238_ = nullptr;
  Mrr0x239239* mrr_0x239_239_ = nullptr;
  Mrr0x246246* mrr_0x246_246_ = nullptr;
  Mrrfrobj0x279279* mrr_frobj_0x279_279_ = nullptr;
  Mrrfrobj0x480480* mrr_frobj_0x480_480_ = nullptr;
  Ipm0x245245* ipm_0x245_245_ = nullptr;
  Ipmleftline0x278278* ipm_leftline_0x278_278_ = nullptr;
  Ipmrightline0x490490* ipm_rightline_0x490_490_ = nullptr;


  Chassis chassis_;
  std::unique_ptr<std::thread> thread_;
  bool is_chassis_error_ = false;

  std::mutex chassis_error_code_mutex_;
  Chassis::ErrorCode chassis_error_code_ = Chassis::NO_ERROR;

  std::mutex chassis_mask_mutex_;
  int32_t chassis_error_mask_ = 0;
};

}  // namespace CX75
}  // namespace canbus
}  // namespace jmc_auto

#endif  // MODULES_CANBUS_VEHICLE_CX75_CX75_PROTOCOL_MANAGER_H_
