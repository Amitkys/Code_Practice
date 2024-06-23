#include<bits/stdc++.h>
using namespace std;
int main()
{

    int x = 10;
    int y  = 20;
    cout << "Before Swapping x = " << x << " and y= " << y << endl;

    // algorithms
    y = x + y;  // y = 30
    x = y - x;  // x = 30 - 10 = 20
    y = y - x;  // y = 30 - 20 = 10

    cout << "after Swapping x = " << x << " and y= " << y << endl;

    return 0;
}

/*
a = 5;
b = 10;
b = a + b;
a = b - a;
b = b - a


*/