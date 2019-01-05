#include <stdio.h> //stdio. h 헤더 파일 
int isleap(int year){ //isleap 함수 
	if(year%400==0){ 
		printf("윤년");
	}
	else if(year%4==0 && year%100!=0){
		printf("윤년");
	}
	/*입력한 연도가 400으로 나누어떨어지거나, 
	0으로 나누어떨어지지 않으면서 4로 나누어떨어지면 '윤년' 을 출력한다.*/ 
	else{
		printf("평년");
	}
	//윤년의 조건에 맞지 않을 경우 '평년' 을 출력한다. 
	return 0; //리턴값을 0으로 하여 프로그램을 종료한다. 
}
int main(){ //main 함수 
	int year; //사용자가 입력한 연도를 저장할 year 변수 
	printf("***윤년 판별 프로그램***\n");
	//프로그램의 설명을 출력 
	printf("연도를 입력하세요: ");
	scanf("%d", &year);
	//연도를 사용자에게 입력받음 
	isleap(year);
	//isleap 함수를 호출하고 year 값을 전달한다. 
}
