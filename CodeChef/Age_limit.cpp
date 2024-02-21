#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,x,y,a;
	cin >> t; 
	while(t--) {
	    cin >> x >> y >> a; 
	    if(a >= x && a < y ){
            cout << "YES" << endl;
        }
	    else cout << "NO" << endl;
	}
	 return 0;
}
