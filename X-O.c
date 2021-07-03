#include <stdio.h>
#include "types.h"
#include "X-O.h"

int8_t arr[10]={'0','1','2','3','4','5','6','7','8','9'};
uint32_t counter=1;

uint32_t play(void)
{
	int8_t player1='X';
	int8_t player2='O';
	uint32_t choice;
	uint32_t flag_win;
	uint32_t winner;
	do{
		if(counter%2!=0) //player 1 turn
		{
				board();
				printf("Player 1(X) , Enter the place you want to place your mark in : ");
				scanf("%d",&choice);
				if((choice==1)&&(arr[1]=='1'))
				{
					arr[1]=player1;
				}else if((choice==2)&&(arr[2]=='2'))
				{
					arr[2]=player1;
				}else if((choice==3)&&(arr[3]=='3'))
				{
					arr[3]=player1;
				}else if((choice==4)&&(arr[4]=='4'))
				{
					arr[4]=player1;
				}else if((choice==5)&&(arr[5]=='5'))
				{
					arr[5]=player1;
				}else if((choice==6)&&(arr[6]=='6'))
				{
					arr[6]=player1;
				}else if((choice==7)&&(arr[7]=='7'))
				{
					arr[7]=player1;
				}else if((choice==8)&&(arr[8]=='8'))
				{
					arr[8]=player1;
				}else if((choice==9)&&(arr[9]=='9'))
				{
					arr[9]=player1;
				}else
				{
					printf("Try again\n");
					return E_INVALID;
					counter--;
				}
				flag_win=check_win();
				if(flag_win==1)
				{
					winner=1;
				}
				counter++;
			
		}else if(counter%2 == 0) //player 2 turn
		{
			
				board();
				printf("Player 2(O) , Enter the place you want to place your mark in : ");
				scanf("%d",&choice);
				if((choice==1)&&(arr[1]=='1'))
				{
					arr[1]=player2;
				}else if((choice==2)&&(arr[2]=='2'))
				{
					arr[2]=player2;
				}else if((choice==3)&&(arr[3]=='3'))
				{
					arr[3]=player2;
				}else if((choice==4)&&(arr[4]=='4'))
				{
					arr[4]=player2;
				}else if((choice==5)&&(arr[5]=='5'))
				{
					arr[5]=player2;
				}else if((choice==6)&&(arr[6]=='6'))
				{
					arr[6]=player2;
				}else if((choice==7)&&(arr[7]=='7'))
				{
					arr[7]=player2;
				}else if((choice==8)&&(arr[8]=='8'))
				{
					arr[8]=player2;
				}else if((choice==9)&&(arr[9]=='9'))
				{
					arr[9]=player2;
				}else
				{
					printf("Try again\n");
					counter--;
				}
				flag_win=check_win();
				if(flag_win==2)
				{
					winner=2;
				}
				
				counter++;
			
		}
	}while(flag_win==3);
		board();
		if(winner==1)
		{
			printf("Player 1 won ");
		}else if(winner ==2)
		{
			printf("Player 2 won ");
		}else
		{
			printf("No winner");		
		}
		return E_VALID;
}

uint32_t check_win(void)
{
	if((arr[1]==arr[2])&&(arr[2]==arr[3]))
	{
		if(counter%2!=0)
		{
			return 1;
		}else
		{
			return 2;
		}
	}else if((arr[4]==arr[5])&&(arr[5]==arr[6]))
	{
		if(counter%2!=0)
		{
			return 1;
		}else
		{
			return 2;
		}
	}else if((arr[7]==arr[8])&&(arr[8]==arr[9]))
	{
		if(counter%2!=0)
		{
			return 1;
		}else
		{
			return 2;
		}
	}else if((arr[1]==arr[4])&&(arr[4]==arr[7]))
	{
		if(counter%2!=0)
		{
			return 1;
		}else
		{
			return 2;
		}
	}else if((arr[2]==arr[5])&&(arr[5]==arr[8]))
	{
		if(counter%2!=0)
		{
			return 1;
		}else
		{
			return 2;
		}
	}else if((arr[3]==arr[6])&&(arr[6]==arr[9]))
	{
		if(counter%2!=0)
		{
			return 1;
		}else
		{
			return 2;
		}
	}else if((arr[1]==arr[5])&&(arr[5]==arr[9]))
	{
		if(counter%2!=0)
		{
			return 1;
		}else
		{
			return 2;
		}
	}else if((arr[3]==arr[5])&&(arr[5]==arr[7]))
	{
		if(counter%2!=0)
		{
			return 1;
		}else
		{
			return 2;
		}
	}else if((arr[1]!='1')&&(arr[2]!='2')&&(arr[3]!='3')
			&&(arr[4]!='4')&&(arr[5]!='5')&&(arr[6]!='6')
			&&(arr[7]!='7')&&(arr[8]!='8')&&(arr[9]!='9'))
			{
				return 0;
			}else
			{
				return 3;
			}
}


void board(void)
{
	printf("    |   |   \n");
	printf(" %c  | %c | %c\n",arr[1],arr[2],arr[3]);
	printf("____|___|___\n");
	printf("    |   |   \n");
	printf(" %c  | %c | %c\n",arr[4],arr[5],arr[6]);
	printf("____|___|___\n");
	printf(" %c  | %c | %c\n",arr[7],arr[8],arr[9]);
	printf("    |   |   \n");
	
}