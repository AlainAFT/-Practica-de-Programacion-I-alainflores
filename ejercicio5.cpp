#include <iostream>
using namespace std;
// tiene que crear una variable temporal
// para poder hacer la asignacion,
// llame a la variable: temp
int main () {
  char x = 'A';
  char y = 'B';
  cout<<"x-"<<x<<endl;
  cout<<"y-"<<y<<endl;
  //antes 
  cout << "antes" << endl;
  cout<<"x ="<<x<<endl;
   cout<<"y ="<<y<<endl;
   // despues 
   cout<<"despues "<<endl;
   char caja=x;
   x=y;
   y=caja;
   cout<<"x ="<<x<<endl;
   cout<<"y ="<<y<<endl;

  

  return 0;
}
