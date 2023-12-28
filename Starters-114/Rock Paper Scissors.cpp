#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int r,p,s;
        r=p=s=0;
        for(auto it:str)
        {
            if(it=='R')
                r++;
            else if(it=='P')
                p++;
            else
                s++;
        }
        int req=(n/2)+1;
        string ans="";
        for(int i=0;i<n;i++)
            ans+='P';
        if(r>=req)
            cout << ans << endl;
        else
        {
            req-=r;
            int i=n-1;
            while(req && i>=0)
            {
                if(str[i]=='P')
                    ans[i]='S';
                else if(str[i]=='S')
                    ans[i]='R';
                i--;
                if(str[i]!='R')
                    req--;
            }
            cout << ans << endl;
        }
    }
	return 0;
}
