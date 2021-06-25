#pragma once

#include <stdint.h>
#include <stdbool.h>


extern uint32_t page_dir[1024] __attribute__((aligned(4096)));
extern uint32_t page_tb[1024] __attribute__((aligned(4096)));

extern "C" void loadPageDirectory(uint32_t*);
extern "C" void enablePaging();

void init_paging();