#include<stdio.h> 
#include<math.h>

void float2char(char* str, float f, int len, int prec) //len浮点长度， prec小数点精度 
{
	char i, n;
	int seg; //分别赋浮点的整、小数部分 
	//整数部分转字符 
	n = len - prec - 1;
	seg = (int)f; 
	for(i = 0; i < n; i++)
	{
		str[i] = '0' + seg / pow(10, n - i - 1);
		seg %= (int)pow(10, n - i - 1); 
	} 
	str[i] = '.';
	i++;
	//小数部分转字符
	seg = (f - (int)f) * pow(10, prec);
	for(; i < len; i++)
	{
		str[i] = '0' + seg / pow(10, len - i - 1);
		seg %= (int)pow(10, len - i - 1); 
	}
}

int main()
{
	char string[5];
	float2char(string, 12.34, 5, 2);
	printf("%s", string);
	return 0;
 } 
