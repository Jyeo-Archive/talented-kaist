#include <stdio.h>
int main(){
  int a;
  int b;
  //정수 a, b를 저장할 변수 a, b 선언 
  printf("***두 정수 사이의 숫자들을 출력하는 프로그램***\n");
  //프로그램 타이틀 출력 
  printf("두 정수 a, b를 차례대로 입력해주세요(a<b) : ");
  scanf("%d%d", &a, &b);
  //사용자 입력을 받음 
  if(a<b){
  	int i=a;
  	while(i<b){
  		printf("%d ", i);
  		i++;
    }    
  } 
  if(a>b){
  	printf("오류: a는 b보다 작아야 합니다.");
  }
  if(a=b){
  	printf("%d", a);
  } 
  return 0; 
}
