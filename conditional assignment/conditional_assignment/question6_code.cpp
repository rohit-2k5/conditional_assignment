// Q6. Find the output of the below code

#include <iostream>
using namespace std;
int main()
{
    int i = (4 + 7 / 5 * 6 * 6 + 9) % 100;
    cout << i;
}

// ans: 49 because + and - calculate in last and first / and * will be calculated form left to right and then a%b where a>b will give a .