#include <stdio.h> //stdio. h 헤더 파일 
int n; //변량의 개수 
int i; //반복문에 사용되는 변수  
float average_solver(int* array); //평균값을 구하는 함수 
float variance_solver(int* array, float average); //분산을 구하는 함수 
int max_finder(int* array); //최댓값을 구하는 함수 
int min_finder(int* array, int max); //최솟값을 구하는 함수 
//함수 선언 

int main(){ //main 함수 
	scanf("%d", &n); //변량의 개수를 사용자로부터 입력받음 
	int array[n]; //길이가 n인 배열 선언 
	for(i=0; i<n; i++){ //변량을 입력받음 
		scanf("%d", &array[i]); //배열에 입력받은 변량을 저장 
	}
	
	//*****평균값 출력***** 
	float average=average_solver(array);
	printf("%.4f\n", average); //소수점 4자리까지 출력 
	
	//*****분산 출력***** 
	float variance=variance_solver(array, average);
    printf("%.4f\n", variance); //소수점 4자리까지 출력 
    
    //*****최댓값 출력***** 
    int max=max_finder(array);
    printf("%d\n", max);
    
    //*****최솟값 출력***** 
    int min=min_finder(array, max);
    printf("%d\n", min);
    
    return 0; //리턴값을 0으로 하여 프로그램을 종료한다.
}

float average_solver(int* array){ //평균값을 구하는 함수 
	int sum=0; //변량의 합을 저장할 변수 
	for(i=0; i<n; i++){ //변량의 합을 sum에 저장 
		sum+=array[i];                           
	}
	return sum/n; //변량의 합(sum)을 변량의 개수(n)로 나눈 결과(=평균)를 반환 
}

float variance_solver(int* array, float average){ //분산을 구하는 함수 
	float variance=0; //분산을 저장할 변수 
	int another_array[n]; //아래 계산에 필요한 배열 
	for(i=0; i<n; i++){
		another_array[i]=(array[i]-average)*(array[i]-average);
		//(변량을 각각 a1, a2, a3...an, 자료의 평균을 m이라고 할 때) (a1-m)의 제곱,(a2-m)의 제곱,...(an-m)의 제곱을 계산하여 배열에 저장한다.        
	}
	for(i=0; i<n; i++){
		variance+=another_array[i]; //variance 변수에 another_array 배열에 저장된 값들의 합을 저장한다.                
	}
	variance/=n; //variance 변수의 값을 변량의 개수로 나눈 것을 다시 variance 변수에 저장한다. 
	return variance; //분산(variance)을 반환 
}

int max_finder(int* array){ //최댓값을 구하는 함수 
	int max=0; //최댓값을 저장할 변수 
	for(i=0; i<n; i++){
		if(array[i]>max){ //배열에 저장된 변량이 max에 저장된 값보다 클 경우 그 값을 max에 저장한다. 
			max=array[i];
		}
	}
	return max; //최댓값(max)을 반환한다. 
}

int min_finder(int* array, int max){ //최솟값을 구하는 함수 
	int min=max; //최솟값을 저장할 변수(최댓값을 할당한다) 
	for(i=0; i<n; i++){
		if(array[i]<min){ //배열에 저장된 변량이 min에 저장된 값보다 작을 경우 그 값을 min에 저장한다.
			min=array[i];
		}
	}
	return min; //최솟값(min)을 반환한다. 
}
