#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>
/*c++面试题1*/
//1.不创建第三个变量时交换两个变量
//异或可以使两个值进行交换,可以不创建第三个变量
//int main() {
//	int a = 100;//011 
//	int b = 1001;//101
//	//异或(二进制),相同为0,不同为1;
//	a = a ^ b;//011和101 异或得出110=6
//	b = a ^ b;//110和101 异或得出011=3
//	a = a ^ b;//110和011 异或得出101=5
//	printf("异或后的a = %d,b = %d", a,b);
//	return 0;
//}

/*c++面试题2*/
//给定一个非空整形数组,找出只出现过一次的数字
//int main() {
//	int arr[] = { 1,2,3,4,5,4,3,2,1};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	//循环法
//	/*for (int i = 0; i < size; i++)
//	{
//		int count = 0;
//		for (int j = 0; j < size; j++)
//		{
//			if (arr[i] == arr[j]) {
//				count++;
//			}
//		}
//		if (count ==1)
//		{
//			printf("%d", arr[i]);
//			break;
//		}
//	}*/
//	//异或法,是对两组二进制数组的相加但是不进值,也可以这样说相同取0,相异取1,如果两个数字相同异或得0;
//	//这样的话如果在成对的数字中找出单身狗,那就一直异或就行了
//	for (int i = 0; i < size; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("单身狗是%d", ret);
//}

/*c语言关机*/
//int main() {
//	char input[20] = { 0 };
//	//关机
//	//system专门执行系统命令的
//	again:
//	system("shutdown -s -t 60");//关机
//	printf("请注意电脑将在一分钟后关机,如果输入: 小柒我是猪 ,即可取消关机\n");
//	scanf("%s", &input);
//	if (strcmp(input,"小柒我是猪")==0) {
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

/*c语言操作符*/
//int main() {
//	int a = 5 / 2;//除法,商2,余1,取商。如果两个数都是用整形，那么得出来的是整形，如果是double那么除出来有小数；
//	printf("除法5/2 = %d\n", a);
//	int b = 5 % 2;//取模,商2,余1,取余。
//	printf("取模5%2 = %d\n", b);
//	int c = 16;//位移,算术位移,即右边去,左边补符号位,逻辑位移,即右边去,左边补0,左移即相反;
//	int d = c >> 2;
//	printf("按位移 = %d\n", d);	
//}

/*c语言操作符,&,|,^*/
//int main() {
//	int a = 3;
//	int b = 5;
//	int c = 3 & 5;//相同即1,相异即0;
//	printf("按位与c = %d\n", c);
//	int e = 3 | 5;//只有一个是1即是1,两个是0,则是0;
//	printf("按位或e = %d\n", e);
//	int d = 3 ^ 5;//异或,相同为0,相异为1;
//	printf("异或e = %d\n", d);
//	return 0;
//}

/*c语言操作符~*/

/*练习题*/
//在计算num中的补码为1的个数
int main() {
	int num = 0;
	int count = 0;
	scanf("%d", &num);//利用先右移位,在&异于
	for (int i = 0; i < 32; i++) {
		if (1 == ((num >> i) & 1)) {
			count++;
		}
	}
	printf("%d", count);
}