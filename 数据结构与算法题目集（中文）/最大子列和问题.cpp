// 最大子列和问题.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#define N 100000
using namespace std;


int main()
{
	int K;
	int a[N];
	cin >> K;
	int i=0;
	int flag = 0;
	int max = 0;
	while (i < K) {
	cin >> a[i];
	if (a[i] > 0)
		flag = 1;
	++i;
	}
	a[i] = '/0';
	if (flag == 0)
		cout << 0;
	else
	{
		int p, q;
		for (p = 0; p < K; ++p)
		{
			int sum = 0;
			for (q = 0; q < K - p; ++q)
			{
				sum += a[p + q];
				if (sum > max)
					max = sum;
			}
		}
		cout << max;
	}
    return 0;
}

