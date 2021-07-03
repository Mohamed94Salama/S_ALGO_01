#include<stdio.h>
#include"types.h"

uint8_t binarySearch(uint32_t* arr, uint8_t size, uint32_t number);
uint8_t checkSorted(uint32_t* arr,uint8_t size);
void bubbleSorting(uint32_t* arr,uint8_t size);

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

uint8_t binarySearch(uint32_t* arr, uint8_t size, uint32_t number)
{
	uint8_t flag;
	printf("The original array :\n");
	for(uint8_t i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	flag=checkSorted(arr,size);
	if(flag==0)
	{
		printf("Array is not sorted , it needs to be sorted at first\n");
		bubbleSorting(arr,size);
		printf("The array after sorting :\n");
		for(uint8_t i=0;i<size;i++)
		{
			printf("%d ",arr[i]);
		}
	}else if(flag==1)
	{
		printf("Array is sorted");
	}
	printf("\n");
	uint8_t start=0;
	uint8_t end=size-1;
	uint8_t mid;
	uint8_t flag_found=0;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(arr[mid]==number)
		{
			flag_found=1;
			break;
		}else if(arr[mid]>number)
		{
			end=mid-1;
		}else if(arr[mid]<number)
		{
			start=mid+1;
		}
	}
	if(flag_found==1)
	{
		flag=mid;
	}else
	{
		flag=-1;
	}
	return flag;
}

uint8_t checkSorted(uint32_t* arr,uint8_t size)
{
	uint8_t flag=1;
	for(uint8_t i=0;i<size-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{

	}else if(flag==0)
	{

	}
	return flag;
}

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