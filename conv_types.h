#ifndef CORRECT_CONVOLUTIONAL_CONV_TYPES_H
#define CORRECT_CONVOLUTIONAL_CONV_TYPES_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <stdint.h>
#ifndef _MSC_VER
#include <unistd.h>
#ifdef __MINGW32__
#define ssize_t int
#endif
#else
        #define ssize_t int
#endif

#define NOEXPORT __attribute__ ((visibility ("hidden")))

typedef unsigned int shift_register_t;
typedef uint16_t polynomial_t;
typedef uint64_t path_t;
typedef uint8_t soft_t;
static const soft_t soft_max = UINT8_MAX;

typedef uint16_t distance_t;
static const distance_t distance_max = UINT16_MAX;

typedef enum {
    CORRECT_SOFT_LINEAR,
    CORRECT_SOFT_QUADRATIC,
} soft_measurement_t;

#endif

