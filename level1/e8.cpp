#include <stdio.h>
int main(){
	int array[20];
	int n, i, sum=0;
	printf("***�迭 ���� ���� �迭 ���� ���ڵ��� ���� ����ϴ� ���α׷�***\n\n");
	printf("20���� ���� �� n�� �Է¹޾� 0���� n������ ���� ���, �� ���� ����ϴ� ���α׷��Դϴ�.\n\n");
	printf("���� �ϳ��� �Է����ּ��� : ");
	scanf("%d", &n);
	if(n>20){
		printf("����: n>20\n������ ���� ���α׷��� ����˴ϴ�.");
		return 1; 
	}
    for(i=0; i<=n; i++){ 
	    array[i]=i;
	}
	if(n>0){
	    printf("\n***�迭 ���***\n");
        for(i=0; i<=n; i++){ 
		    printf("%d\n", array[i]);
		    sum+=array[i];
	    }
	}
    printf("�迭�� ��: %d\n", sum);
    return 0;
}
