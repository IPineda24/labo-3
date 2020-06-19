#define _USE_MATH_DEFINES
#include<iostream>
#include <math.h>

using namespace std;
int main(){
double a,b,c, x1, x2;
cout<<"Resolver por formula general"<<endl;

system("pause");

cout<<"Ingresar primer variable:"<<endl;
cin>>a;
cout<<"Ingresar segunda variable:"<<endl;
cin>>b;
cout<<"Ingresar tercer variable:"<<endl;
cin>>c;
x1 =(-b+(sqrt(pow(b , 2)-4*(a*c))))/2*a;
x2 =(-b-(sqrt(pow(b , 2)-4*(a*c))))/2*a;
cout<<" x1 es: "<< x1 <<endl;
cout<<" x2 es: "<< x2 <<endl;
system("pause");

return 0;



}

