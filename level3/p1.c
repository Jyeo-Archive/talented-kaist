#include <stdio.h> //stdio. h ��� ���� 
int n; //������ ���� 
int i; //�ݺ����� ���Ǵ� ����  
float average_solver(int* array); //��հ��� ���ϴ� �Լ� 
float variance_solver(int* array, float average); //�л��� ���ϴ� �Լ� 
int max_finder(int* array); //�ִ��� ���ϴ� �Լ� 
int min_finder(int* array, int max); //�ּڰ��� ���ϴ� �Լ� 
//�Լ� ���� 

int main(){ //main �Լ� 
	scanf("%d", &n); //������ ������ ����ڷκ��� �Է¹��� 
	int array[n]; //���̰� n�� �迭 ���� 
	for(i=0; i<n; i++){ //������ �Է¹��� 
		scanf("%d", &array[i]); //�迭�� �Է¹��� ������ ���� 
	}
	
	//*****��հ� ���***** 
	float average=average_solver(array);
	printf("%.4f\n", average); //�Ҽ��� 4�ڸ����� ��� 
	
	//*****�л� ���***** 
	float variance=variance_solver(array, average);
    printf("%.4f\n", variance); //�Ҽ��� 4�ڸ����� ��� 
    
    //*****�ִ� ���***** 
    int max=max_finder(array);
    printf("%d\n", max);
    
    //*****�ּڰ� ���***** 
    int min=min_finder(array, max);
    printf("%d\n", min);
    
    return 0; //���ϰ��� 0���� �Ͽ� ���α׷��� �����Ѵ�.
}

float average_solver(int* array){ //��հ��� ���ϴ� �Լ� 
	int sum=0; //������ ���� ������ ���� 
	for(i=0; i<n; i++){ //������ ���� sum�� ���� 
		sum+=array[i];                           
	}
	return sum/n; //������ ��(sum)�� ������ ����(n)�� ���� ���(=���)�� ��ȯ 
}

float variance_solver(int* array, float average){ //�л��� ���ϴ� �Լ� 
	float variance=0; //�л��� ������ ���� 
	int another_array[n]; //�Ʒ� ��꿡 �ʿ��� �迭 
	for(i=0; i<n; i++){
		another_array[i]=(array[i]-average)*(array[i]-average);
		//(������ ���� a1, a2, a3...an, �ڷ��� ����� m�̶�� �� ��) (a1-m)�� ����,(a2-m)�� ����,...(an-m)�� ������ ����Ͽ� �迭�� �����Ѵ�.        
	}
	for(i=0; i<n; i++){
		variance+=another_array[i]; //variance ������ another_array �迭�� ����� ������ ���� �����Ѵ�.                
	}
	variance/=n; //variance ������ ���� ������ ������ ���� ���� �ٽ� variance ������ �����Ѵ�. 
	return variance; //�л�(variance)�� ��ȯ 
}

int max_finder(int* array){ //�ִ��� ���ϴ� �Լ� 
	int max=0; //�ִ��� ������ ���� 
	for(i=0; i<n; i++){
		if(array[i]>max){ //�迭�� ����� ������ max�� ����� ������ Ŭ ��� �� ���� max�� �����Ѵ�. 
			max=array[i];
		}
	}
	return max; //�ִ�(max)�� ��ȯ�Ѵ�. 
}

int min_finder(int* array, int max){ //�ּڰ��� ���ϴ� �Լ� 
	int min=max; //�ּڰ��� ������ ����(�ִ��� �Ҵ��Ѵ�) 
	for(i=0; i<n; i++){
		if(array[i]<min){ //�迭�� ����� ������ min�� ����� ������ ���� ��� �� ���� min�� �����Ѵ�.
			min=array[i];
		}
	}
	return min; //�ּڰ�(min)�� ��ȯ�Ѵ�. 
}
