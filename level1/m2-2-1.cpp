#include <stdio.h> //stdio. h 헤더 파일 
int main(){ //main 함수 
	int diff, da, db; 
	//두 날짜의 차를 저장할 변수 diff, 시작일을 저장할 변수 da, 종료일을 저장할 변수 db를 선언한다. 
	printf("시작일을 입력하세요(일): ");
	scanf("%d", &da);  
	printf("종료일을 입력하세요(일): ");
	scanf("%d", &db);
	//시작일과 종료일을 사용자에게 입력받아 변수 da, db에 저장한다.
	diff=db-da;
	//db와 da의 차를 diff에 저장한다. 
	printf("두 날짜의 차이는 %d일 입니다.", diff); 
	//두 날짜의 차이 diff를 출력  	
	return 0; 
	//리턴값을 0으로 하여 프로그램을 종료한다. 
}

