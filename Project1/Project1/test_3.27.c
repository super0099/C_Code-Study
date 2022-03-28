#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//函数的认识,C函数库
//int main() {
//	//strcpy(ch,"杨雄茗") 字符串拷贝函数
//	//strlen(char *) 字符串长度
//	//memset(void * ,value,index),修改指定的值,void * 是指需要被修改的值,value 是修改的值,index位置索引
//	//char ch[] = "aaaa";	
//	//strcpy(ch,"杨雄茗");//
//	//int d = strlen(ch);
//	//memset(ch,"*",1);
//	//printf("%s\n", ch);
//	char ch[] = "aaaaaa";
//	memset(ch,"c",1);
//	printf("%s\n", ch);
//	return 0;
//}
//int is_prin(int n) {
//	for (int j = 2; j < n; j++) {
//		if (n%j ==0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//int main() {
//	for (int i = 100; i < 200;i++) {
//		if (is_prin(i)==1) {
//			printf("%d\n", i);
//		}		
//	}
//	return 0;
//}



//如果用int arr[]进行接收那么其实它不是一个数组,它是一个指针,所以无法在函数方法内求一个数组的长度
//除非是在函数内部的数组
//int text(int arr[],int k,int length) {	
//	int left = 0;//二分查找法作用获取到初始值
//	while (left <= length)//循环判断初始值是否大于结束值,如果大于并且没有匹配到那说明该值不存在
//	{
//		int min = (left + length) / 2;//获取到数组的中级值
//		if (arr[min]<k) {//查找值大于中间值说明值在右边.
//			left = min + 1;//如果值在右边那么初始值等于中间值加一,因为中间值已经比对过了
//		}
//		else if(arr[min]>k)
//		{
//			length = min - 1;//如果值在左边那么结束值等于中间值减一,因为中间值已经比对过了
//		}
//		else
//		{
//			//还有一种情况,既然不大于,也不小于,那么只有等于
//			return min;
//		}		
//	}
//	return -1;
//}
//二分查找法,适用于有序数组
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int length = sizeof(arr) / sizeof(arr[0]);//因为arr是个指针,那么指针大小在32位机器为4,在64位机器是8
//	// 当前传递过去的不是一个数组,而是数组首位数字的地址
//	int te = text(arr,k,length);
//	if (te == -1) {
//		printf("没找到");
//	}
//	else
//	{
//		printf("%d\n", te);
//	}
//	return 0;
//}

//
