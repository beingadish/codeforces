#include<bits/stdc++.h>

using namespace std;

int main()
{
    int h = 'H';
    int q = 'Q';
    int nine = '9';
    int plus = '+';
    
    // cout << h << " " << q << " " << nine << " " << plus << " " << endl;
    
    string p;
    cin >> p;
    int yes=0;
    for(int i =0;i<p.length();i++){
        int val = p[i];
        if(p[i] == h || p[i] == q || p[i] == nine){
            yes = 1;
        }
    }
    
    if(yes){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}
