#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int counter = 0;
	srandom(time(NULL));
    	char randChar;
	int  passwordLength = 8;

	while(counter < passwordLength)
	{
		randChar = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"[random () % 62];
		printf("%c", randChar);
		counter++;
	}
	printf("\n");
	return 0;
}
