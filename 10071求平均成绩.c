#include<stdio.h>

void count(int a[], int n, int *pmax, int *pmin, float *pave){
	int i;
	*pave = 0.0;
	for (i = 0; i < n; ++i){
		*pave += a[i];
		if (a[i] > *pmax){
			*pmax = a[i];
		}
		if (a[i] < *pmin){
			*pmin = a[i];
		}
	}
	*pave /= n;
}

int main(){
	int max = 0, min = 99999999, n, i;
	float ave;
	int a[35] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; ++i){
		scanf("%d", &a[i]);
	}
	count(a, n, &max, &min, &ave);
	printf("%d %d %.2f\n", max, min, ave);
	return 0;
}