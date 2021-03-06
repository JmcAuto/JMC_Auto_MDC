/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_adaptermanagerconfig_h
#define impl_type_adaptermanagerconfig_h



#include "impl_type_bool.h"
#include "impl_type_adapterconfig.h"


struct AdapterManagerConfig {
    ::AdapterConfig config;
    
    ::Bool is_ros;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(config);
        fun(is_ros);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(config);
        fun(is_ros);
    }

    bool operator == (const ::AdapterManagerConfig& t) const {
        return (config == t.config) && (is_ros == t.is_ros);
    }
};


#endif // impl_type_adaptermanagerconfig_h
