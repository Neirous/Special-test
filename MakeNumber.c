//MakeNumber.c
#include<stdio.h>
#include<assert.h>
#include"MakeNumber.h"
//�������ܣ����������һ�������
//������������
//��������ֵ�����ؼ�������ɵ������

int MakeNumber(void)
{
	int number;
	number=(rand() % ( MAX_NUMBER - MIN_NUMBER + 1 )) + MIN_NUMBER;
	assert(number >= MIN_NUMBER && number <=MAX_NUMBER);
	return number;
 } 
