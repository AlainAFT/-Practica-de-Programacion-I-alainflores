 #include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    int age;
    int birth_year;
    int will_be;

    cin>>name;
    cin>>age;
    cin>>birth_year;
    will_be = birth_year + age;
    printf("%s cumplirá %d años en %d.\n", name.c_str(), age, will_be);

   

    return 0;
}
