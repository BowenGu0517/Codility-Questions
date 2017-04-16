#pragma once
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	//int N = A.size();
	//sort(A.begin(), A.end());
	//for (int i = 0; i < N; i++)
	//{
	//	if (A[i] != i + 1)
	//	{
	//		return i + 1;
	//	}
	//}
	int N = A.size();
	int sum = 0;
	int sumCorrect = 0;
	for (int i = 0; i < N; i++)
	{
		sum += A[i];
		sumCorrect += i + 1;
	}
	return sumCorrect + (N + 1) - sum;

}