#include <stdio.h>
int main(){
	char c[30];
	printf("***입력한 단어의 앞부분에 hello가 들어가는지 확인하는 프로그램***\n");
	printf("단어를 입력해 주세요 : ");
	scanf("%s", &c); 
	if(c[0]=='h' && c[1]=='e' && c[2]=='l' && c[3]=='l' && c[4]=='o'){
		printf("true[참]");
	}
	else{
		printf("false[거짓]");
	}
	return 0;
}
