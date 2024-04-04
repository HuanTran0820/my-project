#include <iostream>
#include <math.h>
#include <iomanip>
constexpr double PI = 3.14;
using namespace std;

int main()
{
	int n;
	cin >> n;
	int s = 0;
	if (n % 2 == 0)
	{
		s = n / 2;
	}
	else
	{
		s = ((n - 1) / 2) - n;
	}
	cout << s;
	return 0;
}