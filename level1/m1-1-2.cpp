#include <stdio.h> //stdio.h 헤더 파일 
int main(){ //main 함수
	char n[6]; 
	//name(이름)의 앞글자인 n을 따서 5글자의 문자열을 저장할 변수 준비
	float h; //height(신장)의 앞글자인 h를 따서 실수를 저장할 변수 준비  
	float w; //weight(체중)의 앞글자인 w를 따서 실수를 저장할 변수 준비  
	printf("당신의 이름을 입력하세요: "); 
	//사용자의 이름을 질문 
	scanf("%s", &n);
	//사용자의 이름을 입력받아 변수 n에 저장 
	printf("당신의 키를 입력하세요: "); 
	//사용자의 키를 질문 
	scanf("%f", &h);
	//사용자의 키를 입력받아 변수 h에 저장 
	printf("당신의 몸무게를 입력하세요: "); 
	//사용자의 몸무게를 질문 
	scanf("%f", &w);
	//사용자의 몸무게를 입력받아 변수 w에 저장 
	printf("당신의 이름은 %s입니다. \n", n);
	//사용자의 이름을 출력 
	printf("키는 %.2lf이고, 몸무게는 %.2lf입니다.", h,w);
	//사용자의 키와 몸무게를 출력 
	return 0;
}
