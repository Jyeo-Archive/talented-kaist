#include <stdio.h> //stdio. h 헤더 파일 
int main(){ //main 함수 
	int agm[5]; //int 형 변수 5개로 이루어진 배열 선언  
	int i; //반복문에서 사용할 int 형 변수 i 선언 
	printf("***입력받은 5개의 정수를 역순으로 출력하는 프로그램***\n");
	//프로그램 타이틀 출력 
	printf("정수를 5개 입력해주세요 : "); 
	for(i=0; i<5; i++){ //i를 0으로 정하고, i가 5보다 작은 한 아래를 반복, 반복이 끝날 때마다 i를 1 증가시킴
	    scanf("%d", &agm[i]); 
	}
	//반복(루프)문을 사용하여 5개의 배열에 사용자가 입력한 정수를 저장  
	printf("입력받은 5개의 정수를 역수로 출력합니다.\n");
	//역수 출력을 사용자에게 알려줌 
	for(i=4; i>=0; i--){ //i가 4이고, i가 0보다 크거나 같은 한 아래를 반복, 반복이 끝날 때마다 i를 1 감소시킴 
		printf("%d ", agm[i]);
	}
	//반복(루프)문을 사용하여 5개의 배열을 거꾸로 출력 
	return 0;
	//0을 반환(리턴)하여 프로그램을 종료한다. 
} 
