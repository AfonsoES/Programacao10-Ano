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
	int N, M;
	cin >> N;
	cin >> M;
	cout << N / M << endl;
	return 0;
}
