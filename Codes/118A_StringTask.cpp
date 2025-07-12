#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<char> ans;
    for(int i =0;i<s.size();i++){
        char check = tolower(s[i]);
        if(check == 'a' || check == 'e' || check == 'i' || check == 'o' || check == 'u' || check == 'y') continue;
        else{
            ans.push_back('.');
            ans.push_back(check);
        }
    }
    for(int i =0;i<ans.size();i++) cout << ans[i];
    return 0;
}