#include <stdio.h>
#define MAXDISK 50 

int count=0;

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


void move(int n, int from, int to, int tmp, hanoi D[], int mode){ // n: 원반개수, from: 원반이 쌓여져 있는 기둥, to: 옮길 기둥, tmp: 나머지 1개의 기둥(이용할 기둥), D[]: 배열, mode: 모드  
	if(mode==2){
		D[from].n--;
        D[to].disk[D[to].n++] = D[from].disk[D[from].n];
        printf("%d => %d (원반 %d)\n", from, to, D[from].disk[D[from].n]);
        printTower(D);
        count++;
	}
	else if(mode==3){
		if (n == 1) { // 옮길 것이 하나면, 옮긴다.
            D[from].n--;
            D[to].disk[D[to].n++] = D[from].disk[D[from].n];
            printf("%d => %d (원반 %d)\n", from, to, D[from].disk[D[from].n]);
            printTower(D);
            count++;
        }
        else { // 두 개 이상이면 
            move(n - 1, from, tmp, to, D, 3);
            move(1, from, to, tmp, D, 3);
            move(n - 1, tmp, to, from, D, 3);
        }
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

void print_title(){
	printf("XXXXXXX5XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX5XX5X5X55XXXX5XXXXX5XXXXXXXXXXX55X5XX5X555555555555555555X55555555555X555X55555X55555555555555555555555yy55555\n");
    printf("XXXXXXXDXXXXXXXXXXXXXXXXXXXXXX5555X5XXXXXXXXXXXXXXX5XXXXX5XXXXXXX5X55XXXXX55X555XXX555X5XXXXX5XX555X5X55555555y55555555y5y55555y55555yyy5555yyy5y5yyyy\n");
    printf("XX5X5XXXXX5X5XXXX5XXX5X5XXXX55WWXD#DXXXX5X5X55XXXXXXXXX55XXXX55555555555555X55X55Wuy5#zDX555555yy55y55y55555y555555555yy555y55y5yyyyK5WyDy5555y5yyyyyy\n");
    printf("XXXXXXXX5XXXXX55X5XXXXX5yKuuu,zezK  XWKWWyy55X5y55555555y5555555555555X5X5XX5555yKeeXu WXy55555X555555555yy555yyyyyyyyyyyyyyy5yyyyyy ee5  Kyyyyyyyyyyy\n");
    printf("XX5XXX5XXXXX5X555555XyWWX#EGEEEeEK  G#9z#DXyy55555555555555555555y555555y555y5555uEEyK KD5555yy55yy5y5yy55y55y5yyyy5y5yyyy55yy5yyyyy eEz,,K5yyyWyWWWWy\n");
    printf("X5XXXXX555yXXXX555XX5KEXDz9E9EGeE5uuzDDzzD5XW5X555555X55X5X55y555555y55y5555555y5uEEXW,uD555555yyyyyyyyyy5yyyyyy5y5yyyyyyyyyyyyyyyyy eED,,K5WyWWWyWyyW\n");
    printf("5XXXXXX555XX55X5XXX55ueez5u,,   uuuuuu,u5D9eKy555X5555555555555y55555555yy5yyyyy5,EGXuu,Dyy55yy5y55yyyyyyyyyyy5yyyWyyWyyyyyyyyyyyyyy eED,,KXyyyWWyWWWW\n");
    printf("X555X55X555555555X55u eeeeeeeeeeeeeeeeeeGXD9D5Kyy555y5y55555y5555yy555555yy5yyyWy 9EXK,,XyyWWyWyWyyyyyyyyyyyyyWyWyWyyyWyWWyyyyWWWWWW e9z ,K5WWyWWyWWWW\n");
    printf("X55XXXX555X55555555WyeeeeeeeeeeeeeeeeeeeeEEWWX#Wy555555yy5yyyyyyyy5yyyyy55555yy55,EEXKu,XyyWyWWyWyWyyyWWWyWyWWWyyyyWWyWyyyWWWWWWWWWW eEX,,KyWWWWWWWWyW\n");
    printf("55555555X5555555555KWee9X5X55yy5XyK,,    u,z9eXuy55y5y5555y555y5yyWWWWWWyyyyyyyyy,EEXK,,XyyyyyWyyyyWWWWWyWWWWWWWWWWWWWWKWWWWWWWWWWWW eEX,,KyyWWWWWWWWW\n");
    printf("55555XX5555555X555W,XGEeeeeEGE#9####99eeGeeeeGzKKy55yyyyyyyy5yyyy555555yyyyyyWWyW GEXW,u5yyy5yyyWy5yWyyyyyWWWWWyWWWWWWWWKWWWWWWWWWWK eEX,uKyWWWWWWWWWW\n");
    printf("5555555X55555y5555ueeeeeeeeeeeeeeeeeeeeeee9Xu,KGKWyyy5yyy55yyyyyyyyyyyyy5y5yyyyyW GEDW,u5yWWWWWyWyWWWyWyWyyyyWyyyWWWWWWWWWWWWWWWWKKW eEXu,KyWKKWKWWKWW\n");
    printf("555555555y5X55555K GG9##D5D5XDD#Xy5XW,K , uy##9#5WKyy5yyyyyyyyyWyyyyyyyWyyyWyyyWy GEXW,u5WWWWWKWKWWWWWWWWWWWWWWWWWWWWWWWWWWWWKKKWWKW eEX, KyWWWWWWWWWW\n");
    printf("5y5X555555555555W,eeeeeeeeee9z9Dz#99zEzzEEzDDz9E9#KWyyyyyyyyyyyWyyyWyWyWWWWWWWWWW GGXy,uyWWWyyWWyWWWWWWWWWWWWWWWWKWWWWWWWWWWWWWKWKWK e9Xu,KWWKKKWKKKKK\n");
    printf("555y555y5y5yy555uXeGGeeeeeeeeeEEE#DzXXz#9EeG99W,KzzuWyWWyWWyyyyyWyyWyyyWWWyyWWWWW EEXy,uyWKyWWWWWWWWWKWWWKKWKWKWKWKKKWWKKKKWKWWKWWWW e9Xu,uWWKKKWKWKKK\n");
    printf("5y5y555y5y555yy, 5GEzzXXXDD##EEGGEE99zXXyKu W5#EE5zyuWyyyWyWWWWyWWWKWWWWWWyWWWyWy EEDWuuyWWWWWWWWWWWKWKWWWWWKWWWKKKKKKWKKKKKKKKKKKKK e9X,,KyWWWWWKWKWK\n");
    printf("555555555y5555uKeeGGGeeeeE9#DzDXXDX#X#z9GE#9Dyzee#zX5uyWyWWyyWyyWWWWWWWWWWWWWyWKW zeXyuuyWWWWWWKWKWWWWWWWKWWWWWWKWKKWWKKWKWWWKWKWWKK e#D,,uKKuuKKuKKKK\n");
    printf("5yy5yy5yy55y5y,eeeeeeeeeeeeeeeeee#999DE9EGGeeGEu  uEG KWWWWWWWWWWWWyWWWWWWWWWKWKW DeDy,uyWWKWWWWWWWWWWKKKKKKKKKKKKKKWuKWWWWKWKKKKKKu e9D,,uWKKKKKKKKuK\n");
    printf("yy555X5555555W DeG9z5yXX#EeeGeeeeeEEEE#XuK     DEeeG#yKWWWWWWWWWKWWWWWWWWWWWWWWWW XeDy,uWWWWWWWKWKWKWWKWWKKWKKWKWKKKKKWKKKKWWKKKKKKK e#D,uuKKKKKuKKKKK\n");
    printf("5555555X5y555,GeGGeeeeG9D5yWKuuK KuWKuWzDe9eeeeeeee# ,WuWWyyyWWyWWWWWWWWWWWWWWWWW 5eDy,uWWKWWWKKWKWKKKWWWKKKKKWKKWKKKKKKWKKKKKKKKKKu e#D,,KKKKKKKKKKuu\n");
    printf("555y5yyyyy5yW eGeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeGXW   Xe#uuKWyWWWWWWWWWWWWWWWWWWWKW 5ez5,uWWWKKKKKWWKWKWKKKKKWKKKKKKKKKKKKKKKKKKKKKKKu e#X,uKKKKKuKKKKKK\n");
    printf("5y555555555W #EE9E9E99Geeeeeeeeeeeee9D9Xy      uyEeeeGz9u,uuuuuuuuuuuuuuuuuuuuuuu 5ezy,uu,,u,,,,uuuuuuuuuuuu,uu,uuuu,,,,,uu,,,uu,uu, e9Xu,uuuu,,,,,,,u\n");
    printf("5yy55555555uzeeE9EGGGzDyW           u  ,y#XEeeeeeeeG#yyu9uWyWWWWKyKWWWWWWWWWWWyyyuXG#y, 5uu         ,,,uuuuKKuKKWKKuKuKKKuuKKKKuuKuu e9X, KKuKKuuKuuuu\n");
    printf("5yy55yyyyyW z99GeeEEGeeeeeeeeeeeeeeeeeeeeeeeeGee9zW  uXGeD#zDz#9#9#9#999##999E99EE9Gzy, eeeeeeeeeeee99zX5yWyyyyy55XXDDzzzz#zzzzzzDzXWe9Du XzDDDDDDDDDX\n");
    printf("KuuuuKuuKK,,eeG9#9EEGeeeeeeeeeeeeeeeGeeEEEz5y,  ,,5XEeee K#DXyWu,uuu,uKKWWy555XXyWXG95, 9uKWWy5Dz9Geeeeeeeeeeee9D5yKu,    ,uuWWy5y5yue9Du XX55555555y5\n");
    printf("#9#DDX5XX55eeeEGEGGGEzyyWWK,u u, ,,   u ,yWWXD9EGEeeeeX  eeeeeeeeeeeeeEzXyK,   ,u yeEXu 9y5yWyWWuuuuuuuuuKyXX#Eeeeeeeeeeeee9Dyuu     e9Du yX5yWWyWWWWy\n");
    printf("99EEGeGGE9GeEEeeeEE9EGeeeeeeeeeeeeeeeeeGeEEe9eeeee9K   9e#uKuKKKyyDzEeeeeeeeeeeeeeGeEX  DDXXXXXXXDXXXX55y5yy5WKuuuu  uK5D#GeeeeeeeeeeeeDu yWyy5yyyyyyW\n");
    printf("9###99###GeGE999EEeeeeeeeeeeeeeeeeeeeeeeeeeG#y,    y#eee#u555555555yyKKKKKKKWyDDEGeE9zuW5X5XXXy5yy5y5yX5XX5yyW5yX555y5WWK,       ,KXDD5DWKyKWWWWWWy55y\n");
    printf("########GGEGeG9EE99##D5DXWKWK,K,            KuXGeeeeeGDWyXDzDDzDDDXzDXDX5yy555WKK uuKyWy5yy55X55555XXXX555X555Xy5y55Xyyy5yXy5WyyWWKu,u,KuuWWWyWWWWKKWW\n");
    printf("9#99#9EeeeeeeeeeeGGGGeeeeeeeeeeeeeeeeeeeeeeeeeeeEEXDKWyXXzzDzDXXXXDXDzXXXXXD5DXDDDDXXD55DDXXXDXDDDXDX5X5XXXXXXXX5X555yX555yyyWyyyyy5yyWWyWyyyyWyyWyyWW\n");
    printf("###9#GDXXDz#9GeeeeeeeeeeeeeeeeeeeeeeeeeeeEe9#9XKWyy5XDXDX55y5XXyXX55yyX5XX5XyXyW55XX5Xy55555Xy55yy55XX5X5yy5555X55X5XXXy5X5XXXXX555555X5yyy5555yyyy5y5\n");
    printf("#9##EDW5yy5yWWuuuuKWWy5Dz#XDz99zzzDXXX5y55WuuKWWyy5Xyy5yXyy5W55Xy555X555yy555555yyyWWWKWKWWWWyy5yyyWWWKWKWWWWWKKWKKuuuKWKKuuK,uuKuuu,u,,u,,,,u,u,,,, K\n");
    printf("#9#Ee#EEG9#EE9E9E9EE##zDWXz9zDXD#zzzzX#z#zz9EEzGEGz9GzEz9EE9E9EE##9z####99zz#9z##z#E#z##99E9#zEX9#99#9#GEEE999##9#G9Ge9E#z9z9E99EzEE9E##E#9G99EEEE9#z#\n");
    printf("#z#eEz9#Dz9E9zE#99EE##99E9z9#9##Xz#####z#9##9##z#9DD99##zzz##DDDDD#z#zzXDzXzXXXDzzzz#X99zz#DDDzz#zzDz#XDz#zDzzz#95#DX5Xz#zDzXzX5#DzX55X5X555y5XWD5XzDD\n");
    printf("9GeeeeeeGeEEeEGeeeeGeeeeGeEeGeEGEeGG9eGGEGGEEG9G9GGE999eGG#Ee9eGeEGEeeeeGeeeeeeEeGEEGE99#9EE#GEEGEEeGGGEE9EEe9GEGGe#GeEGEeGGGGeeeeGeeeeeeGeeeeeeeeeeeG\n");
    printf("XKKuuKKuuKKuuuuuu,u,uuu,KKuKuuuKuuu, KuW,uuu K,,uu,uu,, ,u ,u K Ku,,, ,u , ,   ,u,,,, ,,K  ,, ,, ,       , ,                                         ,\n");
    printf("eeeeeeeeeeeeeeeeeeeeeeeeGGeeeGeeeeeeeeeeeeeeeeGeeGeGeGeeeeeGeGGEEEGeeeEGGeGeGeeEGeeeeeeeeeeeeeeEGeeeeeeeeeeeGeeeeeeeeeeeEeeGG9eGeeeeeeGeEeeeeeeGeeeeeE\n");
    printf("EeEEEGGeEGGEGEeEeGEeeeGeeeeEeGeGGGEGEEEeeeGeEeeeeEGeeEeeeGEeeeGeeeeeeeeeeGEGGEGGeeeEEGeEEGeGEeGGEeeeEEEeGGEGGEGE99E9eGEEeEG9eGeEGGezeGGEGE9EEGGGE9#9#z\n");
    printf("XX5X5DXyXX55X5XXXXXXXXXXX5X5X55555yyW555Wyy5yyyWyXyyy5WyyW5X5X55yy5y5yyy5XyX5y55WWyW5Wyy5WyWXyyy5yWW5yWyyy5y5Wyy55W5yWWWyKyyWWKWWWWWKKKuKWKKKKKKKKyKWy\n\n");                                                                                                                                                                                                           
    printf("  eeeeeeeeeee   KeeeD    We#         ee  eeeeeeeee zeeeeeeW            EeeG     eeeeeeeee      eey     ee      WeG      zee     ee     5eeey     ee,\n");  
    printf("  eeeeeeeeeee Weeeeeeez  yee        Xee  eeeeeeeeE eeeeeeeee,        eeeeeeee   eeeeeeeee      eee    yee      eeey     eeee    eeW  Eeeeeeee    ee9\n"); 
    printf("      eee     ee     ee   ee5   9   ee9  ee        eeD    eee       eeE    eee  ee             eeW     ee     eeeee     eeeee   ee, Xee    5ee   eey\n");  
    printf("      eee    eee     eee  eee  eee  ee   eeeeeeee, eeG   ueee      Kee     Dee  ee#eeeee       eeeGeeeeee    eee eee    eeXGee  eeu eeG     eeX  eeW\n");  
    printf("      eee    eee     eee   ee eeee Gee   eeeeeeeeu eeeeeeee        yee     ,ee  eeeeeeee,      eeeeeeeeee    ee   eez   ee# eee eeu eez     eee  eeK\n");  
    printf("      eee    uee     eee   eezee eeeeu   ee        eeD   ee         ee     eee  ee             eeu     ee   eeeeeeeee   eee  eeeeeK eee     ee5  eeu\n");  
    printf("      eee     eeeX ,eee     eee  eeee    ee        eee   uee        Xeee  eeeW  ee             eeD    Xee  eee9eeeEeee  eee   DeeeW  eeeW Weee   ee,\n");  
    printf("      eee      ueeeeee      eee   eeX    eeeeeeeee eee    5ee         eeeeee    ee             ee#    Gee Xee       eeE eee    yeeD   Deeeeez    eeK\n\n");                                                                                                              
    printf("  E9GX   G9eX   GEeee  yee#   ,GeE      GEeee E    e 5eE#EeG #9eee  EEGW     DeE#Eee  WGy        GeK    E#   9u   e 5eE#9ee e  e    e  e   #y 99eee,\n");   
    printf(" ,eE,#e# eW,#eK e,  y ee  Ge ee  Xe    ee   K ee#  e  EXeGXD ee  W ee uee    KE5eGXW eeGee     eeeeee eeeeeD eee  e  9Xee5# e5 eey 5e ee   ee eD  W\n");    
    printf("  eK 5eE e  ,eK eGeee EeeeW  WeeeX     De#eee eEee e    e    eeeee ee  ee       e   ee   ee   ,e     ue   ee e9ee e    e,   e  eDe  e Ge   ee eeeee\n");    
    printf("  eEXy   e5Xee  e         De      e9   ze     e  eee    e    e,    ee ee        e   ee   ee   ue      e   ee e, eee    eW   e  e  eee Ee   ee e    \n");    
    printf(" ueu    5e   eK e99ee eeeEee eeeEee    ee5Eee eG  eeW   eW   eeDGe ee  ee       ey   eeeee     eeeeee eeeeeD ee  eeW   e9   eK e,  ee  eeeee  ee#Ge\n");    
    printf("  z      E    u Xy#9E   y5     KX       55#9D #    5    D    5Wz9G  y   9       D                yD          z    y    D    G  E    5    ,    5yz9E\n\n\n");                                                                                                                                             
} 

int main(){
    hanoi D[3];
    int n;
    
    print_title();
    char enter = 0;
    while (enter != '\r' && enter != '\n') { enter = getchar(); }
    
    for(;;){
    	count=0;
        printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");  
    	printf("┃                        하노이탑 게임에 오신 것을 환영합니다!                       ┃\n");
    	printf("┃                                                                                    ┃\n");
    	printf("┃                    1. 하노이탑이란? -하노이탑에 대해 설명합니다                    ┃\n");
    	printf("┃             2. 하노이탑 자동 실행 모드 -자동으로 하노이탑 문제를 풉니다            ┃\n");
    	printf("┃   3. 하노이탑 직접 실행 모드 -사용자 스스로 하노이탑 문제를 풀 수 있도록 합니다    ┃\n");
    	printf("┃                                 4. 프로그램 종료                                   ┃\n");
    	printf("┃                                                                                    ┃\n");
	    printf("┃                        실행하실 모드의 번호를 입력해 주세요!                       ┃\n");
    	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n\n");
	    int mode;
	    scanf("%d", &mode);
    	if(mode==1){
	    	printf("\n하노이탑이란?\n");
	    	printf("하노이의 탑(Tower of Hanoi)은 퍼즐의 일종이다. \n");
    		printf("세 개의 기둥과 이 기둥에 꽂을 수 있는 크기가 다양한 원판들이 있고, \n");
    		printf("퍼즐을 시작하기 전에는 한 기둥에 원판들이 작은 것이 위에 있도록 순서대로 쌓여 있다.\n");
            printf("게임의 목적은 다음 두 가지 조건을 만족시키면서, \n");
    	    printf("기둥에 꽂힌 원판들을 그 순서 그대로 다른 기둥으로 옮겨서 다시 쌓는 것이다.\n");
	        printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
            printf("┃       1. 한 번에 하나의 원판만 옮길 수 있다.     ┃\n");
            printf("┃  2. 큰 원판이 작은 원판 위에 있어서는 안 된다.   ┃\n");
            printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
            printf("하노이의 탑은 프랑스의 수학자인 에두아르 뤼카(Edouard Lucas)가 \n");
	    	printf("클라우스 교수(professeur N. Claus)라는 필명으로 1883년에 발표하였다. \n");
	    	printf("1년 후 드 파르빌(Henri de Parville)은 Claus가 Lucas의 애너그램임을 밝히면서 다음과 같은 이야기로 하노이의 탑을 소개하였다.\n");
	    	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
            printf("┃  인도 베나레스에 있는 한 사원에는 세상의 중심을 나타내는 큰 돔이 있고 그 안에 세 개의 다이아몬드 바늘이 동판 위에 세워져 있습니다.   ┃\n");
	    	printf("┃          바늘의 높이는 1 큐빗이고 굵기는 벌의 몸통만 합니다. 바늘 가운데 하나에는 신이 64개의 순금 원판을 끼워 놓았습니다.           ┃\n");
	    	printf("┃     가장 큰 원판이 바닥에 놓여 있고, 나머지 원판들이 점점 작아지며 꼭대기까지 쌓아 있습니다. 이것은 신성한 브라흐마의 탑입니다.      ┃\n");
	    	printf("┃브라흐마의 지시에 따라 승려들은 모든 원판을 다른 바늘로 옮기기 위해 밤낮 없이 차례로 제단에 올라 규칙에 따라 원판을 하나씩 옮깁니다.  ┃\n");
	    	printf("┃                                     이 일이 끝날 때, 탑은 무너지고 세상은 종말을 맞이하게 됩니다.                                    ┃\n"); 
			printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
            printf("이후 라우즈 볼, 가드너 등이 하노이의 탑을 소개하면서 널리 알려졌다.\n");
		}
		else if(mode==2){
			printf("수동실행됩니다.\n");
            printf("원반의 개수를 입력해주십시오\n");
            scanf("%d", &n); //원반개수 입력  
            if(n==0){
            	printf("0: x\n1: x\n2: x\n");
			}
			else{
				int from, to, tmp;
				int i=0; 
				hanoi_reset(n, D); 
				printTower(D);
				printf("(시작)\n\n");
				for(;;){
					printf("옮길 원판이 있는 기둥의 번호를 입력해주세요: "); 
					scanf("%d", &from);
					printf("원판이 옮겨질 기둥의 번호를 입력해주세요: "); 
					scanf("%d", &to);
					if(from==to){
						printf("옮길 원판이 있는 기둥과 원판이 옮겨질 기둥의 번호가 같습니다!\n");
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
						move(n, from, to, tmp, D, mode);
						printf("이동횟수: %d 회\n\n", count);
					}
				}
		    }
		}
		else if(mode==3){
			printf("자동실행합니다.\n");
            printf("원반의 개수를 입력해주십시오: ");
            scanf("%d", &n); //원반개수 입력  
            if(n==0){
            	printf("0: x\n1: x\n2: x\n");
			}
			else{
                hanoi_reset(n, D); 
                printTower(D); 
                printf("(시작)\n\n");
                move(n, 0, 2, 1, D, mode);
                printf("이동횟수: %d 회\n", count);
		    }
		}
		else if(mode==4){
	    	printf("\n프로그램을 종료합니다.\n");
	    	return 0; 
		}
		else{
			printf("1~4 중에서 선택해주세요.\n");
		}
		printf("\n");
    }
}
