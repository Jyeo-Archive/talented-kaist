#include <stdio.h> //stdio. h 헤더 파일 
int func(int n){
	int ans;
	if(n%2==0){
		printf("입력된 수 n은 짝수입니다.\n");
		ans = n/2;
		return ans;
	}
	else{
		printf("입력된 수 n은 홀수입니다.\n");
		n++;
		ans = n/2;
		return ans;
	}
}
int main(){ //main 함수 
    int n;
    printf("정수 n의 값을 입력해주세요.\n");
    scanf("%d", &n);
    n = func(n);
    printf("결과는 %d 입니다.", n);
    return 0;
}
