#include <stdio.h>
int main(){
	int n, i, j;
	printf("n을 입력해주세요 : ");
    scanf("%d", &n);
    int array[n];
    for(i=0; i<=n-1; i++){
    	for(j=n; j<2*n; j++){
    		array[i]=j;
		}
	}
	for(i=0; i<=n; i++){  
		printf("%d\n", array[i]);
	}
	return 0;
}
