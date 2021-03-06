/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_latcontrollerconf_h
#define impl_type_latcontrollerconf_h














#include "impl_type_double.h"
#include "impl_type_int32.h"
#include "impl_type_matrixq.h"


struct LatControllerConf {
    ::Double ts;
    
    ::Int32 preview_window;
    
    ::Double cf;
    
    ::Double cr;
    
    ::Int32 mass_fl;
    
    ::Int32 mass_fr;
    
    ::Int32 mass_rl;
    
    ::MatrixQ matrix_q;
    
    ::Int32 mass_rr;
    
    ::Double eps;
    
    ::Int32 cutoff_freq;
    
    ::Int32 mean_filter_window_size;
    
    ::Int32 max_iteration;
    
    
    
    

    static bool IsPlane()
    {
        return false;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(ts);
        fun(preview_window);
        fun(cf);
        fun(cr);
        fun(mass_fl);
        fun(mass_fr);
        fun(mass_rl);
        fun(matrix_q);
        fun(mass_rr);
        fun(eps);
        fun(cutoff_freq);
        fun(mean_filter_window_size);
        fun(max_iteration);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(ts);
        fun(preview_window);
        fun(cf);
        fun(cr);
        fun(mass_fl);
        fun(mass_fr);
        fun(mass_rl);
        fun(matrix_q);
        fun(mass_rr);
        fun(eps);
        fun(cutoff_freq);
        fun(mean_filter_window_size);
        fun(max_iteration);
    }

    bool operator == (const ::LatControllerConf& t) const {
        return (ts == t.ts) && (preview_window == t.preview_window) && (cf == t.cf) && (cr == t.cr) && (mass_fl == t.mass_fl) && (mass_fr == t.mass_fr) && (mass_rl == t.mass_rl) && (matrix_q == t.matrix_q) && (mass_rr == t.mass_rr) && (eps == t.eps) && (cutoff_freq == t.cutoff_freq) && (mean_filter_window_size == t.mean_filter_window_size) && (max_iteration == t.max_iteration);
    }
};


#endif // impl_type_latcontrollerconf_h
