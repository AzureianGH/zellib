#ifndef ZELLIB_MATH_H
#define ZELLIB_MATH_H

    #ifndef ZELLIB_DISALLOW_MATH
        #define ZELLIB_MATH_PI 3.14159265358979323846
        #define ZELLIB_MATH_E 2.71828182845904523536

        #define ZELLIB_MAX(a, b) ((a) > (b) ? (a) : (b))
        #define ZELLIB_MIN(a, b) ((a) < (b) ? (a) : (b))

        #define ZELLIB_CLAMP(val, min, max)  \
            ((val) < (min) ? (min) : ((val) > (max) ? (max) : (val)))

        #define ZELLIB_ROUNDUP(val, multiple) \
            (((val) + (multiple) - 1) / (multiple)) * (multiple)
    #endif // ZELLIB_DISALLOW_MATH

#endif // ZELLIB_MATH_H