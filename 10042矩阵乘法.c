#include<stdio.h>
int main(){
	int m, n, p;
	int i, j, k, first;
	int ma[10][10] = { 0 }, mb[10][10] = { 0 }, mc[10][10] = { 0 };
	scanf("%d%d%d", &m, &n, &p);
	for (i = 0; i < m; ++i){
		for (j = 0; j < n; ++j){
			scanf("%d", &ma[i][j]);
		}
	}
	for (i = 0; i < n; ++i){
		for (j = 0; j < p; ++j){
			scanf("%d", &mb[i][j]);
		}
	}
	for (i = 0; i < m; ++i){
		first = 1;
		for (j = 0; j < p; ++j){
			mc[i][j] = 0;
			for (k = 0; k < n; ++k){
				mc[i][j] += (ma[i][k] * mb[k][j]);
			}//for3
			if (first){
				first = 0;
				printf("%d", mc[i][j]);
			}
			else{
				printf(" %d", mc[i][j]);
			}
		}//for2
		printf("\n");
	}//for1

	
	return 0;
}