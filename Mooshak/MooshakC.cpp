#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int N, A[100], V = 0, M = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < N; i++)
	{
		M = A[i];
		for (int ii = 0; ii < i; ii++)
		{
			if (A[ii] > M)
			{
				M = A[ii];
			}
			if (A[ii] == M)
			{
				M = 1000;
			}
		}
		if (M == A[i])
		{
			V++;
		}
	}
	cout << V << endl;

	return 0;
}