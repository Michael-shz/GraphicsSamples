/* 
 * Copyright 2009 by NVIDIA Corporation.  All rights reserved.  All
 * information contained herein is proprietary and confidential to NVIDIA
 * Corporation.  Any use, reproduction, or disclosure without the written
 * permission of NVIDIA Corporation is prohibited.
 */

#include <Cg/double.hpp>
#include <Cg/upper3x4.hpp>

namespace Cg {

float3x4 upper3x4(float1x1 m)
{
    return upper3x4<float,1,1>(m);
}

float3x4 upper3x4(float1x2 m)
{
    return upper3x4<float,1,2>(m);
}

float3x4 upper3x4(float1x3 m)
{
    return upper3x4<float,1,3>(m);
}

float3x4 upper3x4(float1x4 m)
{
    return upper3x4<float,1,4>(m);
}

float3x4 upper3x4(float2x1 m)
{
    return upper3x4<float,2,1>(m);
}

float3x4 upper3x4(float2x2 m)
{
    return upper3x4<float,2,2>(m);
}

float3x4 upper3x4(float2x3 m)
{
    return upper3x4<float,2,3>(m);
}

float3x4 upper3x4(float2x4 m)
{
    return upper3x4<float,2,4>(m);
}

float3x4 upper3x4(float3x1 m)
{
    return upper3x4<float,3,1>(m);
}

float3x4 upper3x4(float3x2 m)
{
    return upper3x4<float,3,2>(m);
}

float3x4 upper3x4(float3x3 m)
{
    return upper3x4<float,3,3>(m);
}

float3x4 upper3x4(float3x4 m)
{
    return upper3x4<float,3,4>(m);
}

float3x4 upper3x4(float4x1 m)
{
    return upper3x4<float,4,1>(m);
}

float3x4 upper3x4(float4x2 m)
{
    return upper3x4<float,4,2>(m);
}

float3x4 upper3x4(float4x3 m)
{
    return upper3x4<float,4,3>(m);
}

float3x4 upper3x4(float4x4 m)
{
    return upper3x4<float,4,4>(m);
}

double3x4 upper3x4(double1x1 m)
{
    return upper3x4<double,1,1>(m);
}

double3x4 upper3x4(double1x2 m)
{
    return upper3x4<double,1,2>(m);
}

double3x4 upper3x4(double1x3 m)
{
    return upper3x4<double,1,3>(m);
}

double3x4 upper3x4(double1x4 m)
{
    return upper3x4<double,1,4>(m);
}

double3x4 upper3x4(double2x1 m)
{
    return upper3x4<double,2,1>(m);
}

double3x4 upper3x4(double2x2 m)
{
    return upper3x4<double,2,2>(m);
}

double3x4 upper3x4(double2x3 m)
{
    return upper3x4<double,2,3>(m);
}

double3x4 upper3x4(double2x4 m)
{
    return upper3x4<double,2,4>(m);
}

double3x4 upper3x4(double3x1 m)
{
    return upper3x4<double,3,1>(m);
}

double3x4 upper3x4(double3x2 m)
{
    return upper3x4<double,3,2>(m);
}

double3x4 upper3x4(double3x3 m)
{
    return upper3x4<double,3,3>(m);
}

double3x4 upper3x4(double3x4 m)
{
    return upper3x4<double,3,4>(m);
}

double3x4 upper3x4(double4x1 m)
{
    return upper3x4<double,4,1>(m);
}

double3x4 upper3x4(double4x2 m)
{
    return upper3x4<double,4,2>(m);
}

double3x4 upper3x4(double4x3 m)
{
    return upper3x4<double,4,3>(m);
}

double3x4 upper3x4(double4x4 m)
{
    return upper3x4<double,4,4>(m);
}

} // namespace Cg

