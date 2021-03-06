#ifndef MESHGEN_UTILS_H
#define MESHGEN_UTILS_H

#ifndef EPSILON
#define EPSILON 1e-8
#endif

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

struct config {
    double tolerance;
    size_t requested_size;
    char *output_filename;
    char *input_filename;
    bool read_from_ASC;
    double west_border;
    double north_border;
    double east_border;
    double south_border;
    char *map_dir;
    bool use_inp;
    bool post_utm;
    bool use_height;
    bool pre_utm;
    bool use_smesh;
    bool use_floater;
};

bool
is_lesser(double a, double b);

bool
is_greater(double a, double b);

bool
equals(const double a, const double b);

double
floor2(double a);

double
ceil2(double a);

void
change_bytes_order(uint16_t *var_ptr);

void
swap_if_required(double *should_be_lower, double *should_be_bigger);

size_t
gcd(size_t a, size_t b);

double
d2r(double degrees);

double
r2d(double radians);

void
shift(int from, int to, size_t *array);

#endif //MESHGEN_UTILS_H
