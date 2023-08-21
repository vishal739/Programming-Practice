#include <bits/stdc++.h>
using namespace std;
vector<int> temp(26, 0);
string FirstNonRepeating(string A)
{
    // Code here
    int n = A.size();
    string ans = "";
    int j = 0;
    for (int i = 0; i < n; i++)
    {   
        temp[A[i] - 'a']++;
        
        bool flag = false;
        while (j <= i)
        {
            if (temp[A[j] - 'a'] == 1)
            {
                ans += A[j];
                flag = true;
                break;
            }
            j++;
        }
        if (!flag)
        {
            ans += '#';
        }
    }
    return ans;
}

int main()
{
    string A= "aabc";
    string ans;
    ans= FirstNonRepeating(A);
    cout<<ans<<endl;
    return 0;
}
