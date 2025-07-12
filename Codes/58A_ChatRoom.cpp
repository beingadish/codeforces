#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    char last = s[0];
    int cLcount=0;
    vector<char> pans;
    if(s[0] == 'h' || s[0] == 'H') pans.push_back(s[0]);

    for(int i =1;i<s.size();i++){
        if(s[i] == last && last == 'l') cLcount++;
        else if(s[i] == last) continue;
        else{
            last = s[i];
            pans.push_back(s[i]);
        }
    }

    string reduced(pans.begin(),pans.end());
    cout << "REDUCED STRING : " << reduced << endl;
    if(reduced == "helo" && cLcount > 0) cout << "YES";
    else cout << "NO" << endl;
    return 0;

}