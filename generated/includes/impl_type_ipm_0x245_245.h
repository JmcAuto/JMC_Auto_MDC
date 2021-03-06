/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_ipm_0x245_245_h
#define impl_type_ipm_0x245_245_h





















#include "impl_type_ipm_laneassit_warningvibrationtype.h"
#include "impl_type_ipm_laneassit_sensitivitytype.h"
#include "impl_type_ipm_slaspdlimittype.h"
#include "impl_type_ipm_laneassit_rightvisualizationtype.h"
#include "impl_type_ipm_tjaica_statustype.h"
#include "impl_type_ipm_hma_statustype.h"
#include "impl_type_ipm_laneassit_leftvisualizationtype.h"
#include "impl_type_ipm_laneassittypetype.h"
#include "impl_type_ipm_slastatetype.h"
#include "impl_type_ipm_laneassit_statustype.h"
#include "impl_type_ipm_laneassit_handsonreqtype.h"
#include "impl_type_ipm_slaspdlimitunitstype.h"
#include "impl_type_ipm_laneassit_torquereqstatustype.h"
#include "impl_type_double.h"
#include "impl_type_ipm_laneassit_warningaudiotype.h"
#include "impl_type_ipm_hma_highbeamreqtype.h"
#include "impl_type_ipm_ldwwarningtypetype.h"
#include "impl_type_int32.h"
#include "impl_type_ipm_laneassit_torquevaliditytype.h"


struct Ipm_0x245_245 {
    ::Ipm_laneassit_torquereqstatusType ipm_laneassit_torquereqstatus;
    
    ::Ipm_laneassit_torquevalidityType ipm_laneassit_torquevalidity;
    
    ::Ipm_laneassit_sensitivityType ipm_laneassit_sensitivity;
    
    ::Ipm_laneassit_warningaudioType ipm_laneassit_warningaudio;
    
    ::Ipm_laneassit_leftvisualizationType ipm_laneassit_leftvisualization;
    
    ::Ipm_laneassit_rightvisualizationType ipm_laneassit_rightvisualization;
    
    ::Ipm_slaspdlimitunitsType ipm_slaspdlimitunits;
    
    ::Ipm_slastateType ipm_slastate;
    
    ::Ipm_laneassit_statusType ipm_laneassit_status;
    
    ::Ipm_slaspdlimitType ipm_slaspdlimit;
    
    ::Ipm_hma_statusType ipm_hma_status;
    
    ::Ipm_tjaica_statusType ipm_tjaica_status;
    
    ::Int32 rolling_counter_0x245;
    
    ::Ipm_ldwwarningtypeType ipm_ldwwarningtype;
    
    ::Ipm_laneassit_handsonreqType ipm_laneassit_handsonreq;
    
    ::Ipm_hma_highbeamreqType ipm_hma_highbeamreq;
    
    ::Int32 checksum_0x245;
    
    ::Double ipm_laneassit_torquereq;
    
    ::Ipm_laneassittypeType ipm_laneassittype;
    
    ::Ipm_laneassit_warningvibrationType ipm_laneassit_warningvibration;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(ipm_laneassit_torquereqstatus);
        fun(ipm_laneassit_torquevalidity);
        fun(ipm_laneassit_sensitivity);
        fun(ipm_laneassit_warningaudio);
        fun(ipm_laneassit_leftvisualization);
        fun(ipm_laneassit_rightvisualization);
        fun(ipm_slaspdlimitunits);
        fun(ipm_slastate);
        fun(ipm_laneassit_status);
        fun(ipm_slaspdlimit);
        fun(ipm_hma_status);
        fun(ipm_tjaica_status);
        fun(rolling_counter_0x245);
        fun(ipm_ldwwarningtype);
        fun(ipm_laneassit_handsonreq);
        fun(ipm_hma_highbeamreq);
        fun(checksum_0x245);
        fun(ipm_laneassit_torquereq);
        fun(ipm_laneassittype);
        fun(ipm_laneassit_warningvibration);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(ipm_laneassit_torquereqstatus);
        fun(ipm_laneassit_torquevalidity);
        fun(ipm_laneassit_sensitivity);
        fun(ipm_laneassit_warningaudio);
        fun(ipm_laneassit_leftvisualization);
        fun(ipm_laneassit_rightvisualization);
        fun(ipm_slaspdlimitunits);
        fun(ipm_slastate);
        fun(ipm_laneassit_status);
        fun(ipm_slaspdlimit);
        fun(ipm_hma_status);
        fun(ipm_tjaica_status);
        fun(rolling_counter_0x245);
        fun(ipm_ldwwarningtype);
        fun(ipm_laneassit_handsonreq);
        fun(ipm_hma_highbeamreq);
        fun(checksum_0x245);
        fun(ipm_laneassit_torquereq);
        fun(ipm_laneassittype);
        fun(ipm_laneassit_warningvibration);
    }

    bool operator == (const ::Ipm_0x245_245& t) const {
        return (ipm_laneassit_torquereqstatus == t.ipm_laneassit_torquereqstatus) && (ipm_laneassit_torquevalidity == t.ipm_laneassit_torquevalidity) && (ipm_laneassit_sensitivity == t.ipm_laneassit_sensitivity) && (ipm_laneassit_warningaudio == t.ipm_laneassit_warningaudio) && (ipm_laneassit_leftvisualization == t.ipm_laneassit_leftvisualization) && (ipm_laneassit_rightvisualization == t.ipm_laneassit_rightvisualization) && (ipm_slaspdlimitunits == t.ipm_slaspdlimitunits) && (ipm_slastate == t.ipm_slastate) && (ipm_laneassit_status == t.ipm_laneassit_status) && (ipm_slaspdlimit == t.ipm_slaspdlimit) && (ipm_hma_status == t.ipm_hma_status) && (ipm_tjaica_status == t.ipm_tjaica_status) && (rolling_counter_0x245 == t.rolling_counter_0x245) && (ipm_ldwwarningtype == t.ipm_ldwwarningtype) && (ipm_laneassit_handsonreq == t.ipm_laneassit_handsonreq) && (ipm_hma_highbeamreq == t.ipm_hma_highbeamreq) && (checksum_0x245 == t.checksum_0x245) && (ipm_laneassit_torquereq == t.ipm_laneassit_torquereq) && (ipm_laneassittype == t.ipm_laneassittype) && (ipm_laneassit_warningvibration == t.ipm_laneassit_warningvibration);
    }
};


#endif // impl_type_ipm_0x245_245_h
