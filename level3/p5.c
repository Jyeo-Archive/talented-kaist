#include <stdio.h> //stdio.h ��� ���� ���� 
#include <string.h> //string.h ��� ���� ���� 
#include <stdlib.h> //stdlib.h ��� ���� ���� 
struct Schedule{ //�±װ� Schedule�� ���� ����ü ����(��¥, �ð�, ������ �̸�(����), �߿䵵, ������ ����)
	char date[8]; //��¥�� �Է¹޾� ������ ũ�� 8�� ���ڿ�(8�� ���ڰ� ���� ��) date ���� 
	char time[4]; //�ð��� �Է¹޾� ������ ũ�� 4�� ���ڿ�(4�� ���ڰ� ���� ��) time ���� 
	int importance; //�߿䵵�� �Է¹޾� ������ ������ ���� importance ���� 
	char *title, *text; //������ ����� ������ �Է¹޾� ������ ���ڿ� ������ ���� title, text ����  
};

int main(){ //main �Լ� 
    int n; //�Է¹��� ������ ������ ������ ������ ���� n ���� 
    scanf("%d", &n); //����ڿ��� ������ ������ �Է¹ް� �� ���� ���� n�� ���� 
    struct Schedule schedule[n]; //ũ�Ⱑ n�� ����ü �迭 schedule ���� 
    int i; //�ݺ����� ����� ���� i ���� 
    for(i=0; i<n; i++){ //1ȸ �ݺ��� ������ i�� ���� 1 ������Ű�� n�� �ݺ� 
        schedule[i].title=(char*)malloc(sizeof(char)*n); //���ڿ� schedule[i].title�� char���� n�� ������ �� �ֵ��� �޸𸮸� ���� �Ҵ�  
        schedule[i].text=(char*)malloc(sizeof(char)*n); //���ڿ� schedule[i].text�� char���� n�� ������ �� �ֵ��� �޸𸮸� ���� �Ҵ� 
   	    scanf("%s %s %d %s %s", &schedule[i].date, &schedule[i].time, &schedule[i].importance, schedule[i].title, schedule[i].text); 
   	    //��¥, �ð�, ������ �߿䵵, ������ ����, ������ ������ ������� �Է¹޾� ����ü�� �� ������ ���� 
    }
    for(i=0; i<n; i++){ //1ȸ �ݺ��� ������ i�� ���� 1 ������Ű�� n�� �ݺ� 
   	    printf("%c%c%c%c.%c%c.%c%c. ", schedule[i].date[0], schedule[i].date[1], schedule[i].date[2], schedule[i].date[3], schedule[i].date[4], schedule[i].date[5], schedule[i].date[6], schedule[i].date[7]);  
   	    //��¥�� ���Ŀ� �°� ��� 
        printf("%c%c:%c%c ", schedule[i].time[0], schedule[i].time[1], schedule[i].time[2], schedule[i].time[3]); 
        //�ð��� ���Ŀ� �°� ���  
        printf("%d ", schedule[i].importance);
        //�߿䵵 ���  
		printf("%s ", schedule[i].title);
		//���� ���  
		printf("%s\n", schedule[i].text);
		//���� ��� �� ���� 
    }
    return 0; //0�� ����(��ȯ)�Ͽ� ���α׷��� ���� 
} 
