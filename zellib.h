#ifndef ZELLIB_H
#define ZELLIB_H

#ifndef ZELLIB_DISCARD_INCLUDES
    #ifndef ZELLIB_DISALLOW_TYPES
        #include "zellib/types.h"
    #endif // ZELLIB_DISALLOW_TYPES

    #ifndef ZURELIB_DISALLOW_ASSERT
        #include "zellib/assert.h"
    #endif // ZURELIB_DISALLOW_ASSERT

    #ifndef ZELLIB_DISALLOW_STRING
        #include "zellib/string.h"
    #endif // ZELLIB_DISALLOW_STRING

    #ifndef ZELLIB_DISALLOW_MATH
        #include "zellib/math.h"
    #endif // ZELLIB_DISALLOW_MATH

    #ifndef ZELLIB_DISALLOW_MEMORY
        #include "zellib/memory.h"
    #endif // ZELLIB_DISALLOW_MEMORY

    #ifndef ZELLIB_DISALLOW_MISC
        #include "zellib/misc.h"
    #endif // ZELLIB_DISALLOW_MISC

    #ifndef ZELLIB_DISALLOW_ATOMIC
        #include "zellib/atomic.h"
    #endif // ZELLIB_DISALLOW_ATOMIC
#endif // ZELLIB_NO_INCLUDES

#endif // ZELLIB_H