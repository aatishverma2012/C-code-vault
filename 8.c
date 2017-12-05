void main()
{
	int a=2,b=5;
	a= a++ + ++b;
	b= ++b + a++;
	printf("a=%d, b=%d \n",a,b);	
}
