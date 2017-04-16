#pragma once;
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();
	sort(A.begin(), A.end());
	for (int i = 0; i < N-1; i++)
	{
		if (A[i + 1] - A[i] >= 2)
		{
			return A[i] + 1;
		}
	}
}