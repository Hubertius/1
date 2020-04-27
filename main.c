#include <stdio.h>
#include <stdlib.h>


int read_int(void *a, void *b);
void* add_int(const void *left, const void *right);
void* sub_int(const void *left, const void *right);
void* divide_int(const void *left, const void *right);
void* mul_int(const void *left, const void *right);
void show_int(const void *a);

float read_float(void *a, void *b);
void* add_float(const void *left, const void *right);
void* sub_float(const void *left, const void *right);
void* divide_float(const void *left, const void *right);
void* mul_float(const void *left, const void *right);
void show_float(const void *a);

struct operations_t
{
    void * (*add)(const void * left, const void * right);
    void * (*sub)(const void * left, const void * right);
    void * (*mul)(const void * left, const void * right);
    void * (*div)(const void * left, const void * right);
    int (*read)(void * a, void * b);
    void (*show)(const void * a);

};

struct complex_t
{
    float re;
    float im;
};

struct complex_t* set(struct complex_t* cp, float re, float im, int *err_code);
void show_complex(const struct complex_t* cp);


int is_smaller_int(const void *a, const void *b);
int is_smaller_float(const void *a, const void *b);


int main()
{
    struct operations_t operations_int;
    int a=3,b=2;
    operations_int.add = add_int;
    int *result = (int *)operations_int.add(&a,&b);
    printf("%d",*result);
    free(result);

    return 0;
}

int read_int(void *a, void *b)
{
    if( a == NULL || b == NULL )
    {
        return 1;
    }
    if(scanf("%d %d",a,b)!=2)
    {
        return 1;
    }
    return 0;
}

void* add_int(const void *left, const void *right)
{
    if( left == NULL || right == NULL )
    {
        return NULL;
    }
    int a;
    int * result = (int *) malloc(sizeof(int));
    *result = (*(int *)left) + (*(int *)right);
    return result;
}

void* sub_int(const void *left, const void *right)
{
    if( left == NULL || right == NULL )
    {
        return NULL;
    }
    int a;
    int * pointer = &a;
    *pointer = (*(int *)left) - (*(int *)right);
    void * ps = pointer;
    return ps;
}

void* divide_int(const void *left, const void *right)
{
    if( left == NULL || right == NULL )
    {
        return NULL;
    }
    int a;
    int * pointer = &a;
    *pointer = (*(int *)left) / (*(int *)right);
    void * ps = pointer;
    return ps;
}

void* mul_int(const void *left, const void *right)
{
    if( left == NULL || right == NULL )
    {
        return NULL;
    }
    int a;
    int * pointer = &a;
    *pointer = (*(int *)left) * (*(int *)right);
    void * ps = pointer;
    return ps;
}

void show_int(const void *a)
{
    if(a == NULL)
    {

    }
    else
    {
        printf("%d",(*(int *)a));
    }
}

float read_float(void *a, void *b)
{
    if( a == NULL || b == NULL )
    {
        return 1;
    }
    if(scanf("%f %f",a,b)!=2)
    {
        return 1;
    }
    return 0;

}
void* add_float(const void *left, const void *right)
{
    if( left == NULL || right == NULL )
    {
        return NULL;
    }
    float a;
    float * pointer = &a;
    *pointer = (*(float *)left) + (*(float *)right);
    void * ps = pointer;
    return ps;

}
void* sub_float(const void *left, const void *right)
{
    if( left == NULL || right == NULL )
    {
        return NULL;
    }
    float a;
    float * pointer = &a;
    *pointer = (*(float *)left) + (*(float *)right);
    void * ps = pointer;
    return ps;

}
void* divide_float(const void *left, const void *right)
{
    if( left == NULL || right == NULL )
    {
        return NULL;
    }
    float a;
    float * pointer = &a;
    *pointer = (*(float *)left) + (*(float *)right);
    void * ps = pointer;
    return ps;

}
void* mul_float(const void *left, const void *right)
{
    if( left == NULL || right == NULL )
    {
        return NULL;
    }
    float a;
    float * pointer = &a;
    *pointer = (*(float *)left) + (*(float *)right);
    void * ps = pointer;
    return ps;

}
void show_float(const void *a)
{
    if( a == NULL )
    {

    }
    else
    {
        printf("%f",*(float*)a);
    }
}

int is_smaller_int(const void *a, const void *b)
{
    if( a == NULL || b == NULL )
    {
        return -2;
    }
    if( *(int*)a < *(int*)b)
    {
        return 1;
    }
    return 0;
}
int is_smaller_float(const void *a, const void *b)
{
    if( a == NULL || b == NULL )
    {
        return -2;
    }
    if( *(float*)a < *(float*)b)
    {
        return 1;
    }
    return 0;

}

struct complex_t* set(struct complex_t* cp, float re, float im, int *err_code)
{
    if(cp==NULL)
    {
        if(err_code!=NULL)
        {
            *err_code=1;
        }
        return NULL;
    }
    (cp->re)=re;
    (cp->im)=im;
    if(err_code != NULL)
    {
        *err_code=0;
    }
    return cp;
};
void show_complex(const struct complex_t* cp)
{
    if( cp != NULL)
    {
            if( (cp->im)<0 )
            {
                printf("%.2f - i%.2f\n",(cp->re), (-1) * (cp->im) );
            }
            else
            {
                printf("%.2f + i%.2f\n",(cp->re),(cp->im));
            }
    }
}



