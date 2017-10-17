#include<stdio.h>
int main(){
	int a[4] = {0};
	int n = 4;
	int i = 0, j = 0, t = 0;
	for(i=0; i<4; ++i){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; ++i){
		for(j=i; j<n; ++j){
			if(a[i]>a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for(i=0; i<4; ++i){
		printf("%d ", a[i]);
	}
	return 0;
}
