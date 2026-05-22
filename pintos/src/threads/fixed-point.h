#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

/* Fixed-point arithmetic library.
 * 
 * We use 17.14 fixed-point numbers (17 bits for the integer part,
 * 14 bits for the fractional part). This allows us to represent values
 * from about -131072 to 131071 with precision to 1/16384.
 * 
 * For the 4.4BSD scheduler, we use fixed-point to calculate:
 * - load_avg: average number of threads ready to run
 * - recent_cpu: recent CPU time used by each thread
 */

#include <stdint.h>

/* Fixed-point value type */
typedef int32_t fixed_t;

/* Fractional bits (q = 14) */
#define FP_SHIFT 14

/* Conversion from integer to fixed-point */
#define FP_CONST(X) ((fixed_t)(X) << FP_SHIFT)

/* Convert fixed-point to integer (truncating toward zero) */
#define FP_INT_PART(X) ((X) >> FP_SHIFT)

/* Convert fixed-point to integer (rounding to nearest) */
#define FP_ROUND(X) (FP_INT_PART((X) + FP_CONST(1) / 2))

/* Add two fixed-point numbers: X + Y */
#define FP_ADD(X, Y) ((X) + (Y))

/* Subtract two fixed-point numbers: X - Y */
#define FP_SUB(X, Y) ((X) - (Y))

/* Add fixed-point and integer: X + n */
#define FP_ADD_INT(X, N) ((X) + FP_CONST(N))

/* Subtract integer from fixed-point: X - n */
#define FP_SUB_INT(X, N) ((X) - FP_CONST(N))

/* Multiply two fixed-point numbers: X * Y */
#define FP_MUL(X, Y) (((int64_t)(X)) * (Y) >> FP_SHIFT)

/* Multiply fixed-point by integer: X * n */
#define FP_MUL_INT(X, N) ((X) * (N))

/* Divide two fixed-point numbers: X / Y */
#define FP_DIV(X, Y) ((((int64_t)(X)) << FP_SHIFT) / (Y))

/* Divide fixed-point by integer: X / n */
#define FP_DIV_INT(X, N) ((X) / (N))

#endif /* threads/fixed-point.h */
