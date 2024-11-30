#include<stdio.h>
void main()
{
	int arr[5] = { 9, 8, 7, 6, 5},*ptr1,*ptr2,temp,i;
	ptr1= arr;
	ptr2= arr + 4;

	while(ptr1 < ptr2)
	{
		temp= *ptr1;
		*ptr1= *ptr2;
		*ptr2= temp;
		ptr1++;
		ptr2--;
	}
		printf("\nReverse array: ");
		for(i=0; i<5; i++)
		{
			printf("%d ",arr[i]);
		}
}

