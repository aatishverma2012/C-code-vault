#include<stdio.h>
void main()
{
	int a=9,b;
	b=++a;
	printf("a=%d, b=%d \n",a,b); 
	++a;
	printf("a=%d \n",a); 
	++a;
	printf("a=%d \n",a);
}
