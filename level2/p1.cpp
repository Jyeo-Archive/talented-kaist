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
int average(int data[], int datasize){ //����� ����ϴ� �Լ� 
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
void InsertionSort(int data[], int n){ //���� ���� �Լ� 
	for(i=1; i<n; i++){ //i-1��° �����ʹ� ���ĵ� �����ͷ� ����
	    //���ĵ� ������ ���̿� ���� ���� 
	    int key=data[i];
	    for(j=i-1; data[j]>key&&j>=0; j--)
	        data[j+1]=data[j];
	    data[j+1]=key;
    }
}
