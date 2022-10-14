#ifndef CALC_H
#define CALC_H

/**
 * Desc: Header file for all structures & prototypes used by 3-main.c program
 */

/**
 * struct op - function to group all op variables in 1 memory block
 * @op: The operator.
 * @f: The associated function.
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif


