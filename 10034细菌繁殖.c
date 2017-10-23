#include<stdio.h>
#include<math.h>
int get_days(int m, int d){
	int a[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i, days = 0;
	for (i = 0; i < m; ++i){
		days += a[i];
	}
	days += d;
	return days;
}
int main(){
	
	int m1, d1, m2, d2, n;
	int days;
	scanf("%d%d%d%d%d", &m1, &d1, &n, &m2, &d2);
	days = get_days(m2, d2) - get_days(m1, d1);
	printf("%d", n*(int)(pow(2.0, days)));
	return 0;
}