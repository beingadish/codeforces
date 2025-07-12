#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int la,lb,nza=0,nzb=0,noa=0,nob=0,fail=0;
        
        cin >> la >> lb;
        string a,b;
        
        cin >> a;
        cin >> b;
        
        for(int i=0;i<la;i++) if(a[i] == '1') noa++;
        for(int i=0;i<lb;i++) if(b[i] == '1') nob++;
        
        nza = la-noa;
        nzb = lb-nob;
        
        // LOGIC if la == lb
        
        if(la == lb){
            for(int i=0;i<la;i++){
                if(a[i] != b[i]){
                    cout << "NO" << endl;
                    fail = 1;
                    break;
                }
            }
            if(!fail) cout << "YES" << endl;
        }
        
        // LOGIC if la != lb
        
        else{
            
            if(b[0] == '1'){
             if(noa >= nob){
                for(int i = (la-lb+1),j=1;i<la;i++,j++){
                        if(a[i] != b[j]){
                            cout << "NO" << endl;
                            fail = 1;
                            break;
                        }
                }
                if(!fail) cout << "YES" << endl;
            }else {
                cout << "NO" << endl;
            }
            }
            else {
                if(b[0] == '0'){
             if(nza >= nzb){
                for(int i = (la-lb+1),j=1;i<la;i++,j++){
                    if(a[i] != b[j]){
                        cout << "NO" << endl;
                        fail = 1;
                        break;
                    }
                }
                if(!fail) cout << "YES" << endl;
            }else {
                cout << "NO" << endl;
            }
            }
        }
        
    }
}
    return 0;
}
    
