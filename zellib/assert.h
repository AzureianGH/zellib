#ifndef ZELLIB_ASSERT_H
#define ZELLIB_ASSERT_H

    #ifndef ZURELIB_DISALLOW_ASSERT
        #define ZELLIB_ASSERT(x, f) if (!(x) )          \
        {                                               \
            if (f) f();                                 \
        }

        #define ZELLIB_ASSERT_MSG(x, f, m) if (!(x) )   \
        {                                               \
            if (f) v(m);                                \
        }

        #define ZELLIB_STATIC_ASSERT(cond) typedef char static_assertion[(cond) ? 1 : -1]    
    #endif // ZURELIB_DISALLOW_ASSERT
    
#endif // ZELLIB_ASSERT_H