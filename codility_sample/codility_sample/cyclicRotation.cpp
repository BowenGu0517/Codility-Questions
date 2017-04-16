#pragma once
#include <vector>
using namespace std;

vector<int> solution(vector<int> &A, int K) {
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();
	vector<int> rotationArr(N);
	for (int i = 0; i < N; i++)
	{
		rotationArr[(i + K) % N] = A[i];
	}
	return rotationArr;
}