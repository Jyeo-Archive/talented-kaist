#include <stdio.h> //stdio. h ��� ���� 
int func(int n){
	int ans;
	if(n%2==0){
		printf("�Էµ� �� n�� ¦���Դϴ�.\n");
		ans = n/2;
		return ans;
	}
	else{
		printf("�Էµ� �� n�� Ȧ���Դϴ�.\n");
		n++;
		ans = n/2;
		return ans;
	}
}
int main(){ //main �Լ� 
    int n;
    printf("���� n�� ���� �Է����ּ���.\n");
    scanf("%d", &n);
    n = func(n);
    printf("����� %d �Դϴ�.", n);
    return 0;
}
