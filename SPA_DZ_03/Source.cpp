#include <iostream>
#include "FindPath.h"
using namespace std;

int main()
{
	FindPath f;

	f.insert_values();
	cout << endl;
	f.search();

	return 0;
}