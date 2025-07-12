#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5][5],ans=0,row, col;
    for(int i = 0; i < 5 ; i++){
        for(int j = 0; j< 5;j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                row = i;
                col = j;
            }
        }
    }
    
    if(row >= 2){
        ans += (row-2);
    }else{
        ans += (2-row);
    }
    
    if(col >= 2){
        ans += (col-2);
    }else{
        ans += (2-col);
    }
    
    
    cout << ans << endl;

    return 0;
}
