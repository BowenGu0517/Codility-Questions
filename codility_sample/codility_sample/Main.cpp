#include <iostream>
#include <vector>
using namespace std;

int main()
{
	return 0;
}


int solution(vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();
	long long sum = 0;
	long long sub = 0;

	for (int i = 0; i < N; i++)
	{
		sum += A[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (i == 0)
		{
			sum -= A[i];
			if (sub == sum)
			{
				return i;
			}
		}
		sum -= A[i];
		sub += A[i - 1];
		if (sum == sub)
		{
			return i;
		}
	}
	return -1;
}


