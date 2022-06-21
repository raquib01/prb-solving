// square of largest element is equal to sum of squares of other two.
#include <iostream>
using namespace std;
int main()
{
	int a = 7;
	int b = 24;
	int c = 25;
	int maxElement = max(a, max(b, c));

	int x, y;
	if (maxElement == a)
	{
		x = b;
		y = c;
	}
	else if (maxElement == b)
	{
		x = a;
		y = c;
	}
	else
	{
		x = a;
		y = b;
	}

	int ans = maxElement * maxElement == x * x + y * y;
	cout << ans << endl;
}