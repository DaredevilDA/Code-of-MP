#include "stdafx.h"
using namespace std;

//�ַ�������ת
int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}



//������λ--TS��O��mn�� SS��O��1��
void LeftShiftOne(char* s, int n)
{
	//�����һ���ַ�
	char t = s[0];
	for (int i = 0; i < n;i++)
	{
		s[i - 1] = s[i];
	}
	s[n - 1] = t;
}

void LeftRotateString(char* s, int n, int m)
{
	while (m--)
	{
		LeftShiftOne(s,n);
	}
}



//������ת
void ReverseString(char* s, int from, int to)
{
	while (from < to)
	{
		char t = s[from];
		s[from++] = s[to];
		s[to--] = t;
	}

}

void LeftRotateString(char* s, int n, int m)
{
	//��Ҫ���ƶ�����nλ����ô��%n�ǵȼ۵�
	m %= n;
	ReverseString(s, 0, m - 1);
	ReverseString(s, m, n - 1);
	ReverseString(s, 0, n - 1);
}
