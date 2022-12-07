/// Binary Search Basic Structure
/// Github userName: \[aanafiu]

/**
6
2 3 4 5 6 7
**/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; //6
    cin >> n;
    vector<int> v(n); // 2 3 4 5 6 7
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    int find_elem;
    cin >> find_elem;

    sort(v.begin(),v.end());

    int low=0,high= n-1, mid;
    while(high-low > 1)
    {
        int mid = (high+low) / 2 ;
        if(v[mid] < find_elem)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    if(v[low] == find_elem)
    {
        cout << "Index = " << low << " Value = " << v[low] << endl;
    }
    else if(v[high] == find_elem)
    {
        cout << "Index = " << high << " Value = " << v[high] << endl;

    }
    else
    {
        cout << "Not Found\n";
    }
}
