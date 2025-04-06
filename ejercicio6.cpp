 #include <iostream>
using namespace std;

int main () {
 
string name;
int year ;
int birth_year;
cin>>name;
cout<<"name - "<<name<<endl;
cin>>year;
cin>>birth_year;
cout<<"age - "<<year<<endl;
cout<<"birth_year - "<<birth_year<<endl;
int cuando= birth_year+year;
cout<<name<<" cumplira "<<year<<" años en "<<cuando<<endl;


  return 0;
}
