#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int b;
	float c;
	printf ("nhap a: \n");
	scanf ("%d",  &a);
	printf ("nhap b: \n");
	scanf ("%d",  &b);
	c= (float)(a+b)/2;
	printf ("%f", c);
	return 0;
}
