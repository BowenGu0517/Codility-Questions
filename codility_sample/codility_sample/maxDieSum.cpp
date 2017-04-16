#pragma once
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();
	vector<int> optimalVec(6, A[0]);
	for (int i = 1; i < N; i++)
	{
		int tempMax = 0;
		for (int j = 0; j < 6; j++)
		{
			if (optimalVec[j] > tempMax)
			{
				tempMax = optimalVec[j];
			}
		}
		
		optimalVec[i%6] = tempMax + A[i];
	}
	return optimalVec[(N - 1) % 6];
}