/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_gem_h
#define impl_type_gem_h






























#include "impl_type_brake_cmd_6b.h"
#include "impl_type_brake_rpt_6c.h"
#include "impl_type_wheel_speed_rpt_7a.h"
#include "impl_type_brake_motor_rpt_1_70.h"
#include "impl_type_global_cmd_69.h"
#include "impl_type_headlight_cmd_76.h"
#include "impl_type_brake_motor_rpt_3_72.h"
#include "impl_type_parking_brake_status_rpt_80.h"
#include "impl_type_steering_motor_rpt_3_75.h"
#include "impl_type_vehicle_speed_rpt_6f.h"
#include "impl_type_steering_motor_rpt_1_73.h"
#include "impl_type_accel_cmd_67.h"
#include "impl_type_global_rpt_6a.h"
#include "impl_type_horn_rpt_79.h"
#include "impl_type_yaw_rate_rpt_81.h"
#include "impl_type_steering_cmd_6d.h"
#include "impl_type_date_time_rpt_83.h"
#include "impl_type_wiper_rpt_91.h"
#include "impl_type_wiper_cmd_90.h"
#include "impl_type_turn_cmd_63.h"
#include "impl_type_turn_rpt_64.h"
#include "impl_type_brake_motor_rpt_2_71.h"
#include "impl_type_headlight_rpt_77.h"
#include "impl_type_horn_cmd_78.h"
#include "impl_type_steering_motor_rpt_2_74.h"
#include "impl_type_shift_cmd_65.h"
#include "impl_type_shift_rpt_66.h"
#include "impl_type_steering_rpt_1_6e.h"
#include "impl_type_lat_lon_heading_rpt_82.h"


struct Gem {
    ::Global_rpt_6a global_rpt_6a;
    
    ::Brake_cmd_6b brake_cmd_6b;
    
    ::Brake_rpt_6c brake_rpt_6c;
    
    ::Steering_cmd_6d steering_cmd_6d;
    
    ::Steering_rpt_1_6e steering_rpt_1_6e;
    
    ::Wheel_speed_rpt_7a wheel_speed_rpt_7a;
    
    ::Date_time_rpt_83 date_time_rpt_83;
    
    ::Brake_motor_rpt_1_70 brake_motor_rpt_1_70;
    
    ::Headlight_rpt_77 headlight_rpt_77;
    
    ::Steering_motor_rpt_3_75 steering_motor_rpt_3_75;
    
    ::Turn_cmd_63 turn_cmd_63;
    
    ::Turn_rpt_64 turn_rpt_64;
    
    ::Shift_cmd_65 shift_cmd_65;
    
    ::Shift_rpt_66 shift_rpt_66;
    
    ::Accel_cmd_67 accel_cmd_67;
    
    ::Lat_lon_heading_rpt_82 lat_lon_heading_rpt_82;
    
    ::Global_cmd_69 global_cmd_69;
    
    ::Parking_brake_status_rpt_80 parking_brake_status_rpt_80;
    
    ::Yaw_rate_rpt_81 yaw_rate_rpt_81;
    
    ::Horn_rpt_79 horn_rpt_79;
    
    ::Horn_cmd_78 horn_cmd_78;
    
    ::Wiper_rpt_91 wiper_rpt_91;
    
    ::Vehicle_speed_rpt_6f vehicle_speed_rpt_6f;
    
    ::Headlight_cmd_76 headlight_cmd_76;
    
    ::Steering_motor_rpt_2_74 steering_motor_rpt_2_74;
    
    ::Brake_motor_rpt_2_71 brake_motor_rpt_2_71;
    
    ::Steering_motor_rpt_1_73 steering_motor_rpt_1_73;
    
    ::Wiper_cmd_90 wiper_cmd_90;
    
    ::Brake_motor_rpt_3_72 brake_motor_rpt_3_72;
    

