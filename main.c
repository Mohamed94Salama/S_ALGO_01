#include <stdio.h>
#include "types.h"
#include "headers.h"

int main(void)
{
	uint32_t arr[10]={54,3,65,2,1,68,132,43,5,56};
	uint8_t result=binarySearch(arr,10,43);
	//Here since the binarySearch function return unsigned char
	//so -1 is similar to 255 using the 2's complement
	if((result==-1)||(result==255)) 
	{
		printf("Not found");
	}else
	{
		printf("The index of that number in the sorted array is %d",result);
	}
	return 0;
}