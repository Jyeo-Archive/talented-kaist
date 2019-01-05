#include <stdio.h>
int main(void){
	int a, b, c, x; 
	printf("두 개의 수를 입력해주세요 : ");
	scanf("%d%d", &a, &b); 
	printf("x를 입력해주세요 : ");
	scanf("%d", &x);
	if(x==1){
		c=a+b;
		printf("두 수의 합 : %d", &c);
	} 
    if(x==2){
		c=a-b;
		printf("두 수의 차 : %d", &c);
	} 
    if(x==3){
		c=a*b;
		printf("두 수의 곱 : %d", &c);
	} 
	else{
		c=a/b;
		printf("두 수의 몫 : %d", &c);
	}
	return 0; 
}
