#include<stdio.h>
void main()
{
	char i,arr[5][10] = {"HI","HELLO","BYE","NAYI","HFDJKHVDH"};
	clrscr();
	printf("String array Elements are: \n");

		for(i=0; i<3; i++){
			printf("%s ", arr[i]);
		}
}