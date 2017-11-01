#include<stdio.h>

int main(){
	int n, i;
	double a = 1.0, b = 2.0, next = 0.0;
	double sum = 0.0;
	scanf("%d", &n);
	for (i = 0; i < n; ++i){
		sum += (b / a);
		next = a + b;
		a = b;
		b = next;
	}
	printf("%.2f", sum);
	return 0;
}