//IsValidNum.c
#include"IsValidNum.h"
//�������ܣ��ж��û��������Ƿ��ںϷ�����ֵ��Χ��1~100��
//����������numberʹ�û��������
//����ֵ�����Ϸ����򷵻ط�0ֵ�����򣬷���0
int IsValidNum(int number)
{
	if(number >= MIN_NUMBER && number <= MAX_NUMBER)
		return 1;
	else
		return 0;
 } 
 
