#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - Structure op
 * @op: L'opérateur
 * @f: La fonction associée
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/*Prototypes de fonctions*/
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/*Prototype de pointeurs de fonctions*/
int (*get_op_func(char *s))(int, int);

#endif
