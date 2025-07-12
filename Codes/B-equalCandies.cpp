#include <bits/stdc++.h>

using namespace std;

int
main (){
  long int t;
  cin >> t;
  while (t--){
      int n;
      cin >> n;
      int can[1000];
      for(int i =0;i<n;i++){
          cin >> can[i];
      }
      
      sort(can,can+n);
      long long int ans =0;
      long int first = can[0];
      for(int i =1;i<n;i++){
          ans += (can[i] - first);
      }
      
      cout << ans << endl;
  }

  return 0;
}
