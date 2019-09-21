#include <iostream>
#include "std_lib_facilities.h"

int main()
{
	int a=6;
	int b=9;
	cout<<"Az eredeti a erteke: "<<a<<'\n';
	cout<<"Az eredeti b erteke: "<<b<<'\n';
	int c=b;
	b=a;
	a=c;
	cout<<"Az uj a erteke: "<<a<<'\n';
	cout<<"Az uj b erteke: "<<b<<'\n';
}
