//IsRight.c
#include<stdio.h>
#include"IsRight.h"
//函数功能：判断guess和number谁大谁小，分别给出相应的提示信息
//函数参数：number是被猜的数，guess是猜的信息
//函数返回值：如果猜对，则返回1；否则，返回0
int IsRight(int number,const int guess)
{
	if(guess < number)
	{
		printf("Wrong! Too small!\n");
		return 0;
	}
	else if(guess > number)
	{
		printf("Wrong! Too big \n");
		return 0;
	}
	else return 1;
 } 
