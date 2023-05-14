#include <iostream>
#include <cstdlib>
using namespace std;

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(nullptr));
	for (int i = 0; i < 100; i++)
	{
		cout << rand() << ' ';
	}
}
