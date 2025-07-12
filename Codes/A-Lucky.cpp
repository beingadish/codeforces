#include <bits/stdc++.h>

using namespace std;

int
main ()
{
  long int t;
  cin >> t;
  while (t--)
    {
      string s;
      cin >> s;
      long long int val = stoi(s);
      //cout << val << endl;
      int int1=0,int2=0;
      for(int i=0;i<3;i++){
          int1 += (val%10);
          val = val/10;
      }
      for(int i=0;i<3;i++){
          int2 += (val%10);
          val = val/10;
      }
      
      //cout << int1 << " & " << int2 << endl;
      
      if (int1 == int2)
	{
	  cout << "YES" << endl;
	}
      else
	{
	  cout << "NO" << endl;
	}
    }

  return 0;
}
