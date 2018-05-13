#include "funprint.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i = 1;
    while(argv[i] != '\0')
    {
		printChars(argv[i]);
		printf("\n");
        i++;
    }
    return 0;
}