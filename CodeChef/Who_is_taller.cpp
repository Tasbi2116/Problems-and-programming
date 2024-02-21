// https://www.codechef.com/practice/PCPP07/problems/CPPCC04
#include <iostream>
using namespace std;
int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    int x,y;
    while (T--)
    {
        cin >> x >> y;
        if (x > y){
            cout << "A" << endl;
        }
        else{
            cout << "B" << endl;
        }
    }
    
    return 0;
}