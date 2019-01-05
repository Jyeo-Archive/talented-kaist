#include <stdio.h>
#define MAXDISK 50 

typedef struct Hanoi hanoi; //��� ����ü �迭 ����
struct Hanoi{ // ���
    int n; // ���� ����(�ε���) 
    int disk[MAXDISK]; // ���� ����
};

void printTower(hanoi P[]){
    int i, j;
    int k=0;

    for (i = 0; i < 3; i++) {
        printf("%d : ", i);
        for (j = 0; j < P[i].n; j++) {
            printf("%d ", P[i].disk[j]);
            k++;
        }
        if(k==0) printf("x");
        printf("\n");
        k=0;
    }
    printf("\n");
}


void move(int n, int from, int to, int tmp, hanoi D[]){ // n: ���ݰ���, from: ������ �׿��� �ִ� ���, to: �ű� ���, tmp: ������ 1���� ���(�̿��� ���), D[]: �迭
	D[from].n--;
    D[to].disk[D[to].n++] = D[from].disk[D[from].n];
    printTower(D);
}

void hanoi_reset(int n, hanoi D[]){
    int i;

    for (i = 0; i < n; i++) {
        D[0].disk[i] = n - i;
    }
    D[0].n = n;
    D[1].n = 0;
    D[2].n = 0;
}

int main(){
    hanoi D[3]; 
    int n;
    scanf("%d", &n);   
    if(n==0){
        printf("0: x\n1: x\n2: x\n");
    }
    else{
		int from, to, tmp;
		int i=0; 
		hanoi_reset(n, D); 
		printTower(D);
		for(;;){
			scanf("%d %d", &from, &to);
			if(from==to){
				//.
			}
			else if(!(from==0||from==1||from==2)||!(to==0||to==1||to==2)){
				//.
			}
			else if(from+to==1){ //from�� to�� ���� 1, �� �� ���� 1/0�̰ų� 0/1�� ���, ���� ������ ��ȣ�� 2 
				tmp=2;
				i=1;
			}
			else if(from+to==2){ //from�� to�� ���� 2, �� �� ���� 2/0�̰ų� 0/2�� ���, ���� ������ ��ȣ�� 1  
				tmp=1;
				i=1;
			}
			else if(from+to==3){ //from�� to�� ���� 3, �� �� ���� 1/2�̰ų� 2/1�� ���, ���� ������ ��ȣ�� 0  
				tmp=0;
				i=1;
			}
			if(i=1){
				move(n, from, to, tmp, D);
			}
			i=0;
	    }
	}
}
