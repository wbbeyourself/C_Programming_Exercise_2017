#include<stdio.h>

int main(){
	int n;
	int a, b, c, d; // a(ǧ) b(��) c(ʮ) d(��)
	int out = 0;
	scanf("%d", &n);
	a = n/1000;
	b = (n/100) % 10;
	c = (n/10) % 10;
	d = n % 10;
	if (n/10 == 0){// 1λ��
		out = n;
	}
	else if (n/100 == 0){//2λ��
		out = d * 10 + c;
	}
	else if (n / 1000 == 0){//3λ��
		out = d * 100 + c * 10 + b;
	}
	else{//4λ��
		out = d * 1000 + c * 100 + b * 10 + a;
	}
	printf("%d\n", out);
	return 0;
}