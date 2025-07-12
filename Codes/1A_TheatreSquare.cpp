#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m,a,s1,s2;
    cin >> n >> m >> a;
    if(n%a != 0){
        s1 = n/a + 1;
    }else {
        s1 = n/a;
    }
    
    //cout << s1 << endl;
    
    if(m%a != 0){
        s2 = m/a + 1;
    }else {
        s2 = m/a;
    }
    
    //cout << s2 << endl;
    
    cout << s1*s2 << endl;
    return 0;
}
