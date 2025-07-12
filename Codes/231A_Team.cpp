#include<iostream>
using namespace std;

int main(){
    int p,result=0;
    cin >> p;
    while(p--){
        int petya,vasya,tonya;
        cin >> petya >> vasya >> tonya;
        if((petya+vasya+tonya)>=2){
            result++;
        }
    }
    cout << result << endl;
}