#ifndef MESHGEN_MESH_H
#define MESHGEN_MESH_H

static const int INITIAL_MESH_SIZE = 50;

#include "triangle.h"

struct mesh {
    struct triangle *triangles;
    unsigned int size;
    unsigned int counter;
    short **map;
};

void refine_new_mesh(struct mesh *mesh);

struct mesh *generate_mesh(short **map, unsigned int first_row, unsigned int first_col, unsigned int size);

struct triangle *get_new_triangle(struct mesh *mesh);

struct triangle *get_triangle(int index, struct mesh *mesh);

void free_mesh(struct mesh *mesh);

#endif //MESHGEN_MESH_H