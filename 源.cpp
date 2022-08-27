#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
int main()
{	//printf函数用法
	int a = 1234;
	int b = 123;
	int c = 12;
	printf("%d%d%d\n",a,b,c);//数字连在一起在屏幕上显示，不美观，可以使用格式控制符控制输出形式，使结果美观
	//printf()中完整的格式控制符格式是：%[flag][width][.precision]type
	//"[]"表示可以不写，以默认的形式输出，但"[]"就是起调节格式作用的。
	//width 表示最小输出宽度，也就是至少占用几个字符的位置，若宽度大于指定宽度，则按照字符宽度输出
	printf("%-5d%-5d%-5d\n",a,b,c );//宽度前面加"-"表示左对齐，不加表示默认右对齐
	//.precision表示小数点后位数，若小数位数大于指定的位数，则四舍五入；若小数位数小于指定位数，则补足"0"
	double d = 2.3333;
	printf("%.6lf\n", d);
	printf("%.2lf",d);
	//scanf函数用法-输入函数，与printf相反
	int a = 1;
	scanf("%d",&a);//&为取地址符，这个函数的意思是找到变量地址，把输入的值替换给原来的值
	return 0;
}