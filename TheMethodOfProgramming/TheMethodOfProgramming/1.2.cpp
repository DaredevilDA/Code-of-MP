#include "stdafx.h"
//using namespace std;
//
////�ַ����İ���
//int _tmain(int argc, _TCHAR* argv[])
//{
//	return 0;
//}
//
//
//
////������ѯ
//bool StringContain1(string &a, string &b)
//{
//	for (int i = 0; i < b.length(); ++i)
//	{
//		int j;
//		for (j = 0; (j < a.length()) && (a[j] != b[i]); ++j)
//			;
//		if (j >= a.length())
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//
////�������ѯ
//bool StringContain2(string &a, string &b)
//{
//	sort(a.begin(),a.end());
//	sort(b.begin(),b.end());
//	for (int pa = 0, pb = 0; pb < b.length();)
//	{
//		while ((pa < a.length()) && (a[pa] < b[pb]))
//		{
//			++pa;
//		}
//		if ((pa<a.length()) || (a[pa]>b[pb]))
//		{
//			return false;
//		}
//		++pb;
//	}
//	return true;
//}
//
//
////�������
//bool StringContain2(string &a, string &b)
//{
//	const int p[26] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};
//	int f = 1;
//	for (int i = 0; i < a.length(); ++i)
//	{
//		int x = p[a[i]-'A'];
//		if (f%x)//��Ϊ�Ǽ��b�е��ַ����Ƿ���a�У�����a���ظ����ַ��ҳ�һ��������
//		{
//			f *= x;
//		}
//	}
//	for (int i = 0; i < b.length(); ++i)
//	{
//		int x = p[b[i] - 'A'];
//		if (f%x)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//
//
////λ���㷨
//bool StringContain2(string &a, string &b)
//{
//	int hash = 0;
//	for (int i = 0; i < a.length(); ++i)
//	{
//		hash |= (1 << (a[i] - 'A'));
//	}
//	for (int i = 0; i < b.length(); ++i)
//	{
//		if ((hash&(1 << (b[i] - 'A'))) == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
