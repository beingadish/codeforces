#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k;
    cin >> n >> k;
    long long int num[100000];
    
    if(k<(n/2)){
        cout << ((2*k)-1) << endl; 
    }else if(k == 1){
        cout << k << endl;
    }else{
            if(n%2 == 1){
        
            for(int i =0;i<=n/2;i++){
                num[i] = (2*i)+1;
            }
            for(int i =1;i<=n/2;i++){
                num[(n/2)+i] = (2*i);
            }
        }else{
            for(int i =0;i<n/2;i++){
                num[i] = (2*i)+1;
            }
            for(int i =1;i<=n/2;i++){
                num[(n/2)+i-1] = (2*i);
            }
        }
        
        cout << num[k-1] << endl;
    }
    
    return 0;
}
