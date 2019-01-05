#include <stdio.h>
int main(){
	char n[6];
	int i;
	int j;
	int g;
	printf("***본인과 형제의 나이 차를 구하는 프로그램***\n"); 
	printf("본인의 이름은? : ");
	scanf("%s", &n);
	printf("본인의 나이는? : ");
	scanf("%d", &i);
	printf("형제의 나이는? : ");
	scanf("%d", &j);
	if(i<j){
		g = j - i;
	}
	else if(j<i){
		g = i - j;
	}
	else{
		g = 0;
	}
	printf("%s의 형제와의 나이 차는 %d살 입니다.\n", n, g);
	return 0;
}	
