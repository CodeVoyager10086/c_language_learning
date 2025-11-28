//在newc++file.cpp文件里设置(用Everything软件找到该文件，复制一份到桌面，加入配置后再复制回原文件夹进行替换)
// 防止VS编译器报错scanf，配置以后，新建的c文件都会有这个设置
#define _CRT_SECURE_NO_WARNINGS 1
//引入.h头文件standard input output header file
#include <stdio.h>
//int 是关键字，表示main函数返回一个整数类型的值
//main函数也叫主函数，是程序的入口，一个C程序必须有且仅有一个main函数
int main()
{
	//printf是一个库函数，功能是在屏幕上打印字符串
	//\n是转义字符，表示换行
	printf("Hello C!\n");
	//%d是格式控制符，表示输出一个十进制整数
	int a = 0;
	scanf("%d", a);
	printf("%d", a);

	//ASCII码表
	// A是65
	// a是97
	// 0是48
	// 0-31是控制字符（无法打印在屏幕上观察）
	// \n是10，\t是9，127是删除字符
	printf("%c\n", 'b');
	printf("%c\n", 'b' - 32);
	printf("%c\n", 98);
	printf("%c\n", 98 - 32);
	printf("%c\n", 122);
	printf("%f\n", 1.2);
	printf("%lf", 1.2);

	//for循环
	int i = 0;
	for (i = 32; i <= 127; i++)
	{
		//\t是制表符，用于对齐
		printf("%c\t", i);
	}
	printf("\n");

	//数组可以存放一组数据
	//字符数组
	//字符串自动以'\0'结尾，\0是字符串的结束标志
	//[]里面的数值可以省略，编译器会自动计算
	char arr1[] = "abcdef";
	//字符数组必须以'\0'结尾
	char arr2[] = { 'a','b','c','d','e','f', '\0'};
	//打印的时候遇到\0自动停止，所以遇到想打印\和0要写成\\0
	printf("%s\n", arr1);
	printf("%s\n", arr2);

	//地址里的\要写成\\以免编译器误认为是转义字符
	printf("(are you ok\?\?)");//三字母词
	//	\123是三位八进制，\x21是两位16进制
	return 0;
}
//设置代码文件的编码格式为：UTF-8（在文件的高级保存选项）
// 学会写博客
// 学会建立代码仓库
// .c编译成.obj,再链接成.exe运行
//git clone在目标文件夹克隆网上代码仓库
// 先得拉取远程仓库
// add-commit-push
//2025.11.28