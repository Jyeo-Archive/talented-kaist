#include <stdio.h>
int main(void){
	int a, b, c, x; 
	printf("�� ���� ���� �Է����ּ��� : ");
	scanf("%d%d", &a, &b); 
	printf("x�� �Է����ּ��� : ");
	scanf("%d", &x);
	if(x==1){
		c=a+b;
		printf("�� ���� �� : %d", &c);
	} 
    if(x==2){
		c=a-b;
		printf("�� ���� �� : %d", &c);
	} 
    if(x==3){
		c=a*b;
		printf("�� ���� �� : %d", &c);
	} 
	else{
		c=a/b;
		printf("�� ���� �� : %d", &c);
	}
	return 0; 
}
