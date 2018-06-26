#include "funprint.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc > 1)
    {
        char *mybuffer = NULL;
        size_t size = 0;

        FILE *fp = fopen(argv[1], "r"); // warning
        if(fp == NULL)
        {
            printf("Error: File not found.");
            return 1;
        }

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
    else
    {
        printf("Usage:\nPrintFile filename\nOr:\nPrintFile filename speed\n\nDefault speed is 50 (lowernumber = faster)");
    }
    return 0;
}

