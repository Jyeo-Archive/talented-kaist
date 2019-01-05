/*
KAIST 사이버 영재교육 C언어 레벨 1-1차시
도전과제 1-4번,
n을 사용자에게 입력받아 n의 구구단을 출력하는 프로그램
제작자: 여 준호 Junho Yeo 
*/
#include <stdio.h> //stdio.h 헤더 파
int main() //main function 
{
 int n; //Perpare n for User input 
 int i = 1;
 int q;
 printf("이 프로그램은 n의 구구단을 출력하는 프로그램입니다.\n");
 //Program info for user
 printf("n의 값을 입력해 주세요 : ");
 scanf("%d", &n);
 printf("입력하신 n의 값은 %d입니다.\n",n);
 while(i <= 9){
 	q = n * i;
 	printf("%d단 : %d X %d = %d\n", i, n, i, q );
 	i++;
 }
 return 0;
} 
