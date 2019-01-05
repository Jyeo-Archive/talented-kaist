#include <stdio.h>
int main()
{
	int year; 
	printf("연도를 입력해주십시오 : ");
    scanf("%d", &year);
    if(year%4==0 && year%100!=0){
        printf("윤년");
    }
    else if(year%400==0){
    	printf("윤년");
    }
    else{
    	printf("평년");
    } 
    return 0; 
} 
