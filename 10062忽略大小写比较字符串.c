#include<stdio.h>
#include<string.h>

void to_lower(char* s){
	int i=0;
	while (s[i] != '\0'){
		if ('A' <= s[i] && s[i] <= 'Z'){
			s[i] = 'a' + (s[i] - 'A');
		}
		++i;
	}
}

int main(){
	char s1[100] = { '\0' };
	char s2[100] = { '\0' };
	int cmp;
	gets(s1);
	gets(s2);
	to_lower(s1);
	to_lower(s2);
	cmp = strcmp(s1, s2);
	if (cmp > 0){
		printf(">");
	}
	else if (cmp < 0){
		printf("<");
	}
	else{
		printf("=");
	}
	return 0;
}