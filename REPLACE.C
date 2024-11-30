#include<stdio.h>
void main()
{
	char str1[100],str2[100];

	printf("enter the string:");
	gets(str1);


	strcpy(str2,str1);


		printf("copied string%s\n" ,str2);
}
