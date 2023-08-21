#include <bits/stdc++.h>
using namespace std;
int digit;
void saydigit(int n, vector<string> ans){
    if(n==0){
        return;
    }
    saydigit(n/10, ans);
    digit= n%10;
    cout<<ans[digit]<<" ";
}
int main()
{
    // int arr[3]={2,7,4};
    // int k = 181;
    // int n = 3;
    // int carry = 0;
    // for (int i = n-1; i >= 0; i--)
    // {
    //     int digit = k % 10;
    //     k= k/10;
    //     arr[i] += digit + carry;
    //     if (arr[i] >= 10)
    //     {
    //         arr[i] %= 10;
    //         carry = 1;
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<"->";
    // }

    // string S="hello";
    // unordered_map<char, int> map;
    // for(int i=0;i<=S.length();i++){
    //     map[S[i]]++;
    // }    
    // for(int i=0;i<=S.length();i++){
    //     if(map[S[i]]==1){
    //         cout<<S[i];
    //         break;
    //     }
    // }    
    vector <string> word={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    saydigit(456,word);
    return 0;
}