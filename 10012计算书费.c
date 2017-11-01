#include<stdio.h>
int main(){
	double price[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
	int n = 0;
	int i = 0;
	double sum = 0;
	for (i=0; i<10; ++i){
		scanf("%d", &n);
		sum += (price[i] * n);
	}
	printf("%.2f\n", sum);
	return 0;
}
