#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t){
        string word;
        cin >> word;
        if(word.size() > 10) cout << word[0] << word.size() - 2 << word[word.length()-1] << endl;
        else cout << word << endl;
        t--;
    }
}