#include<stdio.h>
#include<string.h>

int get_days(int m, int d){
	int a[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i, days = 0;
	for (i = 0; i < m; ++i){
		days += a[i];
	}
	days += d;
	return days;
}

int is_bad_day(int first, int days){
	first %= 7;
	if ((first + days - 1) % 7 == 5){
		return 1;
	}
	return 0;
}

int main(){
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= 12; ++i){
		if (is_bad_day(n, get_days(i, 13))){
			printf("%d\n", i);
		}
	}
	return 0;
}