// Q2. Find the output for this code. Let input:- 3 2

#include <iostream>
using namespace std;

int main()
{
    // let 3, 2 are input

    int x;  
    cout << "Enter first number\n";
    cin >> x; // user will give 'x' a value.
    int y;
    cout << "Enter second number\n";
    cin >> y; // user will give 'y' a value.
    cout << (x != y) << " " << (x >= y);

    return 0;
}

// it will print 1 1 because x!=y is true statement and then x>=y is also a true statement according to the input here . 