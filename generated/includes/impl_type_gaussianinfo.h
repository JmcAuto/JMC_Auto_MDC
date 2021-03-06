/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_gaussianinfo_h
#define impl_type_gaussianinfo_h








#include "impl_type_double.h"


struct GaussianInfo {
    ::Double sigma_x;
    
    ::Double sigma_y;
    
    ::Double correlation;
    
    ::Double area_probability;
    
    ::Double ellipse_a;
    
    ::Double ellipse_b;
    
    ::Double theta_a;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(sigma_x);
        fun(sigma_y);
        fun(correlation);
        fun(area_probability);
        fun(ellipse_a);
        fun(ellipse_b);
        fun(theta_a);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(sigma_x);
        fun(sigma_y);
        fun(correlation);
        fun(area_probability);
        fun(ellipse_a);
        fun(ellipse_b);
        fun(theta_a);
    }

    bool operator == (const ::GaussianInfo& t) const {
        return (sigma_x == t.sigma_x) && (sigma_y == t.sigma_y) && (correlation == t.correlation) && (area_probability == t.area_probability) && (ellipse_a == t.ellipse_a) && (ellipse_b == t.ellipse_b) && (theta_a == t.theta_a);
    }
};


#endif // impl_type_gaussianinfo_h
