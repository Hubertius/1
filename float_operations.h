#ifndef FLOAT_OPERATIONS_H_INCLUDED
#define FLOAT_OPERATIONS_H_INCLUDED

float read_float(void *a, void *b);
void* add_float(const void *left, const void *right);
void* sub_float(const void *left, const void *right);
void* divide_float(const void *left, const void *right);
void* mul_float(const void *left, const void *right);
void show_float(const void *a);

#endif // FLOAT_OPERATIONS_H_INCLUDED
