#include <stdio.h>
#define MAXDISK 50 

int check=0;

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
	if (n == 1) { // �ű� ���� �ϳ���, �ű��.
        D[from].n--;
        D[to].disk[D[to].n++] = D[from].disk[D[from].n];
        check++;
    }
    else { // �� �� �̻��̸� 
        move(n - 1, from, tmp, to, D);
        move(1, from, to, tmp, D);
        move(n - 1, tmp, to, from, D);
    }
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
    
    scanf("%d", &n); //���ݰ��� �Է�  
    if(n==0){
       	printf("0: x\n1: x\n2: x\n");
       	printf("0");
	}
	else{
        hanoi_reset(n, D); 
        printTower(D); 
        move(n, 0, 2, 1, D);
        printTower(D); 
        printf("%d", check);
	}
}
