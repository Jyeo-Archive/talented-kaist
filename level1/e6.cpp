#include <stdio.h>
int main(){
	char n[6];
	int i;
	int j;
	int g;
	printf("***���ΰ� ������ ���� ���� ���ϴ� ���α׷�***\n"); 
	printf("������ �̸���? : ");
	scanf("%s", &n);
	printf("������ ���̴�? : ");
	scanf("%d", &i);
	printf("������ ���̴�? : ");
	scanf("%d", &j);
	if(i<j){
		g = j - i;
	}
	else if(j<i){
		g = i - j;
	}
	else{
		g = 0;
	}
	printf("%s�� �������� ���� ���� %d�� �Դϴ�.\n", n, g);
	return 0;
}	
