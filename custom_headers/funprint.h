/*
 * Header file for some fun custom print functions.
 * Add  #include "funprint.h"  at the start of your file to use.
 * By: MikuHatsune39
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
		Sleep(75);
		i++;
	}
}

/**
 * Normal speed is 75
 */
void printCharsAtSpeed(char *str, int speed)
{
	int i = 0;
	while (str[i] != '\0') 
	{
		putchar(str[i]);
		fflush(stdout);
		Sleep(speed); //Sleep(75);
		i++;
	}
}