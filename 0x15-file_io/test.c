#include "main.h"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage: %s filename\n", argv[0]);
		exit(0);
	}
	read_textfile(argv[1], 12);
	create_file("newfile", "\0");
	return (0);
}
