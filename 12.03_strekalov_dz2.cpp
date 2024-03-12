#include <iostream>
#include"time.h"
using namespace std;
int main()
{
	const int n = 10, m = 5, a = 10;
	const int b = 20;
	int mass[n], mass1[m], mass2[m];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		mass[i] = a + rand() % 10;
		cout << mass[i] << " ";
	}
	cout << "\n\n";
	cout << "1st 2nd\n";
	for (int i = 0; i < m; i++)
	{
		mass1[i] = mass[i];
		mass2[i] = mass[i + 5];
	}
	for (int i = 0; i < m; i++)
	{
		cout << mass1[i] << " " << mass2[i] << "\n";
	}
	return 0;
}