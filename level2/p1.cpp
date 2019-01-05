#include <stdio.h>
int average(int data[], int datasize);
void swap(int *a, int *b);
void InsertionSort(int data[], int n);
int i, j;
int main(){
	int data[5];
	for(i=0; i<5; i++)
	    scanf("%d", &data[i]);
	int avg=average(data, 5);
	printf("%d\n", avg);
	InsertionSort(data, 5);
    printf("%d ", data[3]);
}
int average(int data[], int datasize){ //평균을 출력하는 함수 
	int sum=0;
	for(i=0; i<datasize; i++){
		sum+=data[i];
	}
	sum=sum/datasize;
	return sum;
}
void swap(int *a, int *b){
	int t=*a;
	*a=*b;
	*b=t;
} 
void InsertionSort(int data[], int n){ //삽입 정렬 함수 
	for(i=1; i<n; i++){ //i-1번째 데이터는 정렬된 데이터로 보고
	    //정렬된 데이터 사이에 끼어 넣음 
	    int key=data[i];
	    for(j=i-1; data[j]>key&&j>=0; j--)
	        data[j+1]=data[j];
	    data[j+1]=key;
    }
}
