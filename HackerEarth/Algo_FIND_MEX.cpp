// partially accepted.
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* The main function starts by disabling synchronization between C and C++ standard streams for faster input and output. 
    It also unties the cin and cout streams to optimize I/O operations. */
    int n;
    cin >> n;
    int a[n];
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxi = max(maxi, a[i]);
    }
    int vis[maxi + 1] = {0};
    int ans[n];
    int c = 0;
    /* 
    It enters a loop to process each element in the inputArray.
    It increments the count of the current integer inputArray[i] in the countArray.
    It enters a nested while loop that increments nextAvailable until it finds the next available integer (i.e., while countArray[nextAvailable] is greater than 0).
    It assigns the value of nextAvailable to the corresponding position in the resultArray. 
    */
    for (int i = 0; i < n; i++) {
        vis[a[i]]++;
        while (vis[c]) {
            c++;
        }
        ans[i] = c;
    }
    // Output segment.
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
