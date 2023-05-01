#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
/**
* main - entry point
* @argc: contain number of arguments
* @argv: pointer of pointers containning strings
* Return: 0 on success
*/
