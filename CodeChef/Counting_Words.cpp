#include<iostream>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int N,M,S;
        cin >> N >> M;
        S = N*M;
        cout << S << endl;
    }
    return 0;
}