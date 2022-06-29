#pragma once
class FindPath
{
public:
	void insert_values();
	void search();
private:
	int aRow, aColumn;
	int bRow, bColumn;
	static const unsigned int rowNum = 20;
	static const unsigned int columnNum = 40;
	char arr[rowNum][columnNum];

	void print_field();
	void create_field();
};

