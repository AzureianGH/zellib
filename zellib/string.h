#ifndef ZELLIB_STRING_H
#define ZELLIB_STRING_H

    #ifndef ZELLIB_DISALLOW_STRING
        #define ZELLIB_COMPILE_TIME_STRING_LEN(str) ((sizeof(str) / sizeof(str[0])) - 1)

        #define ZELLIB_STRING_LEN(strvar, setter)            \
        do {                                                 \
            setter = 0;                                      \
            char* zel_tempstring_##__LINE__ = (char*)strvar; \
            while (*zel_tempstring_##__LINE__++)             \
                setter++;                                    \
        } while(0)
        
        #define ZELLIB_STRING_COPY(dest, src)   \
        {                                       \
            size_t i = 0;                       \
            while (src[i]) {                    \
                dest[i] = src[i];               \
                ++i;                            \
            }                                   \
            dest[i] = '\0';                     \
        }
    #endif // ZELLIB_DISALLOW_STRING

#endif // ZELLIB_STRING_H