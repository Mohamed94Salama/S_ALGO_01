#include <stdio.h>
#include "headers.h"
#include "types.h"

void test_if_array_sorted(void)
{
	uint32_t arr[5]={0,1,2,3,4};
	if(checkSorted(arr,5)==E_SORTED)
	{
		printf("Test case 1 passed\n");
	}else if(checkSorted(arr,5)==E_UNSORTED)
	{
		printf("Test case 1 failed\n");
	}
}

void test_if_array_unsorted(void)
{
	uint32_t arr[5]={3,2,4,0,1};
	if(checkSorted(arr,5)==E_UNSORTED)
	{
		printf("Test case 1 passed\n");
	}else if(checkSorted(arr,5)==E_SORTED)
	{
		printf("Test case 1 failed\n");
	}
}

void test_for_search_for_existing_element(void)
{
	uint32_t arr[5]={0,1,2,3,4};
	if(binarySearch(arr,5,3)!=255)
	{
		printf("Test case 1 passed\n");
	}else if(binarySearch(arr,5,3)==255)
	{
		printf("Test case 1 failed\n");
	}
}

void test_for_search_for_non_existing_element(void)
{
	uint32_t arr[5]={0,1,2,3,4};
	if(binarySearch(arr,5,7)==255)
	{
		printf("Test case 1 passed\n");
	}else if(binarySearch(arr,5,7)!=255)
	{
		printf("Test case 1 failed\n");
	}
}

int main(void)
{
	test_if_array_sorted();
	test_if_array_unsorted();
	test_for_search_for_existing_element();
	test_for_search_for_non_existing_element();
	return 0;
}