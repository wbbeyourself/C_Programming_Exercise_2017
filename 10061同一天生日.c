#include<stdio.h>

struct Student{
	char name[100];
	int m, d;
	int m_d;
}S[200];

int main(){
	int n;
	int i, j, la, lb, temp;
	int link[200] = {0};
	scanf("%d", &n);
	for (i = 0; i < n; ++i){
		scanf("%s%d%d", S[i].name, &S[i].m, &S[i].d);
		S[i].m_d = S[i].m * 100 + S[i].d;
		link[i] = i;
	}

	// 软排序 使用冒泡排序 --- 稳定的排序算法
	for (j = 0; j < n - 1; j++){
		for (i = 0; i < n - 1 - j; i++)
		{
			la = link[i];
			lb = link[i + 1];
			if (S[la].m_d > S[lb].m_d)
			{
				temp = link[i];
				link[i] = link[i + 1];
				link[i + 1] = temp;
			}//if
		}// for 2
	}// for 1

	for (i = 0; i < n; ++i){
		la = link[i-1];
		lb = link[i];
		if (i == 0){
			printf("%d %d %s", S[lb].m, S[lb].d, S[lb].name);
		}
		else if (S[la].m_d != S[lb].m_d){
			printf("\n%d %d %s", S[lb].m, S[lb].d, S[lb].name);
		}
		else{
			printf(" %s", S[lb].name);
		}
	}
	printf("\n");
	return 0;
}