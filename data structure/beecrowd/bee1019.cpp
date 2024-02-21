#include<iostream>
using namespace std;
int main(){
    int N;
    int sec , min, hr;
    sec = 0;
    min = 0;
    hr = 0;
    cin >> N;
    if(N < 60){
        N = sec;
    }
    else{
        min = N/60;
        hr = N/3600;
    }
    cout <<hr<<":"<<min<<":"<<sec<<endl;
    return 0;
}