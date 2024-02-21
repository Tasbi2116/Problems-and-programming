//https://www.codechef.com/practice/PCPP10/problems/CPPDEBUG06
#include<iostream>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int N,A,B,C,D;
    // A : the number of users who didn't make any submission
    // B : the number of users who made a submission but not correct.
    cin >> N >> A >> B;
    C = N - (A+B);
    D = C + B;
    cout << D << " " << C;
    return 0;
}