//IsRight.c
#include<stdio.h>
#include"IsRight.h"
//�������ܣ��ж�guess��number˭��˭С���ֱ������Ӧ����ʾ��Ϣ
//����������number�Ǳ��µ�����guess�ǲµ���Ϣ
//��������ֵ������¶ԣ��򷵻�1�����򣬷���0
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
