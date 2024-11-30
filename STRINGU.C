#include<stdio.h>
int main()
{
	int length=0,i=0;
	char str[100];
       //	int len = strlen(str);
	printf("enter the string:\n");
	gets(str);

		while(str[i]!=0){
			length++;
			i++;
		}
			printf("lenght of the string is:%d\n",length);


	return 0;

}