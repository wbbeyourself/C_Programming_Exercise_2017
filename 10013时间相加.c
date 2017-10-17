#include<stdio.h>
int main(){
	int a, b;
	int h1, m1, h2, m2, h, m;
	scanf("%d%d", &a, &b);
	h1 = a / 100;
	m1 = a % 100;
	h2 = b / 100;
	m2 = b % 100;
	h = h1 + h2;
	m = m1 + m2;
	h += (m/60);
	h %= 24;
	m %= 60;
	if (h==0 && m==0){
		printf("000\n");
	}else if(m==0){
		printf("%d00\n", h);
	}else{
		printf("%d%d\n", h, m);
	}
	return 0;
}
