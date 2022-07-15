/***************************************************************************** 
* 
* File Name : main.c
* 
* Description: main 
* 
* Copyright (c) 2014 Winner Micro Electronic Design Co., Ltd. 
* All rights reserved. 
* 
* Author : dave
* 
* Date : 2014-6-14
*****************************************************************************/ 
#include "wm_include.h"
extern void user_main();
void UserMain(void)
{
	printf("\n user task \n");

	user_main();
#if DEMO_CONSOLE
	CreateDemoTask();
#endif
//�û��Լ���task
}

