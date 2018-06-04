#ifndef MESHGEN_INPUT_H
#define MESHGEN_INPUT_H

#include <stdlib.h>
#define RESOLUTION 3

static const int VALUES_IN_DEGREE = 60 * 60 / RESOLUTION;
static const unsigned short PIXEL_SIZE = 2;

struct map *
read_map(const double west_border, const double north_border, const double east_border,
         const double south_border, char *map_dir);

void
read_map2(double **map_data, const char *map_dir, int west_border_int, int north_border_int, size_t cols,
          size_t rows);

void
get_filename(char *filename, const char *map_dir, int begin_longitude_int,
             int begin_latitude_int);

void
swap_if_needed(double *should_be_lower, double *should_be_bigger);

#endif // MESHGEN_INPUT_H
