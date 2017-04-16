#pragma once
#include <vector>
using namespace std;

int solution(vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();
	long long sumInit = 0;
	long long sumAfter = 0;

	for (int i = 0; i < N; i++)
	{
		sumInit += A[i];
	}

	long long minValue = (abs)(sumAfter - sumInit);
	for (int i = 1; i < N; i++)
	{
		sumAfter += A[i-1];
		sumInit -= A[i-1];
		if ((abs)(sumAfter - sumInit)<minValue)
		minValue = (abs)(sumAfter - sumInit);
	}
	return minValue;
}