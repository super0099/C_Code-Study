#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//��������ʶ,C������
//int main() {
//	//strcpy(ch,"������") �ַ�����������
//	//strlen(char *) �ַ�������
//	//memset(void * ,value,index),�޸�ָ����ֵ,void * ��ָ��Ҫ���޸ĵ�ֵ,value ���޸ĵ�ֵ,indexλ������
//	//char ch[] = "aaaa";	
//	//strcpy(ch,"������");//
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



//�����int arr[]���н�����ô��ʵ������һ������,����һ��ָ��,�����޷��ں�����������һ������ĳ���
//�������ں����ڲ�������
//int text(int arr[],int k,int length) {	
//	int left = 0;//���ֲ��ҷ����û�ȡ����ʼֵ
//	while (left <= length)//ѭ���жϳ�ʼֵ�Ƿ���ڽ���ֵ,������ڲ���û��ƥ�䵽��˵����ֵ������
//	{
//		int min = (left + length) / 2;//��ȡ��������м�ֵ
//		if (arr[min]<k) {//����ֵ�����м�ֵ˵��ֵ���ұ�.
//			left = min + 1;//���ֵ���ұ���ô��ʼֵ�����м�ֵ��һ,��Ϊ�м�ֵ�Ѿ��ȶԹ���
//		}
//		else if(arr[min]>k)
//		{
//			length = min - 1;//���ֵ�������ô����ֵ�����м�ֵ��һ,��Ϊ�м�ֵ�Ѿ��ȶԹ���
//		}
//		else
//		{
//			//����һ�����,��Ȼ������,Ҳ��С��,��ôֻ�е���
//			return min;
//		}		
//	}
//	return -1;
//}
/*���ֲ��ҷ�,��������������*/
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int length = sizeof(arr) / sizeof(arr[0]);//��Ϊarr�Ǹ�ָ��,��ôָ���С��32λ����Ϊ4,��64λ������8
//	// ��ǰ���ݹ�ȥ�Ĳ���һ������,����������λ���ֵĵ�ַ
//	int te = text(arr,k,length);
//	if (te == -1) {
//		printf("û�ҵ�");
//	}
//	else
//	{
//		printf("%d\n", te);
//	}
//	return 0;
//}

/*��&ȡ��ַ�ı������к�������*/
//������mun�����3
//C������������̱��,����ͨ������Ҫʲô����ʲô,��������,���Ե��������������������
//ǰʱ���Բ����������ɵ���,�����ں���Ļ���Ҫ��Ҫ�����ú���,��ʹ�÷��򱨴�˵����δ����
//void Add(int* p) {
//	(*p)++;
//}
//void Add(int* p);//����������������Ҫ����
//int main() {
//	int mun = 0;
//	Add(&mun);//&��ַ
//	printf("%d\n", mun);
//	Add(&mun);
//	printf("%d\n", mun);
//	Add(&mun);
//	printf("%d\n", mun);
//	return 0;
//}
//
//void Add(int* p) {//ָ��*
//	(*p)++;
//}


/*����Ƕ�׵���*/
//����������̵�ԭ��,�Ѻ�����������������ǰ��
//void new_line() {
//	printf("���!\n");
//}
//void three_line() {
//	for (int i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main() {
//	three_line();
//	return 0;
//}

/*��ʽ����*/
//�Ѻ����Ļص���Ϊ������ȥ������һ������
//int new_line(int x,int y) {
//	int a = x*y;
//	return a;
//}
//void text_line(int p) {
//	printf("%d\n", p);
//}
//int main() {
//	int a = 3;
//	int b = 2;
//	text_line(new_line(a, b));
//	return 0;
//}

/*ͷ�ļ�������*/
//ͷ�ļ��������ǰѷ���������ͷ�ļ���,Ȼ��ͨ��#include���ɵ���ͷ�ļ���Ӧ�ĺ���
//ϵͳ�ķ�������<>,�Զ������Ҫ""
//#include "add.h"
//int main() {
//	printf("%d\n", Add(20, 3));
//	return 0;
//}

