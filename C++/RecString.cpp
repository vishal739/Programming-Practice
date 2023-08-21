#include<bits/stdc++.h>
using namespace std;
void reverse(string &s,int low,int high){
    if(low>high){
        return;
    }
    swap(s[low],s[high]);
    return reverse(s,low+1,high-1);
}
bool palindrome(string s,int low,int high){
    if(low>=high){
        return true;
    }
    if(s[low]!=s[high]){
        return false;
    }
    return palindrome(s,low+1,high-1);
}
int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans= power(a,b/2);
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a* (ans*ans);
    }

}
void recSel(int arr[],int n){
    if()
}
int main()
{
    string s= "123321";
    // bool flag= palindrome(s,0,5);
    cout<<power(3,3);
    return 0;
}