/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_padmessage_h
#define impl_type_padmessage_h




#include "impl_type_drivingaction.h"
#include "impl_type_drivingmode.h"
#include "impl_type_comheader.h"


struct PadMessage {
    ::ComHeader header;
    
    ::DrivingMode driving_mode;
    
    ::DrivingAction action;
    

    static bool IsPlane()
    {
        return false;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(header);
        fun(driving_mode);
        fun(action);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(header);
        fun(driving_mode);
        fun(action);
    }

    bool operator == (const ::PadMessage& t) const {
        return (header == t.header) && (driving_mode == t.driving_mode) && (action == t.action);
    }
};


#endif // impl_type_padmessage_h
