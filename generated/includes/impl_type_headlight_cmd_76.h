/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_headlight_cmd_76_h
#define impl_type_headlight_cmd_76_h


#include "impl_type_bool.h"


struct Headlight_cmd_76 {
    ::Bool headlight_cmd;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(headlight_cmd);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(headlight_cmd);
    }

    bool operator == (const ::Headlight_cmd_76& t) const {
        return (headlight_cmd == t.headlight_cmd);
    }
};


#endif // impl_type_headlight_cmd_76_h
