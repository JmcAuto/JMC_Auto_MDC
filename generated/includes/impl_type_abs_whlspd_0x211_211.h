/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_abs_whlspd_0x211_211_h
#define impl_type_abs_whlspd_0x211_211_h











#include "impl_type_abs_whlspdfrntristatustype.h"
#include "impl_type_double.h"
#include "impl_type_abs_whlspdfrntlestatustype.h"
#include "impl_type_int32.h"


struct Abs_whlspd_0x211_211 {
    ::Double abs_whlspdfrntri;
    
    ::Double abs_whlspdrele;
    
    ::Double abs_whlspdreri;
    
    ::Int32 rollingcounter_0x211;
    
    ::Abs_whlspdfrntristatusType abs_whlspdreristatus;
    
    ::Abs_whlspdfrntlestatusType abs_whlspdrelestatus;
    
    ::Abs_whlspdfrntristatusType abs_whlspdfrntristatus;
    
    ::Abs_whlspdfrntlestatusType abs_whlspdfrntlestatus;
    
    ::Int32 checksum_0x211;
    
    ::Double abs_whlspdfrntle;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(abs_whlspdfrntri);
        fun(abs_whlspdrele);
        fun(abs_whlspdreri);
        fun(rollingcounter_0x211);
        fun(abs_whlspdreristatus);
        fun(abs_whlspdrelestatus);
        fun(abs_whlspdfrntristatus);
        fun(abs_whlspdfrntlestatus);
        fun(checksum_0x211);
        fun(abs_whlspdfrntle);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(abs_whlspdfrntri);
        fun(abs_whlspdrele);
        fun(abs_whlspdreri);
        fun(rollingcounter_0x211);
        fun(abs_whlspdreristatus);
        fun(abs_whlspdrelestatus);
        fun(abs_whlspdfrntristatus);
        fun(abs_whlspdfrntlestatus);
        fun(checksum_0x211);
        fun(abs_whlspdfrntle);
    }

    bool operator == (const ::Abs_whlspd_0x211_211& t) const {
        return (abs_whlspdfrntri == t.abs_whlspdfrntri) && (abs_whlspdrele == t.abs_whlspdrele) && (abs_whlspdreri == t.abs_whlspdreri) && (rollingcounter_0x211 == t.rollingcounter_0x211) && (abs_whlspdreristatus == t.abs_whlspdreristatus) && (abs_whlspdrelestatus == t.abs_whlspdrelestatus) && (abs_whlspdfrntristatus == t.abs_whlspdfrntristatus) && (abs_whlspdfrntlestatus == t.abs_whlspdfrntlestatus) && (checksum_0x211 == t.checksum_0x211) && (abs_whlspdfrntle == t.abs_whlspdfrntle);
    }
};


#endif // impl_type_abs_whlspd_0x211_211_h
