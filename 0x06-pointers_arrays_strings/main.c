#include "main.h"
#include <stdio.h>

int main(void)
{
	char str1[10] = "Hello";
	char str2[10] = "World";
	_strcat(str1, str2);
	printf("%s", str1);
	return (0);
}
