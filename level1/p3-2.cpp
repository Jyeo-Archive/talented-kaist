#include <stdio.h>
int main()
{
	int i; 
	int j;
	//���� �Է��� �� i, �������� �Է��� �� j�� ���� ���� 
	printf("�� ������ �Է��ϼ��� : "); 
    scanf("%d%d", &i, &j);
    //�� ������ ����ڿ��� �Է¹޴´�.    
	if(i>j){ //i�� j���ٸ� ũ�ٸ� 
    	printf("first");
    	//first�� ����Ѵ�.
    	return 0;
    } 
    else{ //�� ���� ��� 
        printf("second");
		//second�� ����Ѵ�. 
		return 0;	
    }
}
