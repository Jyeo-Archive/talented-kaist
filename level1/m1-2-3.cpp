#include <stdio.h> //stdio.h ��� ���� 
int main(){ //main �Լ� 
 printf(" - ���� �µ��� ȭ�� �µ��� ��ȯ�ϴ� ���α׷� -\n");
 //���α׷� Ÿ��Ʋ ��� 
 float i; //���� �µ��� ������ ���� 
 float j; //ȭ�� �µ��� ������ ���� 
 printf("���� �µ��� �Է��ϼ��� : ");
 //����ڿ��� ȭ�� �µ��� ��ȯ�� ���� �µ��� �Է��ش޶�� �䱸�Ѵ�.  
 scanf("%f", &i);
 //����ڿ��� ���� �µ��� �Է¹޴´�. 
 j = 1.8*i+32; //(ȭ�� �µ�)=(5���� 9)*(���� �µ�)+32 
 //�̶�, (5���� 9)�� 1.8�̹Ƿ� ���ǻ� �Ҽ� 1.8�� ��� 
 printf("%.3f", j);
 //ȯ���� ȭ�� �µ��� ���  
 return 0; //���ϰ��� 0���� �Ͽ� ���α׷��� �� 
}