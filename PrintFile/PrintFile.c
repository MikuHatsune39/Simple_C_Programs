#include "funprint.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc > 1)
    {
        char *mybuffer = NULL;
        size_t size = 0;

        FILE *fp = fopen(argv[1], "r"); // warning

        fseek(fp, 0, SEEK_END);
        size = ftell(fp);

        rewind(fp);

        
        mybuffer = malloc((size + 1) * sizeof(*mybuffer));

        fread(mybuffer, size, 1, fp);

        mybuffer[size] = '\0';

        if(argc == 3)
        {
            int speed = atoi(argv[2]);
            printCharsAtSpeed(mybuffer, speed);
        }
        else
        {
            printCharsAtSpeed(mybuffer, 50);
        }
    }
    return 0;
}

