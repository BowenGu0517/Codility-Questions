#pragma once
#include <vector>
#include <algorithm>
using namespace std;

int solution(int X, vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	vector<int> Acopy = A;
	int N = A.size();
	sort(A.begin(), A.end());
	if (A[0] != 1 || A[N - 1] != X)
	{
		return -1;
	}
	for (int i = 0; i < N-1; i++)
	{
		if (A[i + 1] - A[i] >= 2)
		{
			return -1;
		}
	}
	for (int i = 0; i < N - 1; i++)
	{
		if (Acopy[i] == X)
		{
			return i;
		}
	}
}