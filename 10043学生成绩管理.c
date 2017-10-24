#include<stdio.h>
# define N 3

struct Student{
	int snum;
	int math;
	int english;
	int cs;
	int total;
	char name[100];
}S[N];

int main(){
	int i, j, index;
	int total_a, total_b, t;
	double ave_math = 0.0, ave_eng = 0, ave_cs = 0;
	// ����������˳�������򣬲��ƶ��ṹ�壬ֻ�ƶ�����
	int sorted_index[N] = { 0 };
	for (i = 0; i < N; ++i){
		scanf("%d%s%d%d%d", &S[i].snum, &S[i].name, &S[i].math, &S[i].english, &S[i].cs);
		S[i].total = (S[i].math + S[i].english + S[i].cs);
		sorted_index[i] = i; // ������ʼ��
		ave_math += S[i].math;
		ave_eng += S[i].english;
		ave_cs += S[i].cs;
	}

	ave_math /= N;
	ave_eng /= N;
	ave_cs /= N;

	//���ܷ�����, ������
	for (i = 0; i<N; ++i){
		for (j = i; j<N; ++j){
			total_a = S[sorted_index[i]].total;
			total_b = S[sorted_index[j]].total;
			if (total_a < total_b){
				t = sorted_index[i];
				sorted_index[i] = sorted_index[j];
				sorted_index[j] = t;
			}
		}
	}

	// ���
	printf("NO   Name   Maths   English   Computer   Total\n");
	for (i = 0; i < N; ++i){
		index = sorted_index[i];
		printf("%d    %s    %d    %d    %d    %d\n",
			S[index].snum, S[index].name, S[index].math,
			S[index].english, S[index].cs, S[index].total);
	}
	printf("average of Maths:%.2lf\n", ave_math);
	printf("average of English:%.2lf\n", ave_eng);
	printf("average of Computer:%.2lf\n", ave_cs);
	return 0;
}