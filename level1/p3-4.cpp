#include <cstdio>
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
    else if(j>i){ //j�� i���� ũ�ٸ� 
        printf("second");
        //second�� ����Ѵ�. 
        return 0;	
    }
    else if(i=j){ //�� ���� ������ 
	    printf("equal");
        //equal�� ����Ѵ�. 
        return 0;	
    }
}
