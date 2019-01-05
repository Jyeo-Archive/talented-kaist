#include <stdio.h>
#define MAXDISK 50 

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
			else if(from+to==1){ //from과 to의 합이 1, 즉 두 값이 1/0이거나 0/1인 경우, 남은 원반의 번호는 2 
				tmp=2;
				i=1;
			}
			else if(from+to==2){ //from과 to의 합이 2, 즉 두 값이 2/0이거나 0/2인 경우, 남은 원반의 번호는 1  
				tmp=1;
				i=1;
			}
			else if(from+to==3){ //from과 to의 합이 3, 즉 두 값이 1/2이거나 2/1인 경우, 남은 원반의 번호는 0  
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
