#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
/*指针*/
//int main() {
//	//1.指针是什么:指针是指向内存空间的地址
//	//2.指针类型的意义:1.能够限制允许操作多少个字节,int(4),char(1),double(8).2.能够解引用操作;	
//	int a = 0x11223344;
//	int* pa = &a;//int* 是存放地址的,&a获取地址
//	char* pc = &a;//char* 是存放地址的,&a获取地址
//	//指针大小,在32位地址线的电脑上指针大小为4个字节,在64位地址线的电脑上指针大小为8个字节
//	//既然都是一样的字节为什么还需要区分字节呢,因为每个类型的指针塔所操作的大小不一样,int类型只能操作4个字节,
//	//而char只能操作一个字节,这就是为什么徐亚需要区分指针类型
//	*pa = 0;//int类型操作4个字节,所以结果等于0;	
//	*pc = 0;//char类型操作一个字节
//	return 0;
//}


//int* test() {
//	int a = 10;
//	return &a;
//}
///*野指针*/
//int main() {
//	//1.随机野指针
//	//int *p;//局部指针变量被初始化为随机值
//	////2.指针溢出
//	//int a[10] = {0};
//	//int* b = a;
//	////如果不控制i < 10和数组长度相等,那么指针就会溢出
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	*b++= 1;
//	//}
//	//空指针
//	int* a = test();//因为方法内部的变量a,随着代码执行完成后立刻被系统回收虽然有返回地址,但是这个地址已经不属于&a了,所以无法修改
//
//	printf("%d\n", *a);
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* a = arr;//获取第一个元素地址
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d,", *a);
//		a++;
//		printf("%p\n", a);
//	}
//}

//int main() {
//	int arr[10] = { 0 };
//	int* a = arr;//获取第一个元素地址
//	//printf("%p", a);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", *(a + i));
//		*(a+i) = 1;
//		//printf("%p\n", &a + i);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d,", arr[i]);
//	}
//}

///*指针的运算*/
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", &arr[0] - &arr[9]);//指针减去指针得出中间的元素个数
//	return 0;
//}

/*指针循环*/
//#define N_VALUES 5
//int main() {
//	int a = 20;
//	int* b = &a;
//	printf("%p\n", b);
//	printf("%p", &a);
//	int values[N_VALUES];
//	int *vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{		
//		*vp++ = 0;
//		printf("%p\n", vp);
//	}
//}

/*数组指针*/
//int main() {
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//直接打印数组地址是,是获取数组第一个元素的位置
//	printf("%p\n", arr+1);//加一后得到的是第二个数组元素的地址
//
//	printf("%p\n", &arr[0]);//取第一个元素的位置
//	printf("%p\n", &arr[0]+1);//加一后得到的是第二个数组元素的地址
//
//	printf("%p\n", &arr);//整个数组元素的地址
//	printf("%p\n", &arr+1);//跳过整个元素的地址,一个跳过40个字节
//	//&arr,&数组名-数组名不是首元素地址,而是整个数组的地址;
//	//sizeof(arr),sizeof(数组名),取出的是整个数组的大小,单位为字节;
//	return 0;
//}

/*访问指针数组*/
//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;//p是数组首元素的地址
//	*p = 10;
//	*(p + 1) = 20;
//	printf("%d\n", *(p + 1));
//	printf("%d\n", *p);
//	return 0;
//}

/*二级指针*/
//int main() {
//	int a = 20;
//	int* pa = &a;//一级指针
//	int** ppa = &pa;//二级指针
//}

/*指针数组*/
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	//如何把整形的指针存放到数组中呢
//	int* arr[3] = { pa,pb,pc };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%p\n", arr[i]);
//	}
//	return 0;
//}

/*练习题*/
//输入一个数打印出1直到这个数的乘法表
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	for (int i = 1; i < a+1; i++)
//	{
//		for (int j = i; j < a+1; j++)
//		{
//			printf("%d ", i * j);
//		}
//		printf("\n");
//	}
//}
//

//将字符串逆序,不使用库函数
//int main() {
//	char arr[] = "abcdefg";
//	int left = 0;
//	int right = strlen(arr)-1;
//	while (left<right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//}


//递归实现字符串逆序
//int string_lenght(char* arr) {
//	int str = 0;
//	while (arr[str]!='\0')
//	{
//		str++;
//	}
//	return str;
//}
//void reverse_string(char* arr) {
//	char tmp = arr[0];
//	int len = string_lenght(arr);
//	arr[0] = arr[len - 1];
//	//\0的目的是缩小数组长度
//	arr[len - 1] = '\0';
//	//指针加一就是缩小一位
//	if (string_lenght(arr + 1) >= 2)
//		reverse_string(arr+1);
//	//把\0代替为开始值,目的是回复数组长度
//	arr[len - 1] = tmp;
//}
//int main() {
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//练习题输入一个数,然后算出他们的位数相加之和
//int DigitSum(int a) {
//	if (a>9)
//	{
//		return DigitSum(a/10) + a % 10;
//	}
//	else
//	{
//		return a;
//	}
//}
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	int ret = DigitSum(a);
//	printf("%d", ret);
//}


