#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char string[100001];
    int length;
    int array[100001] = {0}; // Initialize the array to all zeros
    int even = 0, odd = 0;

    cin.getline(string, 100001); // Use cin.getline for safer input

    length = strlen(string); // length of the string

    for (int i = 0; i < length; i++) {
        // Check if the character is within the valid ASCII range
        //if (string[i] >= 0 && string[i] < 128) {
            array[string[i]]++;
        
    }

    for (int i = 0; i < length; i++) {
        if (array[i]) {
            if (array[i] % 2 == 0) 
            {
                even++;
            } 
            else 
            {
                odd++;
            }
        }
    }

    if (odd % 2 != 0) {
        cout << "Shukla 1 wins";
    } else {
        cout << "Shukla 2 wins";
    }

    return 0;
}
