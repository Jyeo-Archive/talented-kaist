#include <stdio.h>
int main(){
  int a;
  int b;
  //���� a, b�� ������ ���� a, b ���� 
  printf("***�� ���� ������ ���ڵ��� ����ϴ� ���α׷�***\n");
  //���α׷� Ÿ��Ʋ ��� 
  printf("�� ���� a, b�� ���ʴ�� �Է����ּ���(a<b) : ");
  scanf("%d%d", &a, &b);
  //����� �Է��� ���� 
  if(a<b){
  	int i=a;
  	while(i<b){
  		printf("%d ", i);
  		i++;
    }    
  } 
  if(a>b){
  	printf("����: a�� b���� �۾ƾ� �մϴ�.");
  }
  if(a=b){
  	printf("%d", a);
  } 
  return 0; 
}
