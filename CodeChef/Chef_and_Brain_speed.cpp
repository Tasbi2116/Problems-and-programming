//https://www.codechef.com/practice/PCPP10/problems/CPPDEBUG08
#include <iostream>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int X,Y;
    cin >> X >> Y;
    if(X < Y){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}