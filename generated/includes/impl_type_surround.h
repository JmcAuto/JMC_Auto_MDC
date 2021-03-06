/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_surround_h
#define impl_type_surround_h

























#include "impl_type_double.h"
#include "impl_type_bool.h"
#include "impl_type_sonar.h"


struct Surround {
    ::Bool cross_traffic_alert_left;
    
    ::Bool cross_traffic_alert_left_enabled;
    
    ::Bool blind_spot_left_alert;
    
    ::Bool blind_spot_left_alert_enabled;
    
    ::Bool cross_traffic_alert_right;
    
    ::Bool cross_traffic_alert_right_enabled;
    
    ::Bool blind_spot_right_alert;
    
    ::Bool blind_spot_right_alert_enabled;
    
    ::Double sonar00;
    
    ::Double sonar01;
    
    ::Double sonar02;
    
    ::Double sonar03;
    
    ::Double sonar04;
    
    ::Double sonar05;
    
    ::Double sonar06;
    
    ::Double sonar07;
    
    ::Double sonar08;
    
    ::Double sonar09;
    
    ::Double sonar10;
    
    ::Double sonar11;
    
    ::Bool sonar_enabled;
    
    ::Bool sonar_fault;
    
    ::Double sonar_range;
    
    ::Sonar sonar;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(cross_traffic_alert_left);
        fun(cross_traffic_alert_left_enabled);
        fun(blind_spot_left_alert);
        fun(blind_spot_left_alert_enabled);
        fun(cross_traffic_alert_right);
        fun(cross_traffic_alert_right_enabled);
        fun(blind_spot_right_alert);
        fun(blind_spot_right_alert_enabled);
        fun(sonar00);
        fun(sonar01);
        fun(sonar02);
        fun(sonar03);
        fun(sonar04);
        fun(sonar05);
        fun(sonar06);
        fun(sonar07);
        fun(sonar08);
        fun(sonar09);
        fun(sonar10);
        fun(sonar11);
        fun(sonar_enabled);
        fun(sonar_fault);
        fun(sonar_range);
        fun(sonar);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(cross_traffic_alert_left);
        fun(cross_traffic_alert_left_enabled);
        fun(blind_spot_left_alert);
        fun(blind_spot_left_alert_enabled);
        fun(cross_traffic_alert_right);
        fun(cross_traffic_alert_right_enabled);
        fun(blind_spot_right_alert);
        fun(blind_spot_right_alert_enabled);
        fun(sonar00);
        fun(sonar01);
        fun(sonar02);
        fun(sonar03);
        fun(sonar04);
        fun(sonar05);
        fun(sonar06);
        fun(sonar07);
        fun(sonar08);
        fun(sonar09);
        fun(sonar10);
        fun(sonar11);
        fun(sonar_enabled);
        fun(sonar_fault);
        fun(sonar_range);
        fun(sonar);
    }

    bool operator == (const ::Surround& t) const {
        return (cross_traffic_alert_left == t.cross_traffic_alert_left) && (cross_traffic_alert_left_enabled == t.cross_traffic_alert_left_enabled) && (blind_spot_left_alert == t.blind_spot_left_alert) && (blind_spot_left_alert_enabled == t.blind_spot_left_alert_enabled) && (cross_traffic_alert_right == t.cross_traffic_alert_right) && (cross_traffic_alert_right_enabled == t.cross_traffic_alert_right_enabled) && (blind_spot_right_alert == t.blind_spot_right_alert) && (blind_spot_right_alert_enabled == t.blind_spot_right_alert_enabled) && (sonar00 == t.sonar00) && (sonar01 == t.sonar01) && (sonar02 == t.sonar02) && (sonar03 == t.sonar03) && (sonar04 == t.sonar04) && (sonar05 == t.sonar05) && (sonar06 == t.sonar06) && (sonar07 == t.sonar07) && (sonar08 == t.sonar08) && (sonar09 == t.sonar09) && (sonar10 == t.sonar10) && (sonar11 == t.sonar11) && (sonar_enabled == t.sonar_enabled) && (sonar_fault == t.sonar_fault) && (sonar_range == t.sonar_range) && (sonar == t.sonar);
    }
};


#endif // impl_type_surround_h
