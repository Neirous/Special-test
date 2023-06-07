//GuessNumber.c
#include<stdio.h>
#include"IsRight.h"
#include"IsValidNum.h"
//函数功能：用户猜数字
//函数参数：number是计算机生成都数字
//函数返回值：无 
void GuessNumber(int number)
{
	int guess;   //用户猜的数 
	int count = 0;  //用户猜的次数
	int right =0; //猜的结果对错与否
	int ret;
	do {
		printf("Try %d:",count+1);
		ret = scanf("%d",&guess);
		//处理用户输入，判断是否有输入错误，是否在合法的数值范围
		while(ret != 1 || !IsValidNum(guess))
		{
			printf("Input error! \n");
			getchar();     //清除输入缓冲区中的错误数据 
			printf("Try %d:",count+1);
			ret = scanf("%d",&guess);
		 }
		 count++;
		 right = IsRight(number,guess);       //判断用户猜的数是大还是小 
	} while(!right && count < MAX_TIMES);
	if(right)
		printf("Congratulations! You're so cool! \n");
	else
		printf("Mission failed after %d attempts.\n",MAX_TIMES);
}
