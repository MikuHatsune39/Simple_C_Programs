/* jpy2cad.c */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i = 1;
    int jpy_amount = 0;
    double cad_amount = 0;
    (void)argc;
    while(argv[i] != '\0')
    {
        jpy_amount = atoi(argv[i]);
        i++;
    }
    cad_amount = jpy_amount * 0.012;
    printf("JPY %d = CAD %.2f\n", jpy_amount, cad_amount);
    return 0;
}
