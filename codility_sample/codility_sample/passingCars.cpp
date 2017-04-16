#pragma once
#include <vector>
using namespace std;

int solution(vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();
	int countTotal = 0;
	int countTemp = 0;
	for (int i = N - 1; i >= 0; i--)
	{
		if (A[i] == 1)
		{
			countTemp++;
		}
		if (A[i] == 0)
		{
			countTotal += countTemp;
		}
		if (countTotal > 1000000000)
		{
			return -1;
		}
	}
	return countTotal;
}