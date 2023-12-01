#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/*Prototypes de fonctions*/
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);

#endif
