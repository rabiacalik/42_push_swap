#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct stack_list
{
    int content;
    int index;
    struct stack_list *next;
}   t_list;




#endif