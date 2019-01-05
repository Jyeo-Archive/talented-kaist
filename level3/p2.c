#include <stdio.h> //stdio.h ��� ���� ���� 
#include <math.h> //math.h ��� ���� ����(��Ʈ ����� ���ؼ�) 

int point_distance(int x1, int y1, int x2, int y2); 
//�� �� ������ �Ÿ��� ���ϴ� �Լ� 

struct Point{ //����ü �±� ���� 
	int x1; //x1 ��ǥ 
	int y1; //y1 ��ǥ 
	int x2; //x2 ��ǥ 
	int y2; //y2 ��ǥ 
	int x3; //x3 ��ǥ 
	int y3; //y3 ��ǥ 
};

struct Point point; //����ü ����  

int main(){ //main �Լ� 
	scanf("%d%d%d%d%d%d", &point.x1, &point.y1, &point.x2, &point.y2, &point.x3, &point.y3);
	//����ڰ� �Է��� ���� x, y ��ǥ���� ����ü�� �� ������ �����Ѵ�. 
	
	int a=point_distance(point.x1, point.y1, point.x2, point.y2);
    //�� (x1, y1)�� �� (x2, y2) ������ �Ÿ�=�� a
	
	int b=point_distance(point.x2, point.y2, point.x3, point.y3);
	//�� (x2, y2)�� �� (x3, y3) ������ �Ÿ�=�� b
	
	int c=point_distance(point.x2, point.y2, point.x3, point.y3);
	//�� (x1, y1)�� �� (x3, y3) ������ �Ÿ�=�� c
	
	if(a+b>c&&a+c>b&&b+c>a){ //�ﰢ���� �� �� �� � �� ���� ������ ���̶� �ٸ� �� ���� ���̺��� Ŭ ��� 
		printf("true"); //true�� ����Ѵ�. 
	}
	else{ //�׷��� �ʴٸ� 
		printf("false"); //false�� ����Ѵ�. 
	}
	
	return 0; //���ϰ��� 0���� �Ͽ� ���α׷��� �����Ѵ�. 
}

int point_distance(int x1, int y1, int x2, int y2){ //�� �� ������ �Ÿ��� ���ϴ� �Լ� 
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)); //��Ʈ{(x2-x1)�� ����+(y2-y1)�� ����}�� ����Ͽ� ��ȯ�Ѵ�.
	//�̶�, math.h�� �ִ� sqrt �Լ��� ����ߴ�. 
}
