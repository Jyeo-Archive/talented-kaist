#include <stdio.h> //stdio.h 헤더 파일 
#define array_size 100 //문자열의 크기 선언 
int string_length_solver(const char *string_array){ //문자열의 길이를 구하는 함수 string_length_solver 선언(매개변수는 문자열 포인터) 
    int string_length; //문자열의 길이를 저장할 변수 string_length 선언 
    for (string_length = 0; string_array[string_length]; string_length++);
    //문자열에서 \0(종료 문자)가 나올 때까지 string_length를 1씩 증가시킴 
    return string_length; //string_length(문자열의 크기)를 반환 
}
void string_check(char string_array1[], char string_array2[]){ //두 문자열이 같은지 확인하는 함수 string-check 선언(매개변수는 두 문자열의 포인터) 
    int string_array1_length=string_length_solver(string_array1); //첫 번째로 입력받은 문자열의 크기를 구해서 string_array1_length에 저장 
    int string_array2_length=string_length_solver(string_array2); //두 번째로 입력받은 문자열의 크기를 구해서 string_array2_length에 저장 
    if(string_array1_length!=string_array2_length){ //두 문자열의 크기가 다를 경우, 같지 않으므로 false 출력 
    	printf("false"); 
	}
	else{ //두 문자열의 크기가 같다면 
        int check=0; int i; //반복문에서 사용할 변수 i와 check를 선언 
        for(i=0; i<string_array1_length; i++){ //문자열의 크기만큼 반복 
        	if(string_array1[i]==string_array2[i]) check++; //만약 두 문자열의 배열이 같은 위치에서 같은 문자를 저장하고 있을 경우 check 변수의 값을 1로 바꾼다. 
	    } 
	    if(check==string_array1_length) printf("true"); //check 변수의 값이 문자열의 크기와 같다면(문자열의 모든 문자가 서로 같다면) true 출력 
	    else printf("false"); //아니라면 false 출력 
    }
}
void string_change(char string_array1[]){ //문자열에 있는 공백을 모두 '_'로 바꿔주는 함수 string_change 선언(매개변수는 문자열 포인터)  
	int i=0; int len=0; //반복문에 사용할 변수 i와 새로 바뀐 문자열을 저장할 배열의 인덱스로 사용할 변수 len 선언  
	char new_string_array1[array_size+1]; //새로 바뀐 문자열을 저장할 배열 new_string_array1 선언 
	for(i=0; string_array1[i]!='\0'; i++){ //처음 문자열에서 \0(종료 문자)가 나올 때까지 반복 
		if(string_array1[i]==' '){ //처음 문자열에 공백이 있을 경우 
			new_string_array1[len++]='_'; //새로운 문자열에 '_'로 저장 
		}
		else{ //공백 이외의 문자가 있다면  
			new_string_array1[len++]=string_array1[i]; //새로운 문자열에 그대로 저장 
		} 
	}
	new_string_array1[i]='\0'; //새로운 문자열의 끝부분에 공백 문자 추가(문자열 출력 에러를 막음) 
	printf("\n%s", new_string_array1); //새로운 문자열을 출력 
} 
int main(){ //main() 함수 
	char string_array1[array_size]; //첫번째 문자열을 저장할 변수 string_array1 선언 
	char string_array2[array_size]; //두번째 문자열을 저장할 변수 string_array2 선언 
	gets(string_array1); //첫번째 문자열을 입력받음 
	gets(string_array2); //두번째 문자열을 입력받음
	string_check(string_array1, string_array2); //문자열이 같은지 확인하고, 결과를 출력하는 함수인 string_check 호출 
	string_change(string_array1); //문자열에 있는 공백을 모두 '_'로 바꿔주는 함수인 string_change 호출  
	return 0; //0을 반환하여 프로그램을 종료한다. 
} 
