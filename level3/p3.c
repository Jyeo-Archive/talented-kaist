//재귀 알고리즘을 사용하여 회문을 구별하는 프로그램 제작 
#include <stdio.h>
#include <string.h> 
int check_palindrome(char *word);
//재귀 알고리즘을 사용하여 회문인지 판별하는 함수인 check_palindrome() 선언 
int main(){
	char word[32]; //문자열 word를 선언 
	int i;
	scanf("%s", &word); //사용자에게 단어를 입력받아 문자열 word에 저장한다.   
    check_palindrome(word);
} 

int check_palindrome(char *word){ //재귀 알고리즘을 사용해 회문인지 판별하는 함수 
    int word_length=strlen(word); //word_length 변수를 선언하고 word 문자열의 길이를 구하여 저장한다. 
	if(word_length<=1){ 
	//사용자에게 입력받은 단어 word의 길이가 1 이하일 때, true를 출력하고 리턴값을 0으로 하여 프로그램을 종료한다.  
		printf("true"); //(길이가 1이거나 0인 단어는 무조건 회문이기 때문에 true를 출력한다) 
		return 0; 
	} 
	else if(word[0]!=word[word_length-1]){ //만약 단어의 첫 글자와 마지막 글자가 다르다면 회문이 아니므로 false를 출력한다.  
		printf("false");
		return 0;
	}
	else{
        word[word_length-1]=0; 
        return check_palindrome(word+1);
        //단어의 첫 글자와 마지막 글자를 배열에서 지운 후 지운 값을 리턴(재귀호출)한다. 
        /*예를 들어서 입력받은 단어가 level이라고 해보자.
		그럼 재귀함수로 인해 level -> eve -> v 로 변형되고, v는 한 글자이므로 true가 출력되는 것이다.*/
	}
}
