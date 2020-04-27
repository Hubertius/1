#ifndef INT_OPERATIONS_H_INCLUDED
#define INT_OPERATIONS_H_INCLUDED

int read_int(void *a, void *b);
void* add_int(const void *left, const void *right);
void* sub_int(const void *left, const void *right);
void* divide_int(const void *left, const void *right);
void* mul_int(const void *left, const void *right);
void show_int(const void *a);

#endif // INT_OPERATIONS_H_INCLUDED
