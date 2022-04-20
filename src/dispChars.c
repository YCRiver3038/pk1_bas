﻿#include "stdio.h"
#include "stdlib.h"

#include "dats.h"

int main(void)
{
	printf("初代ポケモン 文字列一覧\n");
	printf("文字列を入力する際に参考にしてください。\n");
	printf("入力可能: \n0x05-0x13\n0x19-0x1C\n0x26-0x34\n0x3A-0x3E\n0x40-0x48\n0x80-0xA9\n0xAB-0xAF\n0xB1-0xDC\n0xDE-0xE3\n\n");

	for(int ctr1 = 0; ctr1<CNUM; ctr1++)
	{
		printf("0x%02X: %s\n", ctr1, Chl[ctr1]);
	}
	
	return 0;
}