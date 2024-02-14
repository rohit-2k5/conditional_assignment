// Q3. Find the output for this code. Let input:- 2 3

#include <iostream>
using namespace std;

int main()
{
    // let 2, 3 are input 

    int x, y;
    cin >> x >> y;
    x += y;
    x -= y;
    x %= y;
    cout << x;

    return 0;
}

// ans = 2 because first x updates to 5 and then decresed to 2 and then when we do a%b where a is smaller then a will be printed that why .