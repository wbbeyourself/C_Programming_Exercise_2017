#include<stdio.h>
#include<string.h>
#include<math.h>

int x_to_ten(char* s, int x){
	int len = strlen(s);
	int i, j, t, t1;
	int sum = 0;
	for (i = 0; i < len; ++i){
		if ('0' <= s[i] && s[i] <= '9'){
			t = s[i] - '0';
		}
		else{
			t = s[i] - 'A' + 10;
		}
		t1 = 1;
		for (j = 0; j < len - 1 - i; ++j){
			t1 *= x;
		}
		sum += (t * t1);
	}
	return sum;
}

char* ten_to_x(int n, int x, char* s){
	int a[100] = { 0 };
	int m = 0, c;
	while (n){
		c = n % x;
		n = n / x;
		a[m] = c;
		m += 1;
	}
	for (c = m - 1; c >= 0; --c){
		if (a[c] > 9){
			s[m - 1 - c] = (a[c] - 10) + 'A';
		}
		else{
			s[m - 1 - c] = (a[c] + '0');
		}
	}
	return s;
}

int main(){
	int a, b, t;
	char s[100] = { '\0' };
	char s1[100] = { '\0' };
	scanf("%d%s%d", &a, s, &b);
	t = x_to_ten(s, a);
	printf("%s\n", ten_to_x(t, b, s1));
	return 0;
}