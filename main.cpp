#include <iostream>
#include "json.h"
using namespace std;


int main(int argc,char** argv)
{
	Json v1;
	Json v2 = true;
	Json v3 = 123;
	Json v4 = 1.23;
	Json v5 = "hello json";

	cout << "hello json" << endl;


	return 0;
}