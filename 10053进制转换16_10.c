#include<stdio.h>
#include<string.h>
#include<math.h>

int hex_to_decimal(char hex[]){
	int len = strlen(hex);
	int decimal = 0, i, num;
	for (i = 0; i < len; ++i){
		if ('0' <= hex[i] && hex[i] <= '9'){
			num = hex[i] - '0';
		}
		else
		{
			num = hex[i] - 'a' + 10;
		}
		decimal += (num * (int)(pow(16.0, len - 1 - i)));
	}
	return decimal;
}

int main(){
	char hex1[100] = { '\0' };
	char hex2[100] = { '\0' };
	scanf("%s%s", hex1, hex2);
	printf("%d\n", hex_to_decimal(hex1) + hex_to_decimal(hex2));
	return 0;
}