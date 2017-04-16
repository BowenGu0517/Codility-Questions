#pragma once
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();
	int count = 0;
	if (N == 0)
	{
		return count;
	}
	sort(A.begin(), A.end());

	count++;
	for (int i = 0; i < N-1; i++)
	{
		if (A[i] != A[i + 1])
		{
			count++;
		}
	}
	return count;
}