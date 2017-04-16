#pragma once //wrong
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();
	int ans = 0;
	if (0 == N)
	{
		return ans;
	}

	int sumTotal = 0;

	for (int i = 0; i < N; i++)
	{
		if (A[i] < 0)
		{
			A[i] = -A[i];
		}
	}

	sort(A.begin(), A.end());

	for (int i = 0; i < N; i++)
	{
		sumTotal += A[i];
	}

	float midVal = (float)sumTotal / 2;
	int sumLeft = 0;
	for (int i = 0; i < N; i++)
	{
		if (sumLeft < midVal)
		{
			sumLeft += A[i];
		}
		if (sumLeft > midVal)
		{
			int noAddLast = sumLeft - A[i];
			int addLast = sumLeft;
			if ((midVal - noAddLast) < (addLast - midVal))
			{
				ans = sumTotal - noAddLast - noAddLast;
				break;
			}
			else
			{
				ans = addLast - (sumTotal - addLast);
				break;
			}
		}
	}
	return ans;
}