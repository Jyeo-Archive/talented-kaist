#include <stdio.h> //stdio.h 헤더 파일
int y; //사용자가 입력한 연도를 저장하기 위한 변수 y 선언
//모든 함수에서 쉽게 접근할 수 있도록 전역 변수로 선언했다.  
int e(int month){ //달의 마지막 날짜를 구하는 함수 e 
	int day; //달의 마지막 날짜를 저장할 변수 day 선언
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
		day=31;
		//만약 달이 1, 3, 5, 7, 8, 10, 12월이라면 마지막 날은 31일이다.
	}
	else if(month==4 || month==6 || month==9 || month==11){
		day=30;
		//만약 달이 4, 6, 9, 11월이라면 마지막 날은 30일이다.
	}
	else{ //만약 사용자가 입력한 달이 2월이라면 
	  if(y%400==0 || (y%4==0 && y%100!=0)){
		  day=29; 
		  //윤년일 경우 마지막 날은 29일이다. 
	  }
	  else{
		  day=28;
		  //평년일 경우 마지막 날은 28일이다. 
	  }
    }
    return day; //day를 반환한다.
}
int main(){ //main 함수
	int diff, ma, mb, da, db;
	/*두 날짜의 차를 저장할 변수 diff, 
	시작일/종료일의 달을 저장할 변수 ma/mb, 
	시작일/종료일의 일을 저장할 변수 da/db 선언*/
	printf("시작일을 입력하세요(년 월 일): ");
	scanf("%d%d%d", &y, &ma, &da);
	printf("종료일을 입력하세요(년 월 일): ");
	scanf("%d%d%d", &y, &mb, &db);
	//사용자로부터 시작일과 종료일을 입력받아 변수 y, ma, mb, da, db에 저장 
	if(ma==mb){ //만약 ma와 mb가 같다면(시작일과 종료일이 같은 달이라면) 
		if(da<db){ //da가 db보다 클 경우(시작일의 일이 종료일의 일보다 빠르다면) 
			diff=db-da; //db-da를 diff에 저장
		}
        else{ //만약 da의 값이 db의 값과 같을 경우(시작일과 종료일이 같은 날짜라면) 
        	diff=0; 
		}
		//항상 시작일이 종료일보다 빠르거나 같은 날짜가 입력된다는 기준이므로 da>db는 고려하지 않는다.
	}
	else{
	    diff=e(ma)-da; //시작일의 월의 마지막 날짜와 시작일의 일의 차를 변수 diff에 저장
	    for(int i=ma+1; i<=mb-1; i++){
		    diff+=e(i);
		    //ma+1달에서부터 mb-1달까지의 말일을 모두 더한 값을 변수 diff에 누적시킨다. 
	    }
	    diff+=db; //종료일의 일을 변수 diff에 누적시킨다.
    }
	printf("두 날짜의 차이는 %d일 입니다.", diff);
	//두 날짜의 차이 diff를 출력	
	return 0;  //리턴값을 0으로 하여 프로그램을 종료한다.
}
