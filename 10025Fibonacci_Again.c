#include<stdio.h>

int main(){
	int n, k, i;
	int a = 7, b = 11, next = 0;
	scanf("%d", &n);// 2 <= n < 1000000
	k = n - 1;// k 表示需要进行几次运算
	for (i = 0; i < k; ++i){
		next = a + b;
		a = b % 3;
		b = next % 3;
	}
	if (next % 3 == 0){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}