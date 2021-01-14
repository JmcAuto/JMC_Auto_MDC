/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_checkresponsesignal_h
#define impl_type_checkresponsesignal_h








#include "impl_type_bool.h"


struct CheckResponseSignal {
    ::Bool is_eps_online;
    
    ::Bool is_epb_online;
    
    ::Bool is_esp_online;
    
    ::Bool is_vtog_online;
    
    ::Bool is_scu_online;
    
    ::Bool is_switch_online;
    
    ::Bool is_vcu_online;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(is_eps_online);
        fun(is_epb_online);
        fun(is_esp_online);
        fun(is_vtog_online);
        fun(is_scu_online);
        fun(is_switch_online);
        fun(is_vcu_online);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(is_eps_online);
        fun(is_epb_online);
        fun(is_esp_online);
        fun(is_vtog_online);
        fun(is_scu_online);
        fun(is_switch_online);
        fun(is_vcu_online);
    }

    bool operator == (const ::CheckResponseSignal& t) const {
        return (is_eps_online == t.is_eps_online) && (is_epb_online == t.is_epb_online) && (is_esp_online == t.is_esp_online) && (is_vtog_online == t.is_vtog_online) && (is_scu_online == t.is_scu_online) && (is_switch_online == t.is_switch_online) && (is_vcu_online == t.is_vcu_online);
    }
};


#endif // impl_type_checkresponsesignal_h