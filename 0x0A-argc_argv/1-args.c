#include <stdio.h>

int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		argv[i] = argv[i];
	}
	printf("%d\n", (argc - 1));
	return (0);
}
