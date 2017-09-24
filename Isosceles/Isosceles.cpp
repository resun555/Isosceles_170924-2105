// Isosceles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#pragma warning ( disable : 4996 )
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int fahrenheit = -460;
	scanf("%d", &fahrenheit);
	if (fahrenheit <= -460)
	{
		exit(EOF);
	}
	int celsius = 5 * (fahrenheit - 32) / 9;
	printf("Celsius = %d", celsius);
    return 0;
}

