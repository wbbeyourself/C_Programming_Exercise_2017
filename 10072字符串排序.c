#include<stdio.h>
#include<string.h>

int main(){
	char s[35][25] = { { 0 } }, t[25] = {0};
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; ++i){
		scanf("%s", s[i]);
	}



	for (j = 0; j < n - 1; j++){
		for (i = 0; i < n - 1 - j; i++)
		{
			if (strcmp(s[i], s[i+1]) > 0)
			{
				strcpy(t, s[i]);
				strcpy(s[i], s[i+1]);
				strcpy(s[i + 1], t);
			}
		}//for2
	}//for1

	for (i = 0; i < n; ++i){
		printf("%s\n", s[i]);
	}

	return 0;
}