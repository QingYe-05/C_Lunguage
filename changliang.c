#define _CRT_SECURE_NO_WARNINGS
//1.�������
//2.const���εĳ����� --> ����ǰ���const֮��Ͳ���ֱ���޸���const int a�����Ǳ�����������ֱ���޸ģ��г���������
//3.define�����ʶ������
//4.ö�ٳ���

#include<stdio.h>
//int main() {
//	const int a = 1;//�������const���������ֱ�ӱ���
//	a = 2;
//	printf("%d\n",a);
//
//	//���֤��const���ε�n�Ǳ���
//	const int n = 10;
//	int arr[n] = { 0 };//����������Ҫ����һ������������˵��const���ε���һ��������
//
//
//
//	return 0;
//}

//#define MAX 100
//#define STR "abcde"
//int main() {
//
//	printf("%d\n",MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	return 0;
//}

//ö�ٳ���
//enum Color
//{	//��ԭɫ
//	RED,
//	GREEN,
//	BLUE
//};
//enum Sex
//{	//�Ա�
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main() {
//	//��ԭɫ
//	// Red Blue Green
//	int num = 10;
//	enum Color c = RED;
//	RED = 20;//err
//	MALE = 10//err
//
//	return 0;
//}

//int main() {
//
//	char ch = 'w';
//	"abcde";//C������û���ַ������ͣ���˫������������һ���ַ������ַ���
//	char arr1[10] = "abcdef";//7,�����һ��'\0'������ʶ
//	char arr2[] = { 'a','b','c','d','e','f','\0' };//6
//
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//	//�����ַ����ĳ����Զ������ռ�
//	return 0;
//}


//ת���ַ�
//
//%d - ��ӡ����
//%c - ��ӡ�ַ�
//%s - ��ӡ�ַ���
//%f - ��ӡfloat��������
//%lf - ��ӡdouble��������
//%zu - ��ӡsizeof�ķ���ֵ

int main() {

	printf("%s\n","abcdef");
	printf("%c\n",'\'');//���'
	printf("abcd\\0efg\n");//���abcd\0efg
	printf("c:\test\test.c\n");
	printf("c:\\test\\test.c\n");
	printf("\a\a\a\a\a\a");//����
	printf("%d\n", strlen("c:\test\628\test.c"));//14
	return 0;
}

// \ddd��ʾ1-3���˽�����
// \xdd��ʾ2��ʮ����������