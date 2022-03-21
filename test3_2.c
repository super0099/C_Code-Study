#define _CRT_SECURE_NO_WARNINGS 1//scanf是C语言标准的语言,scanf_s是vs编译器独自有的,这句代码的作用是不让他报这个错
int add(int x,int y) {
	int z = x + y;
	return z;
}