#include <iostream>
#include "FindPath.h"
using namespace std;

void FindPath::insert_values()
{
	cout << "Insert ROW position for A point: " << endl;
	cin >> aRow;
	cout << "Insert COLUMN position for A point: " << endl;
	cin >> aColumn;

	cout << "Insert ROW position for B point: " << endl;
	cin >> bRow;
	cout << "Insert COLUMN position for B point: " << endl;
	cin >> bColumn;

	create_field();
}

void FindPath::create_field()
{
	for (size_t i = 0; i < rowNum; i++)
	{
		for (size_t j = 0; j < columnNum; j++)
		{
			arr[i][j] = '-';

			if (i == aRow - 1 && j == aColumn - 1) arr[i][j] = 'A';
			if (i == bRow - 1 && j == bColumn - 1) arr[i][j] = 'B';
		}
	}

	print_field();
}

void FindPath::print_field()
{
	for (int i = 0; i < rowNum; i++)
	{
		for (int j = 0; j < columnNum; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
}

void FindPath::search()
{
	for (size_t i = aColumn - 1; i < bColumn; i++)
	{
		arr[aRow - 1][i] = 'X';
	}

	for (size_t i = aRow; i < bRow; i++)
	{
		arr[i][bColumn - 1] = 'X';
	}

	print_field();
}
