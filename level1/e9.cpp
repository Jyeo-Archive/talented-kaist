#include <stdio.h>
int main(){
	char c[30];
	printf("***�Է��� �ܾ��� �պκп� hello�� ������ Ȯ���ϴ� ���α׷�***\n");
	printf("�ܾ �Է��� �ּ��� : ");
	scanf("%s", &c); 
	if(c[0]=='h' && c[1]=='e' && c[2]=='l' && c[3]=='l' && c[4]=='o'){
		printf("true[��]");
	}
	else{
		printf("false[����]");
	}
	return 0;
}
