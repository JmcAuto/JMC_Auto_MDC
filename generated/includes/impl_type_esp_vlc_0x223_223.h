/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_esp_vlc_0x223_223_h
#define impl_type_esp_vlc_0x223_223_h














#include "impl_type_esp_vlcengtorqreqacttype.h"
#include "impl_type_esp_apa_gearboxenabletype.h"
#include "impl_type_double.h"
#include "impl_type_esp_pam_lc_failureststype.h"
#include "impl_type_esp_vlcapa_availabletype.h"
#include "impl_type_int32.h"
#include "impl_type_esp_vlc_apactivetype.h"
#include "impl_type_esp_vlc_activetype.h"
#include "impl_type_esp_target_gear_requesttype.h"
#include "impl_type_esp_vlc_availabletype.h"
#include "impl_type_esp_pam_lc_statustype.h"


struct Esp_vlc_0x223_223 {
    ::Double esp_vlc_internaltargetacce;
    
    ::Esp_apa_gearboxenableType esp_apa_gearboxenable;
    
    ::Esp_target_gear_requestType esp_target_gear_request;
    
    ::Esp_vlc_apactiveType esp_vlc_apactive;
    
    ::Esp_pam_lc_failurestsType esp_pam_lc_failurests;
    
    ::Esp_pam_lc_statusType esp_pam_lc_status;
    
    ::Int32 rolling_counter_0x223;
    
    ::Esp_vlc_activeType esp_vlc_active;
    
    ::Esp_vlc_availableType esp_vlc_available;
    
    ::Esp_vlcapa_availableType esp_vlcapa_available;
    
    ::Esp_vlcengtorqreqactType esp_vlcengtorqreqact;
    
    ::Int32 checksum_0x223;
    
    ::Int32 esp_vlcengtorqreq;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(esp_vlc_internaltargetacce);
        fun(esp_apa_gearboxenable);
        fun(esp_target_gear_request);
        fun(esp_vlc_apactive);
        fun(esp_pam_lc_failurests);
        fun(esp_pam_lc_status);
        fun(rolling_counter_0x223);
        fun(esp_vlc_active);
        fun(esp_vlc_available);
        fun(esp_vlcapa_available);
        fun(esp_vlcengtorqreqact);
        fun(checksum_0x223);
        fun(esp_vlcengtorqreq);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(esp_vlc_internaltargetacce);
        fun(esp_apa_gearboxenable);
        fun(esp_target_gear_request);
        fun(esp_vlc_apactive);
        fun(esp_pam_lc_failurests);
        fun(esp_pam_lc_status);
        fun(rolling_counter_0x223);
        fun(esp_vlc_active);
        fun(esp_vlc_available);
        fun(esp_vlcapa_available);
        fun(esp_vlcengtorqreqact);
        fun(checksum_0x223);
        fun(esp_vlcengtorqreq);
    }

    bool operator == (const ::Esp_vlc_0x223_223& t) const {
        return (esp_vlc_internaltargetacce == t.esp_vlc_internaltargetacce) && (esp_apa_gearboxenable == t.esp_apa_gearboxenable) && (esp_target_gear_request == t.esp_target_gear_request) && (esp_vlc_apactive == t.esp_vlc_apactive) && (esp_pam_lc_failurests == t.esp_pam_lc_failurests) && (esp_pam_lc_status == t.esp_pam_lc_status) && (rolling_counter_0x223 == t.rolling_counter_0x223) && (esp_vlc_active == t.esp_vlc_active) && (esp_vlc_available == t.esp_vlc_available) && (esp_vlcapa_available == t.esp_vlcapa_available) && (esp_vlcengtorqreqact == t.esp_vlcengtorqreqact) && (checksum_0x223 == t.checksum_0x223) && (esp_vlcengtorqreq == t.esp_vlcengtorqreq);
    }
};


#endif // impl_type_esp_vlc_0x223_223_h
