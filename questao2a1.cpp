#include <stdio.h>
#include <iostream>

using namespace std;
//retorno de valor
char* f(char *s){
         char *ch = ++s;
         cout<<"&ch ="<<&ch<<endl;
         return ch;
}
//retornando um endereco
char** f1(char *s){
         char *ch = s;
         cout<<"&ch ="<<&ch<<endl;
         return &ch;
}

main(){	
	cout<<"retorno:"<<f1("elanne");
	
}
