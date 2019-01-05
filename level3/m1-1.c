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
        hanoi_reset(n, D); 
        printTower(D); 
    }	    
}
