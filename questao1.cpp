#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int intArray[] = {1,10,3} ,*p=intArray, *q = p;
	q = p++;
	cout << q << " " << *q << "\n";
	*p++;
	(*p)++;
	//cout << *p << "\n";
}

