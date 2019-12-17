#include<bits/stdc++.h>

using namespace std;

vector<string> ans;

void solve(vector<vector<char>> v, int in, string res){
    int row = v.size();
    if(in==row){
        ans.push_back(res);
        return;
    }
    for(char ch : v[in])
        solve(v, in+1, res+ch);
}

int main(){
    freopen("input.csv", "r", stdin);
    vector<vector<char>> v;
    string s;
    while(cin>>s){
        vector<char> vch;
        for(char ch : s){
            if(ch!=',')
                vch.push_back(ch);
        }
        v.push_back(vch);
    }
    solve(v, 0, "");
    int sz = ans.size();
    cout<<ans[0];
    for(int i=1;i<sz;i++){
        cout<<", "<<ans[i];
    }
    fclose(stdin);
    return 0;
}
