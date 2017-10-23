#include<stdio.h>

int main(){
	int n, i, sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; ++i){
		if (!(i/10 == 7 || i%10 == 7 || i % 7 == 0)){
			sum += (i*i);
		}
	}
	printf("%d", sum);
	return 0;
}