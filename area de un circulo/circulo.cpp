#define _USE_MATH_DEFINES
#include<iostream>
#include <math.h>

using namespace std;
int main(){
float r,perimetro,area;
cout<<"calcular el area y perimetro de un circulo "<<endl;

system("pause");
cout<<"Ingresa el radio del circulo:"<<endl;
cin>>r;


perimetro= 2*M_PI*r;
area = M_PI * pow(r , 2) ;

cout<<"El perimetro es : "<<perimetro<<endl;
cout<<"El area es : "<<area<<endl;
system("pause");

return 0;



}

