/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_chassisdetail_h
#define impl_type_chassisdetail_h





















#include "impl_type_ems.h"
#include "impl_type_gear.h"
#include "impl_type_bool.h"
#include "impl_type_deceleration.h"
#include "impl_type_safety.h"
#include "impl_type_chassisdetailtype.h"
#include "impl_type_gem.h"
#include "impl_type_epstype.h"
#include "impl_type_epb.h"
#include "impl_type_light.h"
#include "impl_type_vehiclespd.h"
#include "impl_type_gas.h"
#include "impl_type_esp.h"
#include "impl_type_checkresponsesignal.h"
#include "impl_type_brake.h"
#include "impl_type_basicinfo.h"
#include "impl_type_lat_lon_heading_rpt_82.h"
#include "impl_type_battery.h"


struct ChassisDetail {
    ::ChassisDetailType car_type;
    
    ::BasicInfo basic;
    
    ::Safety safety;
    
    ::Gear gear;
    
    ::Ems ems;
    
    ::Esp esp;
    
    ::Gas gas;
    
    ::Epb epb;
    
    ::Brake brake;
    
    ::Deceleration deceleration;
    
    ::VehicleSpd vehicle_spd;
    
    ::EpsType eps;
    
    ::Light light;
    
    ::Battery battery;
    
    ::CheckResponseSignal check_response;
    
    ::Lat_lon_heading_rpt_82 license;
    
    ::Safety surround;
    
    ::Gem gem;
    
    
    ::Bool teshun;
    
    ::Bool cx75;
    

    static bool IsPlane()
    {
        return false;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(car_type);
        fun(basic);
        fun(safety);
        fun(gear);
        fun(ems);
        fun(esp);
        fun(gas);
        fun(epb);
        fun(brake);
        fun(deceleration);
        fun(vehicle_spd);
        fun(eps);
        fun(light);
        fun(battery);
        fun(check_response);
        fun(license);
        fun(surround);
        fun(gem);
        fun(teshun);
        fun(cx75);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(car_type);
        fun(basic);
        fun(safety);
        fun(gear);
        fun(ems);
        fun(esp);
        fun(gas);
        fun(epb);
        fun(brake);
        fun(deceleration);
        fun(vehicle_spd);
        fun(eps);
        fun(light);
        fun(battery);
        fun(check_response);
        fun(license);
        fun(surround);
        fun(gem);
        fun(teshun);
        fun(cx75);
    }

    bool operator == (const ::ChassisDetail& t) const {
        return (car_type == t.car_type) && (basic == t.basic) && (safety == t.safety) && (gear == t.gear) && (ems == t.ems) && (esp == t.esp) && (gas == t.gas) && (epb == t.epb) && (brake == t.brake) && (deceleration == t.deceleration) && (vehicle_spd == t.vehicle_spd) && (eps == t.eps) && (light == t.light) && (battery == t.battery) && (check_response == t.check_response) && (license == t.license) && (surround == t.surround) && (gem == t.gem) && (teshun == t.teshun) && (cx75 == t.cx75);
    }
};


#endif // impl_type_chassisdetail_h