#include <stdio.h> //stdio.h 헤더 파일
int main(){ //main 함수
	int tdi[4][4]; //4열 4행의 2차원 배열 선언
	int i, j; //반복문 내에서 사용할 반복 제어변수 i, j 선언
	int n=0; //배열에 수를 저장할 때 사용하는 변수 n 선언
	//배열에 1~16의 값 저장 
	for(i=0; i<4; i++){ //i가 4보다 적을 때 아래 코드를 반복, 반복이 끝날 때마다 i를 1 증가시킴 
		for(j=0; j<4; j++){ //j가 4보다 적을 때 아래 코드를 반복, 반복이 끝날 때마다 j를 1 증가시킴 
			n++; //n을 1 증가시킴. 총 16번(4*4) 반복되면서 1~16까지 증가 
			tdi[i][j]=n; //배열의 각 기억공간에 1~16까지 저장  
		}
	}
	//배열의 값 출력 
	for(i=0; i<4; i++){ //i의 값을 0으로 초기화, i가 4보다 적을 때 아래 코드를 반복, 반복이 끝날 때마다 i를 1 증가시킴 
		for(j=0; j<4; j++){ //j의 값을 0으로 초기화, j가 4보다 적을 때 아래 코드를 반복, 반복이 끝날 때마다 j를 1 증가시킴 
			printf("%5d", tdi[i][j]); //배열에 저장된 값을 행 단위로 출력 
		}
		printf("\n"); //출력이 끝날 때마다 개행 
	}
	return 0; //리턴값을 0으로 하여 프로그램을 종료한다.  
}
