#include <stdio.h> //stdio. h 헤더 파일 
int main() //main 함수 
{
	int num; //사용자에게 입력받은 숫자를 담을 변수 
	printf("정수 하나를 입력해주세요 : ");
	scanf("%d", &num);
	//사용자에게 숫자 하나를 입력받는다. 
	if (num == 7) //만약 사용자가 입력한 수가 7일 경우
	{
		printf("lucky"); //lucky를 출력한다. 
		return 0; //리턴값을 0으로 하여 프로그램을 종료한다. 
	} 
	else //만약 사용자가 입력한 수가 7 이외의 수일 경우 
	{
		return 0; 
	    //어떠한 실행도 하지 않고 리턴값을 0으로 하여 프로그램을 종료한다. 
	} 
}
