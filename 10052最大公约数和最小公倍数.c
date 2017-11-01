#include<stdio.h>

// 最大公约数
int gcd(int a, int b){
	return b ? gcd(b, a%b) : a;
}

// 最小公倍数
int lcm(int a, int b){
	return (a * b) / gcd(a, b);  // 如果a, b特别大， 这种写法会造成溢出
}

int main(){
	int a1, b1, a2, b2;
	scanf("%d%d%d%d", &a1, &b1, &a2, &b2);
	printf("%d\n%d\n", gcd(a1, b1) + gcd(a2, b2), lcm(a1, b1) + lcm(a2, b2));
	return 0;
}