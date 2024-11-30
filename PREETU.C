#include<stdio.h>
 int multiply(int x,int y);

	int main()
{

	int result = multiply(4,3);// funtion call with return value
	printf("multiplication result:%d\n",result);

	return 0;
}

	int multiply(int x,int y)
	{
	return x*y;
}


