#include<stdio.h>
int main(){
	int a[20][20] = { 0 };
	int i, j, n, first;
	scanf("%d", &n);
	for (i = 0; i < 20; ++i){
		for (j = 0; j < i+1; ++j){
			if (j == 0 || j == i){
				a[i][j] = 1;
			}
			else{
				a[i][j] = a[i - 1][j] + a[i-1][j-1];
			}
		}
	}
	for (i = 0; i < n; ++i){
		first = 1;
		for (j = 0; a[i][j] > 0; ++j){
			if (first){
				first = 0;
				printf("%d", a[i][j]);
			}
			else{
				printf(" %d", a[i][j]);
			}
		}//for2
		printf("\n");
	}//for1
	
	return 0;
}