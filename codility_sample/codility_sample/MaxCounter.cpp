#pragma once
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int N, vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	vector<int> myVec(N, 0);
	int M = A.size();
	int max = myVec[0];
	for (int i = 0; i < M; i++)
	{
		if (A[i] >= 1 && A[i] <= N)
		{
			myVec[A[i]-1]++;
		}
		if (A[i] == N + 1)
		{
			for (int i = 0; i < N; i++)
			{
				if (myVec[i] > max)
				{
					max = myVec[i];
				}
			}

			for (int i = 0; i < N; i++)
			{
				myVec[i] = max;
			}
		}
	}
	return myVec;
}
