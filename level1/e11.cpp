#include <stdio.h>
int x(int f, int s){
	int gcd, i;
	for(i=1; i<=f||i<=s; i++){
		if(f%i==0&&s%i==0){
			gcd=i;
		}
	}
	return gcd;
}
int y(int g, int f, int s){
	int lcm;
    //유클리드 호제법이라는 알고리즘을 사용해 쉽게 연산할 수 있도록 함
	lcm=(f*s)/g;
	return lcm;	
}
int main(){
	int fn, sn, gcd, lcm;
	printf("첫 번째 수를 입력해주세요: ");
	scanf("%d", &fn);
	printf("두 번째 수를 입력해주세요: ");
	scanf("%d", &sn);		
	gcd=x(fn, sn);
	printf("두 수의 최대공약수: %d\n", gcd);
	lcm=y(gcd, fn, sn);
	printf("두 수의 최소공배수: %d", lcm);
	return 0;	
}
