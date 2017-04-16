int solution(int X, int Y, int D) {
	// write your code in C++14 (g++ 6.2.0)
	int jumpTimes = 0;
	int diff = Y-X;
	int N = diff / D;
	int mol = diff%D;
	if (mol == 0)
	{
		return N;
	}
	else
	{
		return N + 1;
	}
}