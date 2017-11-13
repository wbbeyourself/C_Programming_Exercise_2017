#include<stdio.h>

void sort(int* a){
	int t, i, j;
	for (i = 0; i < 10; ++i){
		for (j = i; j < 10; ++j){
			if (a[i] > a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}

int main(){
	int a[10] = { 0 };
	int i, first = 1;
	for (i = 0; i < 10; ++i){
		scanf("%d", &a[i]);
	}
	sort(a);

	for (i = 0; i < 10; ++i){
		if (first){
			printf("%d", a[i]);
			first = 0;
		}
		else{
			printf(" %d", a[i]);
		}
	}
	printf("\n");

	return 0;
}