//��� �˰����� ����Ͽ� ȸ���� �����ϴ� ���α׷� ���� 
#include <stdio.h>
#include <string.h> 
int check_palindrome(char *word);
//��� �˰����� ����Ͽ� ȸ������ �Ǻ��ϴ� �Լ��� check_palindrome() ���� 
int main(){
	char word[32]; //���ڿ� word�� ���� 
	int i;
	scanf("%s", &word); //����ڿ��� �ܾ �Է¹޾� ���ڿ� word�� �����Ѵ�.   
    check_palindrome(word);
} 

int check_palindrome(char *word){ //��� �˰����� ����� ȸ������ �Ǻ��ϴ� �Լ� 
    int word_length=strlen(word); //word_length ������ �����ϰ� word ���ڿ��� ���̸� ���Ͽ� �����Ѵ�. 
	if(word_length<=1){ 
	//����ڿ��� �Է¹��� �ܾ� word�� ���̰� 1 ������ ��, true�� ����ϰ� ���ϰ��� 0���� �Ͽ� ���α׷��� �����Ѵ�.  
		printf("true"); //(���̰� 1�̰ų� 0�� �ܾ�� ������ ȸ���̱� ������ true�� ����Ѵ�) 
		return 0; 
	} 
	else if(word[0]!=word[word_length-1]){ //���� �ܾ��� ù ���ڿ� ������ ���ڰ� �ٸ��ٸ� ȸ���� �ƴϹǷ� false�� ����Ѵ�.  
		printf("false");
		return 0;
	}
	else{
        word[word_length-1]=0; 
        return check_palindrome(word+1);
        //�ܾ��� ù ���ڿ� ������ ���ڸ� �迭���� ���� �� ���� ���� ����(���ȣ��)�Ѵ�. 
        /*���� �� �Է¹��� �ܾ level�̶�� �غ���.
		�׷� ����Լ��� ���� level -> eve -> v �� �����ǰ�, v�� �� �����̹Ƿ� true�� ��µǴ� ���̴�.*/
	}
}
