// Generic Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template <class T> // declaration of template 
void Swap(T &a, T &b) // That's why we make generic or  template function;
{
    T temp = a;
    a = b;
    b = temp;
}


/*void swap(int& a, int& b)  // Overriding the same function of different datatype;
{
    int temp = a;
    a = b;
    b = temp;
}
void swap(char& a, char& b) // Overriding the same function of different datatype;
{
    auto temp = a;
    a = b;
    b = temp;
}*/
int main()
{
    int a = 4, b = 6;
    cout << " before swap value is " << a << "  " << b << endl;
    Swap<int>(a, b);
     cout << " after swap value is " << a <<"  " << b << endl;

     char c = 'C', d = 'D';
     cout << " before swap value is " << c << "  " << d << endl;
     Swap<char>(c, d);
     cout << " after swap value is " << c << "  " << d << endl;
     system("pause > 0");

}

