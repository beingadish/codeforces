#include<bits/stdc++.h>

using namespace std;

int main()
{
    int nc;
    int coins[100];
    cin >> nc;
    for(int i =0;i<nc;i++){
        cin >> coins[i];
    }
    
    sort(coins, coins+nc);
    
    // for(int i =0;i<nc;i++){
    //     cout << coins[i] << " ";
    // }
    // cout << endl;
    
    
    int sum =0;
    for(int i = 0;i<nc;i++){
        sum += coins[i];
    }
    
    //cout << sum << endl;
    
    sum = sum/2;
    int ans =0,money=0;
    for(int i =nc-1;i>=0;i--){
        money += coins[i];
        ans++;
        if(money > sum){
            break;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
