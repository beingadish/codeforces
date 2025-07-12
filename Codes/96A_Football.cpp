#include<bits/stdc++.h>

using namespace std;

int main()
{
    string info;
    cin >> info;
    int ans =1,done=0;
    int cp = info[0];
    for(int i=1;i <info.length() ; i++){
        int np = info[i];
        if(np != cp){
            cp = np;
            ans = 1;
        }else{
            ans++;
        }
        if(ans >= 7){ 
            cout << "YES" << endl; 
            done=1; 
            break;
            
        }
    }
    
    if(!done){
        cout << "NO" << endl;
    }
    
    return 0;
}
