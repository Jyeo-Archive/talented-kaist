/*
KAIST ���̹� ���米�� C��� ���� 1-1����
�������� 1-4��,
n�� ����ڿ��� �Է¹޾� n�� �������� ����ϴ� ���α׷�
������: �� ��ȣ Junho Yeo 
*/
#include <stdio.h> //stdio.h ��� ��
int main() //main function 
{
 int n; //Perpare n for User input 
 int i = 1;
 int q;
 printf("�� ���α׷��� n�� �������� ����ϴ� ���α׷��Դϴ�.\n");
 //Program info for user
 printf("n�� ���� �Է��� �ּ��� : ");
 scanf("%d", &n);
 printf("�Է��Ͻ� n�� ���� %d�Դϴ�.\n",n);
 while(i <= 9){
 	q = n * i;
 	printf("%d�� : %d X %d = %d\n", i, n, i, q );
 	i++;
 }
 return 0;
} 
