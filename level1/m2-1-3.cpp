#include <stdio.h> //stdio. h 헤더 파일 
int eday(int year, int month){ //eday 함수 
	int day; //사용자가 입력한 달 month의 마지막 날짜를 저장할 변수 day 선언 
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
		day=31;
		//만약 사용자가 입력한 달이 1, 3, 5, 7, 8, 10, 12월이라면 마지막 날은 31일이다.  
	}
	else if(month==4 || month==6 || month==9 || month==11){
		day=30;
		//만약 사용자가 입력한 달이 4, 6, 9, 11월이라면 마지막 날은 30일이다.  
	}
	else{ //만약 사용자가 입력한 달이 2월이라면 
	  if(year%400==0 || (year%4==0 && year%100!=0)){
		  day=29; 
		  //입력한 연도가 윤년일 경우 마지막 날은 29일이다. 
	  }
	  else{
		  day=28;
		  //입력한 연도가 평년일 경우 마지막 날은 28일이다. 
	  }
    }
    return day; //day를 반환한다. 
}
int main(){ //main 함수 
	int year, month, day; 
	//사용자가 입력한 연도와 달, 달의 마지막 날짜를 저장할 변수 year, month, day 선언 
	printf("연도와 월을 입력하세요 : ");
	scanf("%d%d", &year, &month);
	//사용자에게 연도와 월을 입력받는다. 
	if(month>12){
		printf("오류: '월'에 12 이상의 수가 입력되었습니다.\n");
		printf("오류로 인해 프로그램을 종료합니다.");
		return 1; //리턴값을 1로 하여 프로그램을 비정상적으로 종료한다. 
	}
	//만약 달에 12 이상의 수가 입력될 경우 오류를 표시한다.  
    day=eday(year, month); //eday 함수가 반환한 값을 변수 day에 저장한다. 
    printf("%d년 %d월의 마지막날은 %d입니다.", year, month, day);
    //사용자가 입력한 달의 마지막 날짜를 출력한다. 
    return 0;
    //리턴값을 0으로 하여 프로그램을 종료한다. 
}
