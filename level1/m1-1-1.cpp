#include <stdio.h> //stdio.h 헤더 파일 
int main(){ //main 함수 
	int l; //like의 앞글자를 따서 좋아하는 수를 저장할 변수 
	int h; //hate의 앞글자를 따서 좋아하는 수를 저장할 변수
	printf("당신이 좋아하는 숫자는? "); 
	//사용자에게 좋아하는 숫자를 질문 
	scanf("%d", &l);
	//사용자에게 좋아하는 숫자를 입력받음 
	printf("당신이 싫어하는 숫자는? ");
	//사용자에게 싫어하는 숫자를 질문 
	scanf("%d", &h);
	//사용자에게 싫어하는 숫자를 입력받음 
	printf("당신이 좋아하는 숫자는 %d입니다.\n", l);
	printf("당신이 싫어하는 숫자는 %d입니다.", h);
	//결과를 출력 
	return 0;
	//리턴값을 0으로 하여 프로그램을 종료 
}
