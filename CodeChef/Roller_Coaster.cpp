//https://www.codechef.com/practice/PCPP10/problems/CPPDEBUG07
#include <iostream>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int X,H;
        cin >> X >> H;
        if(X >= H){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}