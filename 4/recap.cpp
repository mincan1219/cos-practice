#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int a, b, sum, num;

	if(argc != 3)
	{
		cerr << "Error! You must input two numbers!" << endl;
		return 1;
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (a >= b)
	{
		
