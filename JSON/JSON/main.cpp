#include <iostream>
#include "json.h"
using namespace std;
using namespace yazi::json;

int main(int argc,char** argv)
{
	//Json v1;
	//Json v2 = true;
	//Json v3 = 123;
	//Json v4 = 1.23;
	//Json v5 = "hello json";

	////cout << "hello json" << endl;
	//bool b = v2;
	//int i = v3;
	//double f = v4;
	//const string& s = v5;
	//
	//cout << b << " "\
	//	<< i << " "\
	//	<< f << " "\
	//	<< s << " "\
	//	<< endl;
	
	Json arr;

	arr[0] = true;
	arr[1] = 123;
	arr.append(1.123);
	arr.append("hello world");
	bool b = arr[0];
	int i = arr[1];
	double f = arr[2];
	const string& s = arr[3];

	
	return 0;
}