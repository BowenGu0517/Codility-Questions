#pragma once
#include <vector>
using namespace std;

int solution(int K, vector<int> &A) {
	int N(A.size()), count(0), sum(0), i(0);
	while (i < N)
	{
		if (sum + A[i] >= K)
		{
			++count;
			sum = 0;
		}
		else
			sum += A[i];
		++i;
	}
	return count;
}