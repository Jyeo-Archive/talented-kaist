#include <stdio.h> //stdio. h 헤더 파일 
int main(){ //main 함수 
	printf("******* 삼각형 넓이 구하기 *******\n"); //프로그램 타이틀 출력 
	float l; //삼각형 밑변의 길이를 저장할 변수 
	float h; //삼각형 높이를 저장할 변수 
	float t; //삼각형 넓이를 저장할 변수 
	printf("밑변의 길이와 높이를 띄워서 입력하세요: ");
	//사용자에게 밑변의 길이와 높이를 입력해달라고 요구한다. 
	scanf("%f%f", &l, &h);
	//사용자에게 밑변의 길이와 높이를 입력받는다. 
	t=l*h/2; //(삼각형의 넓이)=(삼각형 밑변의 길이)x(삼각형의 높이)이므로 공식을 이용해서 변수 t의 값을 구한다.  
	printf("입력된 삼각형의 넓이는 %.1lf입니다.", t);
	//t의 값을 소수점 첫째 자리까지 출력한다. 
	return 0; //리턴값을 0으로 하여 프로그램을 종료한다. 
}
