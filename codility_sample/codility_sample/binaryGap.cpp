//----------------binary gap-------------------//
int solution(int N) {
	// write your code in C++14 (g++ 6.2.0)
	int Arr[32] = { 0 };
	int Arr1[32] = { 0 };
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		Arr[i] = (N >> i) & 1;
		if (1 == Arr[i])
		{
			Arr1[count] = i;
			count++;
		}
	}

	if (count == 0 || count == 1)
	{
		return 0;
	}

	int tempGap = Arr1[1] - Arr1[0] - 1;
	for (int i = 0; i < count - 1; i++)
	{
		if ((Arr1[i + 1] - Arr1[i] - 1) > tempGap)
		{
			tempGap = Arr1[i + 1] - Arr1[i] - 1;
		}
	}
	return tempGap;
}
///////////////////////////////////////////////////////