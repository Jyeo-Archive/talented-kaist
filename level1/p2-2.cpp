#include <stdio.h>//stdio.h 헤더 파일 

int main()//main 함수 
{
	int onen;
	//첫 번째로 입력된 수를 담을 변수. 1을 뜻하는 one과 number(수)를 뜻하는 n을 합성하여 작명함 
	int twon;
	//두 번째로 입력된 수를 담을 변수. onen과 같은 방법으로 작명함
	int threen;
	//세 번째로 입력된 수를 담을 변수. onen, twon과 같은 방법으로 작명함
	printf("사용자가 입력한 세 정수의 평균을 구하는 프로그램입니다.\n");
	//프로그램이 하는 일을 사용자에게 설명 
	printf("세 정수를 차례대로 입력해주세요(화이트스페이스로 구분):");
    scanf("%d%d%d", &onen, &twon, &threen);
	//사용자 입력을 받아 세 정ㅅ를 onen, twon, threen에 차례로 저장한다. 
    printf("입력하신 세 정수는 %d, %d, %d 입니다.\n", onen, twon, threen);
    //사용자가 입력한 정수를 확인시켜준다. 
    double average; //세 수의 평균을 담을 변수.
	average = ( onen + twon + threen ) / 3;
	/*{(평균) = (항목의 합) / (항목의 수)} 이므로 
	사용자가 입력한 정수의 값들의 합을 3으로 나눈 값을 average에 저장한다. 
	*/
	printf("입력하신 세 정수의 평균은 %.2f 입니다.", average);
	//평균을 출력한다. 
	return 0;
}
