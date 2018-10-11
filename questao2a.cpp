#include <stdio.h>
#include <iostream>
using namespace std;

char** f(char *s){
	    // char ch='a';
         char* ch = "a";
         cout<<"teste "<<&ch<<endl;
         return &ch;
}

main(){
	char* nome="elanne";
	
 
	cout<<"resultado :"<<f("eu")<<endl;
	
}
