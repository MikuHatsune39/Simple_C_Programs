/*
 * Header file for some fun custom print functions.
 * Add  #include "funprint.h"  at the start of your file to use.
 * By: Daniel McPhail
 */

#include <stdio.h>
#include <Windows.h>

void printChars(char *str)
{
	int i = 0;
	while (str[i] != '\0') 
	{
		putchar(str[i]);
		fflush(stdout);
		Sleep(75); //Sleep(100);
		i++;
	}
}