    static bool IsPlane()
    {
        return false;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(global_rpt_6a);
        fun(brake_cmd_6b);
        fun(brake_rpt_6c);
        fun(steering_cmd_6d);
        fun(steering_rpt_1_6e);
        fun(wheel_speed_rpt_7a);
        fun(date_time_rpt_83);
        fun(brake_motor_rpt_1_70);
        fun(headlight_rpt_77);
        fun(steering_motor_rpt_3_75);
        fun(turn_cmd_63);
        fun(turn_rpt_64);
        fun(shift_cmd_65);
        fun(shift_rpt_66);
        fun(accel_cmd_67);
        fun(lat_lon_heading_rpt_82);
        fun(global_cmd_69);
        fun(parking_brake_status_rpt_80);
        fun(yaw_rate_rpt_81);
        fun(horn_rpt_79);
        fun(horn_cmd_78);
        fun(wiper_rpt_91);
        fun(vehicle_speed_rpt_6f);
        fun(headlight_cmd_76);
        fun(steering_motor_rpt_2_74);
        fun(brake_motor_rpt_2_71);
        fun(steering_motor_rpt_1_73);
        fun(wiper_cmd_90);
        fun(brake_motor_rpt_3_72);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(global_rpt_6a);
        fun(brake_cmd_6b);
        fun(brake_rpt_6c);
        fun(steering_cmd_6d);
        fun(steering_rpt_1_6e);
        fun(wheel_speed_rpt_7a);
        fun(date_time_rpt_83);
        fun(brake_motor_rpt_1_70);
        fun(headlight_rpt_77);
        fun(steering_motor_rpt_3_75);
        fun(turn_cmd_63);
        fun(turn_rpt_64);
        fun(shift_cmd_65);
        fun(shift_rpt_66);
        fun(accel_cmd_67);
        fun(lat_lon_heading_rpt_82);
        fun(global_cmd_69);
        fun(parking_brake_status_rpt_80);
        fun(yaw_rate_rpt_81);
        fun(horn_rpt_79);
        fun(horn_cmd_78);
        fun(wiper_rpt_91);
        fun(vehicle_speed_rpt_6f);
        fun(headlight_cmd_76);
        fun(steering_motor_rpt_2_74);
        fun(brake_motor_rpt_2_71);
        fun(steering_motor_rpt_1_73);
        fun(wiper_cmd_90);
        fun(brake_motor_rpt_3_72);
    }

    bool operator == (const ::Gem& t) const {
        return (global_rpt_6a == t.global_rpt_6a) && (brake_cmd_6b == t.brake_cmd_6b) && (brake_rpt_6c == t.brake_rpt_6c) && (steering_cmd_6d == t.steering_cmd_6d) && (steering_rpt_1_6e == t.steering_rpt_1_6e) && (wheel_speed_rpt_7a == t.wheel_speed_rpt_7a) && (date_time_rpt_83 == t.date_time_rpt_83) && (brake_motor_rpt_1_70 == t.brake_motor_rpt_1_70) && (headlight_rpt_77 == t.headlight_rpt_77) && (steering_motor_rpt_3_75 == t.steering_motor_rpt_3_75) && (turn_cmd_63 == t.turn_cmd_63) && (turn_rpt_64 == t.turn_rpt_64) && (shift_cmd_65 == t.shift_cmd_65) && (shift_rpt_66 == t.shift_rpt_66) && (accel_cmd_67 == t.accel_cmd_67) && (lat_lon_heading_rpt_82 == t.lat_lon_heading_rpt_82) && (global_cmd_69 == t.global_cmd_69) && (parking_brake_status_rpt_80 == t.parking_brake_status_rpt_80) && (yaw_rate_rpt_81 == t.yaw_rate_rpt_81) && (horn_rpt_79 == t.horn_rpt_79) && (horn_cmd_78 == t.horn_cmd_78) && (wiper_rpt_91 == t.wiper_rpt_91) && (vehicle_speed_rpt_6f == t.vehicle_speed_rpt_6f) && (headlight_cmd_76 == t.headlight_cmd_76) && (steering_motor_rpt_2_74 == t.steering_motor_rpt_2_74) && (brake_motor_rpt_2_71 == t.brake_motor_rpt_2_71) && (steering_motor_rpt_1_73 == t.steering_motor_rpt_1_73) && (wiper_cmd_90 == t.wiper_cmd_90) && (brake_motor_rpt_3_72 == t.brake_motor_rpt_3_72);
    }
};


#endif // impl_type_gem_h