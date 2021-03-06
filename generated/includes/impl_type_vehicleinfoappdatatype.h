/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_vehicleinfoappdatatype_h
#define impl_type_vehicleinfoappdatatype_h























#include "impl_type_float.h"
#include "impl_type_wheelspeedst.h"
#include "impl_type_autonomymodest.h"
#include "impl_type_comheader.h"
#include "impl_type_uint8.h"


struct VehicleInfoAppDataType {
    ::ComHeader header;
    
    ::UInt8 gear;
    
    ::Float throttle;
    
    ::Float throttle_rate;
    
    ::Float engine_rpm;
    
    ::Float vehicle_speed;
    
    ::WheelSpeedSt wheel_speed;
    
    ::Float brake;
    
    ::Float steering_wheel_angle;
    
    ::Float steering_angle;
    
    ::Float steering_velocity;
    
    ::Float front_left_angle;
    
    ::Float front_right_angle;
    
    ::UInt8 turn_light;
    
    ::UInt8 hazard_lights;
    
    ::UInt8 horn;
    
    ::Float mileage;
    
    ::Float yaw_rate;
    
    ::Float battery_voltage;
    
    ::Float interior_temperature;
    
    ::Float outside_temperature;
    
    ::AutonomyModeSt autonomy_mode;
    

    static bool IsPlane()
    {
        return false;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(header);
        fun(gear);
        fun(throttle);
        fun(throttle_rate);
        fun(engine_rpm);
        fun(vehicle_speed);
        fun(wheel_speed);
        fun(brake);
        fun(steering_wheel_angle);
        fun(steering_angle);
        fun(steering_velocity);
        fun(front_left_angle);
        fun(front_right_angle);
        fun(turn_light);
        fun(hazard_lights);
        fun(horn);
        fun(mileage);
        fun(yaw_rate);
        fun(battery_voltage);
        fun(interior_temperature);
        fun(outside_temperature);
        fun(autonomy_mode);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(header);
        fun(gear);
        fun(throttle);
        fun(throttle_rate);
        fun(engine_rpm);
        fun(vehicle_speed);
        fun(wheel_speed);
        fun(brake);
        fun(steering_wheel_angle);
        fun(steering_angle);
        fun(steering_velocity);
        fun(front_left_angle);
        fun(front_right_angle);
        fun(turn_light);
        fun(hazard_lights);
        fun(horn);
        fun(mileage);
        fun(yaw_rate);
        fun(battery_voltage);
        fun(interior_temperature);
        fun(outside_temperature);
        fun(autonomy_mode);
    }

    bool operator == (const ::VehicleInfoAppDataType& t) const {
        return (header == t.header) && (gear == t.gear) && (throttle == t.throttle) && (throttle_rate == t.throttle_rate) && (engine_rpm == t.engine_rpm) && (vehicle_speed == t.vehicle_speed) && (wheel_speed == t.wheel_speed) && (brake == t.brake) && (steering_wheel_angle == t.steering_wheel_angle) && (steering_angle == t.steering_angle) && (steering_velocity == t.steering_velocity) && (front_left_angle == t.front_left_angle) && (front_right_angle == t.front_right_angle) && (turn_light == t.turn_light) && (hazard_lights == t.hazard_lights) && (horn == t.horn) && (mileage == t.mileage) && (yaw_rate == t.yaw_rate) && (battery_voltage == t.battery_voltage) && (interior_temperature == t.interior_temperature) && (outside_temperature == t.outside_temperature) && (autonomy_mode == t.autonomy_mode);
    }
};


#endif // impl_type_vehicleinfoappdatatype_h
