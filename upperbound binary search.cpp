///Binary Search
///Finding UpperBound
/*
Input:
6
3 6 4 5 2 1
4

Output:
After Sort = 1 2 3 4 5 6
Index = 4 Value = 5

*/

/// GitHub UserName: \[aanafiu]

#include<bits/stdc++.h>
using namespace std;

int upper_bounds( vector<int> &v, int find_element)
{
    int low = 0, high = v.size()-1, mid;
    while(high-low > 1)
    {
        mid = (high+low)/2;
        if(find_element >= v[mid] )
        {
            low = mid+1;
        }
        else
        {
            high = mid;
        }
    }

    if(v[low] > find_element)
    {
        return low;
    }
    if(v[high] > find_element)
    {
        return high;
    }
    return -1;
}

int main()
{
    int len;
    cin >> len;
    vector <int> v(len);
    for(int i=0; i<len; i++)
    {
        cin >> v[i];
    }

    int find_elem;
    cin >> find_elem;

    sort(v.begin(),v.end());

    cout << "After Sort = ";
    for(auto elem : v)
    {
        cout <<  elem << " ";
    }
    cout << "\n";

    int upperBoundIndex = upper_bounds( v, find_elem);

    if(upperBoundIndex == -1)
    {
        cout << "Not Found\n";
    }
    else
    {
        cout << "Index = " << upperBoundIndex << " Value = " << v[upperBoundIndex] << endl;
    }
}
