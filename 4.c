#include<stdio.h>
void main()
{
	int a=2,b;
	b=a++ - ++a * a++;
	printf("a=%d,b=%d \n",a,b);
}
