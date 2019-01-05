#include <stdio.h> //stdio. h 헤더 파일
int h; //버스 출발 시간(시)을 저장할 변수 
int m; //버스 출발 시간(분)을 저장할 변수 
int s; //버스 출발 시간(초)을 저장할 변수 
int D; //예상 버스 운행 시간(D)을 저장할 변수 
int h2; //버스 운행 시간을 시/분/초로 환산한 값(시)를 저장할 변수
int m2; //버스 운행 시간을 시/분/초로 환산한 값(분)를 저장할 변수
int s2; //버스 운행 시간을 시/분/초로 환산한 값(초)를 저장할 변수
void input(); //input 함수 선언 
void output(); //output 함수 선언 
void add(); //add 함수 선언 
void midnight(); //midnight 함수 선언 
void input(){
	scanf("%d%d%d", &h, &m, &s);
	scanf("%d", &D);
	//input 함수는 사용자로부터 입력을 받는 역할을 실행하는 함수다. 
} 
void output(){
	printf("%d %d %d", h, m, s);
	//output 함수는 결과를 출력하는 역할을 실행하는 함수다. 
}
void add(){
	h=h+h2;
	m=m+m2;
	s=s+s2;
	/*add 함수는 버스의 출발 시각과 버스 운행 시간을 더해서 
	버스 도착 시간을 구할 수 있게 하는 함수다. */
}
void midnight(){
 	  if(s>=60){
		m=s/60+m;
		s=s%60;
      } 
	  if(m>=60){
		h=m/60+h;
		m=m%60;
   	  }
	  if(h>=24){
		h=h-24;
	  }
	/*midnight 함수는 받아올림을 해주는 역할이다. 
	예를 들어 60초가 되었다면 1분 0초로 바꿔주는 등의 기능을 수행하는 것이다.
	midnight은 '자정'을 뜻하는데, 이 프로그램에서 24시(자정)는 0시로 취급하므로 
	그 부분을 응용하여 함수 이름을 그렇게 작명하였다.*/
}
int main(){ //main 함수 
 input(); //input 함수를 호출해 준다. 
 if(D>=3600){ 
		h2=D/3600;
		D=D%3600;
		m2=D/60;
		D=D%60;
		s2=D%60;
 }
 else if(D>=60){
 	    h2=0;
		m2=D/60;
		D=D%60;
		s2=D%60;	
 }	
 else if(D<60){
 	    h2=0;
 	    m2=0;
        s2=D;	
 }
 //위의 코드는 D의 값(초)을 시/분/초로 환산해준다. 
 add(); //add 함수를 호출해 준다. 
 midnight(); //midnight 함수를 호출해 준다. 
 output(); //output 함수를 호출해 준다. 
 return 0; //리턴값을 0으로 하여 프로그램을 종료한다. 
}
