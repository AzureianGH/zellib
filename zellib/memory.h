#ifndef ZELLIB_MEMORY_H
#define ZELLIB_MEMORY_H

    #ifndef ZELLIB_DISALLOW_MEMORY
        #define ZELLIB_MEMCPY(dest, src, size)  \
        {                                       \
            size_t i = 0;                       \
            char *d = (char *)(dest);           \
            char *s = (char *)(src);            \
            while (i < size) {                  \
                d[i] = s[i];                    \
                ++i;                            \
            }                                   \
        }

        #define ZELLIB_MEMSET(dest, val, size)  \
        {                                       \
            size_t i = 0;                       \
            char *d = (char *)(dest);           \
            while (i < size) {                  \
                d[i] = val;                     \
                ++i;                            \
            }                                   \
        }
    #endif // ZELLIB_DISALLOW_MEMORY

#endif // ZELLIB_MEMORY_H