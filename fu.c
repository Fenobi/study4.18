#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//int my_strlen1(const char* str)//��ͨ��
//{
//	int count = 0;
//	assert(str);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int my_strlen2(char* str)//�ݹ��
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return  my_strlen2(++str) + 1;//ע������Ҫ���Լ�
//	}
//}
//
//int my_strlen3(char* str)//ָ��-ָ���
//{
//	char* a = str;
//	while (*str)
//	{
//		str++;
//	}
//	char* b = str;
//	return b - a;
//}
//
//int main()
//{
//	char str[] = "abc";
////	char str1[] = { 'a','b','c','\0','d'};
//	int a = 0;
//	int n = my_strlen3(str);
//	//n = strlen(str1);
//	printf("%d\n", n);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int size = sizeof(arr[0]);
//	qsort(arr, num, size, cmp_int);
//	for (int i = 0; i < num - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_age(const void* e1, const void* e2)//�����Ҫ�����ֱ�ӽ�e1��e2����
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int sort_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int main()
//{
//	struct Stu s[] = { {"С��",20},{"����",19},{"����",22},{"�Ӹ�",21} };
//	int num = sizeof(s) / sizeof(s[0]);
//	//������������
////	qsort(s, num, sizeof(s[0]), sort_age);
//	//������������
//	qsort(s, num, sizeof(s[0]), sort_name);
//
//	for (int i = 0; i < num; i++)
//	{
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void swap(char* e1, char* e2, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		char tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		e1++;
//		e2++;
//	}
//}
//
//void my_qsort(void* arr, int n, int sz, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (cmp((char*)arr + (j * sz), (char*)arr + (j + 1) * sz) > 0)//�������ַ�ָ����Ϊ�˸���ͨ�ã�����Բ�ͬ���������Ͷ����Խ�ÿ������׼ȷʶ��
//			{
//				swap((char*)arr + (sz * j), (char*)arr + (j + 1) * sz, sz);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,5,7,2,3,11,4,8 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, n, 4, cmp);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	if ((strlen("abc") - strlen("abcdef")) > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}

//char* my_strcat(char* str1, const char* str2)
//{
//	char* ret = str1;
//	assert(str1 && str2);
//	//1���ҵ�Ŀ���ַ�����\0
//	while (*str1)
//	{
//		str1++;
//	}
//	//2��׷��Դ�ַ���������\0
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return ret;//����Ŀ��ռ����ʼ��ַ
//
//	/*while (*str2)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = '\0';*/
//}
//
//int main()
//{
//	char str1[20] = "abc";
//	char str2[] = "def";
//	//my_strcat(str1, str2);
//	//my_strcat(str1, str1);
//	//printf("%s\n", str1);
//	printf("%s\n", my_strcat(str1, str2));
//	return 0;
//}

int my_strcmp(const char* str1, const char* str2)
{
	int a = 0;
	while (*str1++ == *str2++)
	{
		a++;
	}
	if (*str1 != *str2)
	{
		return 0;
	}
	return a;
}

int main()
{
	char str1[] = "abc";
	char str2[] = "abc";
	printf("%d\n", my_strcmp(str1, str2));
	return 0;
}
