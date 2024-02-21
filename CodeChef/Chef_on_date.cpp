//https://www.codechef.com/practice/PCPP10/problems/CPPDEBUG09
#include <iostream>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int X,Y;
        cin >> X >> Y;
        if(X >= Y){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}