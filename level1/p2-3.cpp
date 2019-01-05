#include <stdio.h> //stdio.h 헤더 파일 
int main() //main 함수 
{
	int first;
	int second;
	//사용자에게 입력받은 정수를 담을 두 변수를 선언한다.
	printf("사용자에게 두 정수를 입력받아 역순으로 출력하는 프로그램입니다.\n");
	//사용자에게 프로그램이 하는 일에 대해 설명해준다.
	printf("두 정수를 입력해주세요(화이트스페이스로 구분) : ");
	scanf("%d%d", &first, &second);
	//사용자에게 두 정수의 값을 입력 받는다. 
	printf("입력하신 두 정수는 %d, %d 입니다.\n", first, second);
	//사용자에게 두 정수의 값을 확인시켜 준다. 
	printf("%d %d", second, first);
	//두 정수의 순서를 바꾸어서 출력한다. 
	return 0; 
	//리턴값을 0으로 반환하여 프로그램을 종료한다.  
}

