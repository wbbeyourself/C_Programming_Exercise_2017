#include<stdio.h>
#include<string.h>

int main(){
	int n, m, i, j, max = 0;
	int a[26] = { 0 };
	char c = 0;
	char s[1000] = { '\0' };
	scanf("%d", &n);
	for (i = 0; i < n; ++i){
		scanf("%s", s);
		for (j = 0; s[j] != '\0'; ++j){
			m = s[j] - 'a';
			++a[m];
			if (a[m] > max || (a[m] == max && s[j] < c)){
				c = s[j];
				max = a[m];
			}
		}// for 2
		printf("%c %d\n", c, max);
		memset(s, 0, sizeof(s));
		memset(a, 0, sizeof(a));
		max = 0;
	}// for 1
	return 0;
}