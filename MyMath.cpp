﻿#include "MyMath.h"
#include <math.h>

Vector3 Add(const Vector3& v1, const Vector3& v2)
{
    return { v1.x + v2.x, v1.y + v2.y, v1.z + v2.z };
}

Vector3 Subtract(const Vector3& v1, const Vector3& v2)
{
    return { v1.x - v2.x, v1.y - v2.y, v1.z - v2.z };
}

Vector3 Multiply(float scalar, const Vector3& v)
{
    return { scalar * v.x, scalar * v.y, scalar * v.z };
}

float Dot(const Vector3& v1, const Vector3& v2)
{
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

float Length(const Vector3& v)
{
    return sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
}

Vector3 Normalize(const Vector3& v)
{
    float length = Length(v);
    return { v.x / length, v.y / length, v.z / length };
}
