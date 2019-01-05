#include <cstdio>
int main()
{
    int i; 
	int j;
	//먼저 입력한 수 i, 다음으로 입력한 수 j를 담을 변수 
	printf("두 정수를 입력하세요 : "); 
    scanf("%d%d", &i, &j);
    //두 정수를 사용자에게 입력받는다.    
	if(i>j){ //i가 j보다면 크다면 
    	printf("first");
    	//first를 출력한다.
    	return 0;
    } 
    else if(j>i){ //j가 i보다 크다면 
        printf("second");
        //second를 출력한다. 
        return 0;	
    }
    else if(i=j){ //두 수가 같으면 
	    printf("equal");
        //equal을 출력한다. 
        return 0;	
    }
}
