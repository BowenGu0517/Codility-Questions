#pragma once
#include <vector>
using namespace std;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
	// write your code in C++14 (g++ 6.2.0)
	int M = P.size();
	int N = S.size();
	vector<int> VecA(N, 0);
	vector<int> VecC(N, 0);
	vector<int> VecG(N, 0);
	vector<int> result(M, 0);

	for (int i=0;i<N;i++)
	{
		if (i == 0)
		{
			VecA[i] = (S[i] == 'A' ? 1 : 0);
			VecC[i] = (S[i] == 'C' ? 1 : 0);
			VecG[i] = (S[i] == 'G' ? 1 : 0);
		}
		else
		{
			VecA[i] = VecA[i - 1] + (S[i] == 'A' ? 1 : 0);
			VecC[i] = VecC[i - 1] + (S[i] == 'C' ? 1 : 0);
			VecG[i] = VecG[i - 1] + (S[i] == 'G' ? 1 : 0);
		}
	}

	for (int i = 0; i < M; i++)
	{
		if (P[i] > 0)
		{
			if (VecA[Q[i]] - VecA[P[i] - 1] > 0)
			{
				result[i] = 1;
			}
			else if (VecC[Q[i]] - VecC[P[i] - 1] > 0)
			{
				result[i] = 2;
			}
			else if (VecG[Q[i]] - VecG[P[i] - 1] > 0)
			{
				result[i] = 3;
			}
			else
			{
				result[i] = 4;
			}
		}
		else
		{
			if (VecA[Q[i]]>0)
			{
				result[i] = 1;
			}
			else if (VecC[Q[i]]>0)
			{
				result[i] = 2;
			}
			else if (VecG[Q[i]]>0)
			{
				result[i] = 3;
			}
			else
			{
				result[i] = 4;
			}
		}
	}
	return result;
}