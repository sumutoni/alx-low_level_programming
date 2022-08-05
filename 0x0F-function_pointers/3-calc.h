#ifndef CALC_H
#define CALC_H

/**
 * op_t - typedef of op structure
 */
typedef struct op op_t;
/**
 * struct op - struct op
 * @op: operator
 * @f: associated function
 */
struct op
{
	char *op;
	int (*f)(int a, int b);
};
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
int main(int argc, char *argv[]);

#endif
