#include <stdio.h>
#include "types.h"
#include "headers.h"

void bubbleSorting(uint32_t* arr,uint8_t size)
{
	for(uint8_t i=0;i<size-1;i++)
	{
		for(uint8_t j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				uint32_t temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}