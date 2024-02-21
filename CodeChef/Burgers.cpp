// https://www.codechef.com/practice/PCPP07/problems/CPPCC03
#include <iostream>
using namespace std;
int main(){
    int T;
    int A, B;
    cin >> T;
    while (T--){
        cin >> A >> B;
        if (A >= B){
            cout << B << endl;
        }
        else{
            cout << A << endl;
        }
    }
    return 0;
}