#include "stdafx.h"
using namespace std;

//字符串的旋转
//三步反转
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
	//若要左移动大于n位，那么于%n是等价的
	//m %= n;
	ReverseString(s, 0, n - 1);
	cout<<s<<endl;
	ReverseString(s, n, m );
	cout<<s<<endl;
	ReverseString(s, 0, m );
	cout<<s<<endl;
}


int _tmain(int argc, _TCHAR* argv[])
{
	char test[10]="abcdef";
	LeftRotateString(test,3,5);
	cout<<test<<endl;
	system("pause");
	return 0;
}






//蛮力移位--TS：O（mn） SS：O（1）
//void LeftShiftOne(char* s, int n)
//{
//	//保存第一个字符
//	char t = s[0];
//	for (int i = 0; i < n;i++)
//	{
//		s[i - 1] = s[i];
//	}
//	s[n - 1] = t;
//}
//
//void LeftRotateString(char* s, int n, int m)
//{
//	while (m--)
//	{
//		LeftShiftOne(s,n);
//	}
//}

