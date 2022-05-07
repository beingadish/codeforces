#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,ans=0;
    string op;
    cin >> t;
    while(t--){
        cin >> op;
        //cout << op << endl;
        if(op == "X++" || op == "++X"){
            ans++;
        }else if(op == "X--" || op == "--X"){
            ans--;
        }
    }
    
    cout << ans << endl;

    return 0;
}
