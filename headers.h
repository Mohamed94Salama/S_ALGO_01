#ifndef _HEADERS_H_
#define _HEADERS_H_

#include "types.h"

uint8_t binarySearch(uint32_t* arr, uint8_t size, uint32_t number);
uint8_t checkSorted(uint32_t* arr,uint8_t size);
void bubbleSorting(uint32_t* arr,uint8_t size);

#define E_SORTED 1
#define E_UNSORTED 0

#endif