#pragma once
#include <vector>

using namespace std;

int solution(int A, int B, int K) {
	// write your code in C++14 (g++ 6.2.0)
	int i = B - A;
	if (A == 0)
	{
		return i / K + 1;
	}
	else
	{
		int intPart = i / K;
		int resPart = i - K*intPart;
		if (A%K == 0)
		{
			return intPart + 1;
		}
		else
		{
			if ((A + resPart) / K == A / K)
			{
				return intPart;
			}
			else
			{
				return intPart + 1;
			}
		}
	}
}