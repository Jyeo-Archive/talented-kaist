#include <stdio.h>
int main(void)
{
	int tdn; //Three Digit Number의 줄임말로 변수 이름을 작명 
	printf("3자리의 정수를 입력해주세요 : "); 
	scanf("%d", &tdn);
	//사용자로부터 3자리의 정수를 입력받음 
	int i = tdn/100; //백의 자리 수 
	int j = (tdn/10)%10; //십의 자리 수 
	int q = tdn%10; //일의 자리 수 
	printf("백의 자리 수 : %d\n십의 자리 수 : %d\n일의 자리 수 : %d", i, j, q); //출력 
	return 0; 
}
