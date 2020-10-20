#include<bits/stdc++.h>
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int main()
{
    op();
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int sumOfDigit =0;

        for(auto u : s)
        {
            sumOfDigit += (u - '0');
        }
        string str = to_string(sumOfDigit);
        string temp = str;
        reverse(temp.begin(), temp.end());
        if(str==temp) cout<< "Yes"<<endl;
        else cout<< "No"<<endl;
    }
    return 0;
}



