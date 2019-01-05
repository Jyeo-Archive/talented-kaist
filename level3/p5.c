#include <stdio.h> //stdio.h 헤더 파일 포함 
#include <string.h> //string.h 헤더 파일 포함 
#include <stdlib.h> //stdlib.h 헤더 파일 포함 
struct Schedule{ //태그가 Schedule인 일정 구조체 선언(날짜, 시간, 일정의 이름(제목), 중요도, 내용을 포함)
	char date[8]; //날짜를 입력받아 저장할 크기 8의 문자열(8개 숫자가 들어가면 됨) date 선언 
	char time[4]; //시간을 입력받아 저장할 크기 4의 문자열(4개 숫자가 들어가면 됨) time 선언 
	int importance; //중요도를 입력받아 저장할 정수형 변수 importance 선언 
	char *title, *text; //일정의 제목과 내용을 입력받아 저장할 문자열 포인터 변수 title, text 선언  
};

int main(){ //main 함수 
    int n; //입력받을 일정의 개수를 저장할 정수형 변수 n 선언 
    scanf("%d", &n); //사용자에게 일정의 개수를 입력받고 그 값을 변수 n에 저장 
    struct Schedule schedule[n]; //크기가 n인 구조체 배열 schedule 선언 
    int i; //반복문에 사용할 변수 i 선언 
    for(i=0; i<n; i++){ //1회 반복할 때마다 i의 값을 1 증가시키며 n번 반복 
        schedule[i].title=(char*)malloc(sizeof(char)*n); //문자열 schedule[i].title에 char형을 n개 저장할 수 있도록 메모리를 동적 할당  
        schedule[i].text=(char*)malloc(sizeof(char)*n); //문자열 schedule[i].text에 char형을 n개 저장할 수 있도록 메모리를 동적 할당 
   	    scanf("%s %s %d %s %s", &schedule[i].date, &schedule[i].time, &schedule[i].importance, schedule[i].title, schedule[i].text); 
   	    //날짜, 시간, 일정의 중요도, 일정의 제목, 일정의 내용을 순서대로 입력받아 구조체의 각 변수에 저장 
    }
    for(i=0; i<n; i++){ //1회 반복할 때마다 i의 값을 1 증가시키며 n번 반복 
   	    printf("%c%c%c%c.%c%c.%c%c. ", schedule[i].date[0], schedule[i].date[1], schedule[i].date[2], schedule[i].date[3], schedule[i].date[4], schedule[i].date[5], schedule[i].date[6], schedule[i].date[7]);  
   	    //날짜를 형식에 맞게 출력 
        printf("%c%c:%c%c ", schedule[i].time[0], schedule[i].time[1], schedule[i].time[2], schedule[i].time[3]); 
        //시간을 형식에 맞게 출력  
        printf("%d ", schedule[i].importance);
        //중요도 출력  
		printf("%s ", schedule[i].title);
		//제목 출력  
		printf("%s\n", schedule[i].text);
		//내용 출력 후 개행 
    }
    return 0; //0을 리턴(반환)하여 프로그램을 종료 
} 
