#include <stdio.h>
int main(void)
{
	int tdn; //Three Digit Number�� ���Ӹ��� ���� �̸��� �۸� 
	printf("3�ڸ��� ������ �Է����ּ��� : "); 
	scanf("%d", &tdn);
	//����ڷκ��� 3�ڸ��� ������ �Է¹��� 
	int i = tdn/100; //���� �ڸ� �� 
	int j = (tdn/10)%10; //���� �ڸ� �� 
	int q = tdn%10; //���� �ڸ� �� 
	printf("���� �ڸ� �� : %d\n���� �ڸ� �� : %d\n���� �ڸ� �� : %d", i, j, q); //��� 
	return 0; 
}
