#include <stdio.h>
#define MAXDISK 50 

int check=0;

typedef struct Hanoi hanoi; //기둥 구조체 배열 선언
struct Hanoi{ // 기둥
    int n; // 원반 개수(인덱스) 
    int disk[MAXDISK]; // 원반 정보
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


void move(int n, int from, int to, int tmp, hanoi D[]){ // n: 원반개수, from: 원반이 쌓여져 있는 기둥, to: 옮길 기둥, tmp: 나머지 1개의 기둥(이용할 기둥), D[]: 배열 
	if (n == 1) { // 옮길 것이 하나면, 옮긴다.
        D[from].n--;
        D[to].disk[D[to].n++] = D[from].disk[D[from].n];
        check++;
    }
    else { // 두 개 이상이면 
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
    
    scanf("%d", &n); //원반개수 입력  
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
