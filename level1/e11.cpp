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
    //��Ŭ���� ȣ�����̶�� �˰����� ����� ���� ������ �� �ֵ��� ��
	lcm=(f*s)/g;
	return lcm;	
}
int main(){
	int fn, sn, gcd, lcm;
	printf("ù ��° ���� �Է����ּ���: ");
	scanf("%d", &fn);
	printf("�� ��° ���� �Է����ּ���: ");
	scanf("%d", &sn);		
	gcd=x(fn, sn);
	printf("�� ���� �ִ�����: %d\n", gcd);
	lcm=y(gcd, fn, sn);
	printf("�� ���� �ּҰ����: %d", lcm);
	return 0;	
}
