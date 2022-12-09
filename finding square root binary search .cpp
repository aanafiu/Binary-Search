///Binary Search
/// Finding Square Root Of a Number

/*
Input:
7

Output:
USE LOW or HIGH Value IS Same Answer:
Value LOW = 2.64575
Value HIGH = 2.64575
*/

/// GitHub Username \[aanafiu]

#include<bits/stdc++.h>
using namespace std;

double eps = 1e-6; // decimal number er por koto ghor pojonto fixed value thakbe

int main()
{
    double x;
    cin  >> x;

    double low = 0, high = x, mid;
    while(high-low > eps)
    {
        mid = (high+low)/2;
        if( mid*mid > x )
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }

    cout << "USE LOW or HIGH Value IS Same Answer: \n";
    cout << "Value LOW = " << low << endl;
    cout << "Value HIGH = " << high << endl;


   // main();

   ///Using \HIGH is most danger free .. if you use 1 it will show 0.9999 for low. so always use \\\\\\high

}
