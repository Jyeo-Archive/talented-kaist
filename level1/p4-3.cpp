#include <stdio.h>
int main(){
  int n;
  //사용자가 입력할 정수 n을 저장할 변수 n 선언 
  printf("***입력된 정수 n의 약수를 오름차순으로 출력하는 프로그램***\n");
  //프로그램 타이틀 출력 
  printf("정수 n을 입력해주세요 : ");
  scanf("%d", &n);
  //사용자 입력을 받음 
  int i=1;
  //약수인지 확인하기 위한 변수 i 선언 
  while(i<=n){ //만약 i가 n 이하이면 
    if(n%i==0){ //n 나누기 i의 나머지가 0일 경우(i가 n의 약수일 경우)에만 
    	printf("%d ", i); //i를 출력한다. 
	} 	
    i++; //다음 숫자로 넘어가기 위해서 i에 1을 추가합니다. 
  }
  return 0; //리턴값을 0으로 하여 프로그램을 종료한다. 
}
