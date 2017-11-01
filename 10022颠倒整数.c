#include<stdio.h>

int main(){
	int n;
	int a, b, c, d; // a(千) b(百) c(十) d(个)
	int out = 0;
	scanf("%d", &n);
	a = n/1000;
	b = (n/100) % 10;
	c = (n/10) % 10;
	d = n % 10;
	if (n/10 == 0){// 1位数
		out = n;
	}
	else if (n/100 == 0){//2位数
		out = d * 10 + c;
	}
	else if (n / 1000 == 0){//3位数
		out = d * 100 + c * 10 + b;
	}
	else{//4位数
		out = d * 1000 + c * 100 + b * 10 + a;
	}
	printf("%d\n", out);
	return 0;
}