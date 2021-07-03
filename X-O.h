#ifndef _XO_H_
#define _XO_H_

#include "types.h"

// Error status
#define E_VALID 1
#define E_ERROR 2
#define E_INVALID 3

//Functions prototype
uint32_t check_win(void);
void board(void);
uint32_t play(void);

#endif