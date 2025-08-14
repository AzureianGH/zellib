#ifndef ZELLIB_MISC_H
#define ZELLIB_MISC_H

    #ifndef ZELLIB_DISALLOW_MISC
        #define ZELLIB_SWAP(a, b)   \
        {                           \
            typeof(a) temp = a;     \
            a = b;                  \
            b = temp;               \
        }
        #define ZELLIB_SET_BIT(val, bit)    ((val) |= (1 << (bit)))
        #define ZELLIB_CLEAR_BIT(val, bit)  ((val) &= ~(1 << (bit)))
        #define ZELLIB_TOGGLE_BIT(val, bit) ((val) ^= (1 << (bit)))
        #define ZELLIB_IS_POINTER(x) ((sizeof(x) == sizeof(void*)))
        
    #endif // ZELLIB_DISALLOW_MISC

#endif // ZELLIB_MISC_H