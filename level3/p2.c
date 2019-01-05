#include <stdio.h> //stdio.h 헤더 파일 선언 
#include <math.h> //math.h 헤더 파일 선언(루트 계산을 위해서) 

int point_distance(int x1, int y1, int x2, int y2); 
//두 점 사이의 거리를 구하는 함수 

struct Point{ //구조체 태그 선언 
	int x1; //x1 좌표 
	int y1; //y1 좌표 
	int x2; //x2 좌표 
	int y2; //y2 좌표 
	int x3; //x3 좌표 
	int y3; //y3 좌표 
};

struct Point point; //구조체 선언  

int main(){ //main 함수 
	scanf("%d%d%d%d%d%d", &point.x1, &point.y1, &point.x2, &point.y2, &point.x3, &point.y3);
	//사용자가 입력한 점의 x, y 좌표값을 구조체의 각 변수에 대입한다. 
	
	int a=point_distance(point.x1, point.y1, point.x2, point.y2);
    //점 (x1, y1)과 점 (x2, y2) 사이의 거리=변 a
	
	int b=point_distance(point.x2, point.y2, point.x3, point.y3);
	//점 (x2, y2)과 점 (x3, y3) 사이의 거리=변 b
	
	int c=point_distance(point.x2, point.y2, point.x3, point.y3);
	//점 (x1, y1)과 점 (x3, y3) 사이의 거리=변 c
	
	if(a+b>c&&a+c>b&&b+c>a){ //삼각형의 세 변 중 어떤 두 변의 길이의 합이라도 다른 한 변의 길이보다 클 경우 
		printf("true"); //true를 출력한다. 
	}
	else{ //그렇지 않다면 
		printf("false"); //false를 출력한다. 
	}
	
	return 0; //리턴값을 0으로 하여 프로그램을 종료한다. 
}

int point_distance(int x1, int y1, int x2, int y2){ //두 점 사이의 거리를 구하는 함수 
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)); //루트{(x2-x1)의 제곱+(y2-y1)의 제곱}를 계산하여 반환한다.
	//이때, math.h에 있는 sqrt 함수를 사용했다. 
}
