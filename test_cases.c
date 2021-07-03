#include <stdio.h>
#include "types.h"
#include "X-O.h"

extern uint8_t arr[10];

uint8_t test_x_wins_horizontal(void)
{
	uint8_t E_stat=E_ERROR;
	arr[1]='X';
	arr[2]='X';
	arr[3]='X';
	uint32_t counter =1;
	if(check_win()==1)
	{
		E_stat=E_VALID;
	}
	return E_stat;
}

uint8_t test_o_wins_horizontal(void)
{
	uint8_t E_stat=E_ERROR;
	arr[1]='O';
	arr[2]='O';
	arr[3]='O';
	uint32_t counter =0;
	if(check_win()==2)
	{
		E_stat=E_VALID;
	}
	return E_stat;
}

uint8_t test_x_wins_vertical(void)
{
	uint8_t E_stat=E_ERROR;
	arr[1]='X';
	arr[4]='X';
	arr[7]='X';
	uint32_t counter =1;
	if(check_win()==1)
	{
		E_stat=E_VALID;
	}
	return E_stat;
}

uint8_t test_o_wins_vertical(void)
{
	uint8_t E_stat=E_ERROR;
	arr[1]='O';
	arr[4]='O';
	arr[7]='O';
	uint32_t counter =0;
	if(check_win()==2)
	{
		E_stat=E_VALID;
	}
	return E_stat;
}

uint8_t test_x_wins_diagonal(void)
{
	uint8_t E_stat=E_ERROR;
	arr[1]='X';
	arr[5]='X';
	arr[9]='X';
	uint32_t counter =1;
	if(check_win()==1)
	{
		E_stat=E_VALID;
	}
	return E_stat;
}

uint8_t test_o_wins_diagonal(void)
{
	uint8_t E_stat=E_ERROR;
	arr[1]='O';
	arr[5]='O';
	arr[9]='O';
	uint32_t counter =0;
	if(check_win()==2)
	{
		E_stat=E_VALID;
	}
	return E_stat;
}

uint8_t test_x_wins_diagonal_opposite(void)
{
	uint8_t E_stat=E_ERROR;
	arr[3]='X';
	arr[5]='X';
	arr[7]='X';
	uint32_t counter =1;
	if(check_win()==1)
	{
		E_stat=E_VALID;
	}
	return E_stat;
}

uint8_t test_o_wins_diagonal_opposite(void)
{
	uint8_t E_stat=E_ERROR;
	arr[3]='O';
	arr[5]='O';
	arr[7]='O';
	uint32_t counter =0;
	if(check_win()==1)
	{
		E_stat=E_VALID;
	}
	return E_stat;
}

uint8_t test_invalid_position(void)
{
	uint8_t E_stat=E_ERROR;
	arr[0]='0',arr[1]='1',arr[2]='2',arr[3]='3',arr[4]='4',arr[5]='5',arr[6]='6',
	arr[7]='7',arr[8]='8',arr[9]='9';
	arr[1]='X';
	printf("At position 1 , player 1 entered X\n");
	printf("Enter 1 to check for the next test case\n");
	if(play()==E_INVALID)
	{
		E_stat=E_INVALID;
	}
	return E_stat;
}

int main(void)
{
	uint8_t E_stat;
	E_stat=test_x_wins_horizontal();
	if(E_stat=E_VALID)
	{
		printf("Test case 1 passed\n");
	}else
	{
		printf("Test case 1 failed\n");
	}
	
	E_stat=test_o_wins_horizontal();
	if(E_stat=E_VALID)
	{
		printf("Test case 2 passed\n");
	}else
	{
		printf("Test case 2 failed\n");
	}
	
	E_stat=test_x_wins_vertical();
	if(E_stat=E_VALID)
	{
		printf("Test case 3 passed\n");
	}else
	{
		printf("Test case 3 failed\n");
	}
	
	E_stat=test_o_wins_vertical();
	if(E_stat=E_VALID)
	{
		printf("Test case 4 passed\n");
	}else
	{
		printf("Test case 4 failed\n");
	}
	
	E_stat=test_x_wins_diagonal();
	if(E_stat=E_VALID)
	{
		printf("Test case 5 passed\n");
	}else
	{
		printf("Test case 5 failed\n");
	}
	
	E_stat=test_o_wins_diagonal();
	if(E_stat=E_VALID)
	{
		printf("Test case 6 passed\n");
	}else
	{
		printf("Test case 6 failed\n");
	}
	
	E_stat=test_x_wins_diagonal_opposite();
	if(E_stat=E_VALID)
	{
		printf("Test case 7 passed\n");
	}else
	{
		printf("Test case 7 failed\n");
	}
	
	E_stat=test_o_wins_diagonal_opposite();
	if(E_stat=E_VALID)
	{
		printf("Test case 8 passed\n");
	}else
	{
		printf("Test case 8 failed\n");
	}
	printf("\n");
	E_stat=test_invalid_position();
	if(E_stat=E_INVALID)
	{
		printf("Test case 1 passed\n");
	}else
	{
		printf("Test case 1 failed\n");
	}
	return 0;
}