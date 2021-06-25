#include "paging.h"

uint32_t page_dir[1024];
uint32_t page_tb[1024];

void init_paging(){
    for(int i = 0; i < 1024; i++)
    {
        page_dir[i] = 0x00000002;
        page_tb[i] = (i * 0x1000) | 3;
    }
    page_dir[0] = ((unsigned int)page_tb) | 3;
}