//GuessNumber.c
#include<stdio.h>
#include"IsRight.h"
#include"IsValidNum.h"
//�������ܣ��û�������
//����������number�Ǽ�������ɶ�����
//��������ֵ���� 
void GuessNumber(int number)
{
	int guess;   //�û��µ��� 
	int count = 0;  //�û��µĴ���
	int right =0; //�µĽ���Դ����
	int ret;
	do {
		printf("Try %d:",count+1);
		ret = scanf("%d",&guess);
		//�����û����룬�ж��Ƿ�����������Ƿ��ںϷ�����ֵ��Χ
		while(ret != 1 || !IsValidNum(guess))
		{
			printf("Input error! \n");
			getchar();     //������뻺�����еĴ������� 
			printf("Try %d:",count+1);
			ret = scanf("%d",&guess);
		 }
		 count++;
		 right = IsRight(number,guess);       //�ж��û��µ����Ǵ���С 
	} while(!right && count < MAX_TIMES);
	if(right)
		printf("Congratulations! You're so cool! \n");
	else
		printf("Mission failed after %d attempts.\n",MAX_TIMES);
}
