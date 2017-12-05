#include<stdio.h>
void main()
{
	int a,b,c,d;
	a=b=c=2;
	d= ++a >= 4 || ++c >= b++;
	printf("a=%d, b=%d, c=%d, d=%d",a,b,c,d);
}
