#ifndef ZELLIB_ATOMIC_H
#define ZELLIB_ATOMIC_H

    #ifndef ZELLIB_DISALLOW_ATOMIC
        #define ZELLIB_ATOMIC_BARRIER() __asm__ volatile("" ::: "memory")

        #ifdef __GNUC__
            // Atomic Exchange
            #define ZELLIB_ATOMIC_EXCHANGE(ptr, val) \
                __atomic_exchange_n(ptr, val, __ATOMIC_SEQ_CST)

            // Atomic Fetch & Add
            #define ZELLIB_ATOMIC_FETCH_ADD(ptr, val) \
                __atomic_fetch_add(ptr, val, __ATOMIC_SEQ_CST)

            // Atomic Fetch & Sub
            #define ZELLIB_ATOMIC_FETCH_SUB(ptr, val) \
                __atomic_fetch_sub(ptr, val, __ATOMIC_SEQ_CST)

            // Atomic Compare & Swap
            #define ZELLIB_ATOMIC_CMPXCHG(ptr, expected, desired) \
                __atomic_compare_exchange_n(ptr, expected, desired, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
                

        #elif defined(_MSC_VER)
            #include <intrin.h>

            #define ZELLIB_ATOMIC_EXCHANGE(ptr, val) \
                _InterlockedExchange((volatile long*)ptr, val)

            #define ZELLIB_ATOMIC_FETCH_ADD(ptr, val) \
                _InterlockedExchangeAdd((volatile long*)ptr, val)

            #define ZELLIB_ATOMIC_FETCH_SUB(ptr, val) \
                _InterlockedExchangeAdd((volatile long*)ptr, -(val))

            #define ZELLIB_ATOMIC_CMPXCHG(ptr, expected, desired) \
                _InterlockedCompareExchange((volatile long*)ptr, desired, expected)

        #else
            // Fallback (Compiler-Specific ASM)
            #define ZELLIB_ATOMIC_EXCHANGE(ptr, val) \
                ({ __asm__ volatile("xchg %0, %1" : "+m"(*(ptr)), "+r"(val)); val; })

            #define ZELLIB_ATOMIC_FETCH_ADD(ptr, val) \
                ({ __asm__ volatile("lock xadd %0, %1" : "+m"(*(ptr)), "+r"(val)); val; })

            #define ZELLIB_ATOMIC_FETCH_SUB(ptr, val) \
                ({ __asm__ volatile("lock xadd %0, %1" : "+m"(*(ptr)), "+r"(-val)); val; })

            #define ZELLIB_ATOMIC_CMPXCHG(ptr, expected, desired) \
                ({ char result; \
                __asm__ volatile("lock cmpxchg %2, %1" \
                                    : "=a"(expected), "+m"(*(ptr)), "+r"(desired) \
                                    : "a"(expected) \
                                    : "memory"); \
                result; })
        #endif // __GNUC__
    #endif // ZELLIB_DISALLOW_ATOMIC
#endif // ZELLIB_ATOMIC_H