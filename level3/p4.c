#include <stdio.h> //stdio.h ��� ���� 
#define array_size 100 //���ڿ��� ũ�� ���� 
int string_length_solver(const char *string_array){ //���ڿ��� ���̸� ���ϴ� �Լ� string_length_solver ����(�Ű������� ���ڿ� ������) 
    int string_length; //���ڿ��� ���̸� ������ ���� string_length ���� 
    for (string_length = 0; string_array[string_length]; string_length++);
    //���ڿ����� \0(���� ����)�� ���� ������ string_length�� 1�� ������Ŵ 
    return string_length; //string_length(���ڿ��� ũ��)�� ��ȯ 
}
void string_check(char string_array1[], char string_array2[]){ //�� ���ڿ��� ������ Ȯ���ϴ� �Լ� string-check ����(�Ű������� �� ���ڿ��� ������) 
    int string_array1_length=string_length_solver(string_array1); //ù ��°�� �Է¹��� ���ڿ��� ũ�⸦ ���ؼ� string_array1_length�� ���� 
    int string_array2_length=string_length_solver(string_array2); //�� ��°�� �Է¹��� ���ڿ��� ũ�⸦ ���ؼ� string_array2_length�� ���� 
    if(string_array1_length!=string_array2_length){ //�� ���ڿ��� ũ�Ⱑ �ٸ� ���, ���� �����Ƿ� false ��� 
    	printf("false"); 
	}
	else{ //�� ���ڿ��� ũ�Ⱑ ���ٸ� 
        int check=0; int i; //�ݺ������� ����� ���� i�� check�� ���� 
        for(i=0; i<string_array1_length; i++){ //���ڿ��� ũ�⸸ŭ �ݺ� 
        	if(string_array1[i]==string_array2[i]) check++; //���� �� ���ڿ��� �迭�� ���� ��ġ���� ���� ���ڸ� �����ϰ� ���� ��� check ������ ���� 1�� �ٲ۴�. 
	    } 
	    if(check==string_array1_length) printf("true"); //check ������ ���� ���ڿ��� ũ��� ���ٸ�(���ڿ��� ��� ���ڰ� ���� ���ٸ�) true ��� 
	    else printf("false"); //�ƴ϶�� false ��� 
    }
}
void string_change(char string_array1[]){ //���ڿ��� �ִ� ������ ��� '_'�� �ٲ��ִ� �Լ� string_change ����(�Ű������� ���ڿ� ������)  
	int i=0; int len=0; //�ݺ����� ����� ���� i�� ���� �ٲ� ���ڿ��� ������ �迭�� �ε����� ����� ���� len ����  
	char new_string_array1[array_size+1]; //���� �ٲ� ���ڿ��� ������ �迭 new_string_array1 ���� 
	for(i=0; string_array1[i]!='\0'; i++){ //ó�� ���ڿ����� \0(���� ����)�� ���� ������ �ݺ� 
		if(string_array1[i]==' '){ //ó�� ���ڿ��� ������ ���� ��� 
			new_string_array1[len++]='_'; //���ο� ���ڿ��� '_'�� ���� 
		}
		else{ //���� �̿��� ���ڰ� �ִٸ�  
			new_string_array1[len++]=string_array1[i]; //���ο� ���ڿ��� �״�� ���� 
		} 
	}
	new_string_array1[i]='\0'; //���ο� ���ڿ��� ���κп� ���� ���� �߰�(���ڿ� ��� ������ ����) 
	printf("\n%s", new_string_array1); //���ο� ���ڿ��� ��� 
} 
int main(){ //main() �Լ� 
	char string_array1[array_size]; //ù��° ���ڿ��� ������ ���� string_array1 ���� 
	char string_array2[array_size]; //�ι�° ���ڿ��� ������ ���� string_array2 ���� 
	gets(string_array1); //ù��° ���ڿ��� �Է¹��� 
	gets(string_array2); //�ι�° ���ڿ��� �Է¹���
	string_check(string_array1, string_array2); //���ڿ��� ������ Ȯ���ϰ�, ����� ����ϴ� �Լ��� string_check ȣ�� 
	string_change(string_array1); //���ڿ��� �ִ� ������ ��� '_'�� �ٲ��ִ� �Լ��� string_change ȣ��  
	return 0; //0�� ��ȯ�Ͽ� ���α׷��� �����Ѵ�. 
} 
