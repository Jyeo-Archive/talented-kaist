#include <stdio.h>
int main(){
	int array[20];
	int n, i, sum=0;
	printf("***배열 내의 수와 배열 내의 숫자들의 합을 출력하는 프로그램***\n\n");
	printf("20보다 작은 수 n을 입력받아 0부터 n까지의 수를 출력, 그 합을 출력하는 프로그램입니다.\n\n");
	printf("정수 하나를 입력해주세요 : ");
	scanf("%d", &n);
	if(n>20){
		printf("오류: n>20\n오류로 인해 프로그램이 종료됩니다.");
		return 1; 
	}
    for(i=0; i<=n; i++){ 
	    array[i]=i;
	}
	if(n>0){
	    printf("\n***배열 출력***\n");
        for(i=0; i<=n; i++){ 
		    printf("%d\n", array[i]);
		    sum+=array[i];
	    }
	}
    printf("배열의 합: %d\n", sum);
    return 0;
}
