#include <iostream>
using namespace std;
int main(){
    int T;
    int x, y,z; 
    cin >> T;
    while(T--){
        cin >> x >> y;
        z = x*y;
        cout << z << endl;
    }
    return 0;
}