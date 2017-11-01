#include<stdio.h>

int main(){
	int n;
	int a, b, c, d, sum=0; // a(千) b(百) c(十) d(个)
	scanf("%d", &n);
	a = n/1000;
	b = (n/100) % 10;
	c = (n/10) % 10;
	d = n % 10;
	sum += (a + b + c + d);
	if (n % sum == 0){
		printf("TRUE");
	}
	else{
		printf("FALSE");
	}
	return 0;
}