/*�ݹ�����һ,��һ���Ӵ�Ĵ���򻯳�һ��С��ģ��,�ݹ����Ҫ˼����ʽ����:���»�С*/
//��ӡһ����1234,�����ֱ����1,2,3,4
//void print(int n) {
//	if (n > 9) {
//		print(n / 10);//��������,�����ĵ��ÿ�ʼ��ӡ
//	}
//	printf("%d\n", n%10);
//}
//int main() {
//	unsigned int num = 0;//�޷�������
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

/*�ݹ����Ӷ�*/
//��ʹ��sizeof()����ַ�������
//int my_strlen(char* arr) {
//	//''��""���������,
//	if (*arr != '\0') {
//		printf("%d\n", arr);//
//		printf("%d\n", *arr);//ָ��λ��,��ASCII���ʾ
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main() {
//	char arr[] = "yangxiongming";
//	int len = my_strlen(arr);//arr�Ǹ�����,���鴫��,����ȥ�Ĳ�����������,���ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n", len);
//	return 0;
//}

/*�ݹ�������,��n�Ľ׳�*/
//ѭ������
//int Fac1(int n) {
//	int i = 0;
//	int ret = n;
//	for (i = 1; i < ret;i++) {//5,10,30,120
//		n *= i;
//	}
//	return n;
//}
//�ݹ�����
//int Fac(int n) {
//	if (n>1) {
//		return n*Fac(n-1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main() {
//	int ret = 0;
//	scanf("%d", &ret);
//	//int count = Fac(ret);
//	int count1 = Fac1(ret);
//	//printf("%d\n", count);
//	printf("%d\n", count1);
//	return 0;
//}

/*�ݹ�������,��쳲���������*/
//����һ
//int fs(int n,int m,int k) {
//	printf("%d,%d,", n, m);
//	if (k<20) {
//		k++;
//		fs((n + m),m+ (n + m),k);
//	}	
//}
//���Ӷ�,������n��쳲�������
//int fs(int n) {
//	if (n<=2) {
//		return 1;
//	}
//	else
//	{
//		return fs(n - 1) + fs(n -2);
//	}
//}
//int main() {
//	int left = 0;
//	//int right = 1;
//	//int ret = fs(left,right,1);
//	scanf("%d", &left);
//	int ret = fs(left);
//	printf("%d,", ret);
//	return 0;
//}

/*����ѭ�������n��쳲�������*/
//int fs(int n) {
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n > 2) {
//		for (int i = 2; i < n; i++)
//		{
//			c = a + b;//�����������ڵ�һ�����ϵڶ���
//			a = b;
//			b = c;
//		}
//	}
//	else
//	{
//		c = 1;
//	}	
//	return c;
//}
//int main() {
//	int a = 0;
//	scanf("%d",&a);
//	int b = fs(a);	
//	printf("%d", b);
//	return 0;
//}


/*������ʶ*/
int main() {
	//�ַ�����
	char arr1[] = "abcd";//����ɳ�ʼ������
	char arr2[5] = "abcde";//δ��ɳ�ʼ������
	char arr3[] = { 'a','b','c' };//����ɳ�ʼ������
	char arr4[] = { 'a','b','c',98 };//���е�98�ᱻת��ASCII�����Ӧ��ֵ
	//���ǵĳ��Ⱥʹ�С������ͬ
	//δ���������С
	printf("%d,", sizeof(arr1));//�鿴�ַ������С,�����ַ����Ľ�����־��\0;\0Ҳռ��һ���ַ���������������ʾ
	printf("%d", strlen(arr1));//�鿴�ַ����鳤��,����\0�ǽ�����־ ,��������������ʾ,���Գ��Ⱦ�������ʼ���ַ���ʱ�ĸ���
	//�����������С
	printf("\n");
	printf("%d,", sizeof(arr2));//��Ϊ��ʼ��ʱΪ5���ַ���С,����Ϊ�ַ�����5��,�������Ĵ�С���ð����������
	printf("%d", strlen(arr2));//��Ϊ�ַ������Ƚ���\0,����Ϊ��ǰ�ַ���û��\0,�������ĳ���Ϊ���ֵ
	//�ѳ�ʼ������,������һ��
	printf("\n");
	printf("%d,", sizeof(arr3));
	printf("%d", strlen(arr3));
}



