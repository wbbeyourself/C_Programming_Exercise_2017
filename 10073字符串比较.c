#include<stdio.h>
#include<string.h>

int stringcmp(char *str1, char *str2){
	int i, len1, len2, min;
	len1 = strlen(str1);
	len2 = strlen(str2);
	min = len1 < len2 ? len1 : len2;
	for (i = 0; i < min; ++i){
		if (str1[i] != str2[i]){
			return str1[i] - str2[i];
		}
	}
	return str1[min] - str2[min];
}

int main(){
	char s1[1000] = { 0 }, s2[1000] = { 0 };
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; ++i){
		scanf("%s%s", s1, s2);
		printf("%d\n", stringcmp(s1, s2));
		memset(s1, 0, sizeof(s1));
		memset(s2, 0, sizeof(s2));
	}
	return 0;
}