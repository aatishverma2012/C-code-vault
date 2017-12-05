//when condition gets wrong it shows 0, otherwise 1
void main()
{
	int a= 2>= 5 || 5 <= 8 && 9%4;
	printf("%d \n",a);
	
	int b= (2>= 5 || 5 <= 8) && 9%4;
	printf("%d \n",b);
	 
	int c= (2>= 5 && 5 <= 8) && 9%4;
	printf("%d \n",c);
}
/*
comment example
*/
