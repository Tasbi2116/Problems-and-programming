#include <bits/stdc++.h>
using namespace std;

int main() {
    // to run the program fast.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; // number of singers
    cin >> n;

    long singers[n];

    for (int i = 0; i < n; i++) {
        cin >> singers[i]; // input singers 
    }

    sort(singers, singers + n); // sorting the array.

    long currentSinger = singers[0];
    int favourite_singer_count = 0;
    int max_singer_count = 1;
    int current_singer_count = 1;

    for (int i = 1; i < n; i++) {
        if (singers[i] > currentSinger) {
            if (current_singer_count > max_singer_count) 
            {
                max_singer_count = current_singer_count;
                favourite_singer_count = 1;
            } else if (current_singer_count == max_singer_count) 
            {
                favourite_singer_count++;
            }
            current_singer_count = 1;
            currentSinger = singers[i];
        } else {
            current_singer_count++;
        }
    }

    if (current_singer_count == max_singer_count) {
        favourite_singer_count++;
    } else if (current_singer_count > max_singer_count) {
        favourite_singer_count = 1;
    }

    cout << favourite_singer_count << endl;
    return 0;
}
