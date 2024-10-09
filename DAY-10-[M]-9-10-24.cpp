#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T;  // number of people observed by Tanu
    cin >> T;

    while (T--) {
        int N;
        cin >> N;  // number of gestures for this person
        string gestures;
        cin >> gestures;

        bool isIndian = false;
        bool isNotIndian = false;

        for (char gesture : gestures) {
            if (gesture == 'I') {
                isIndian = true;
                break; 
            } else if (gesture == 'Y') {
                isNotIndian = true;
            }
        }

        if (isIndian) {
            cout << "INDIAN" << endl;
        } else if (isNotIndian) {
            cout << "NOT INDIAN" << endl;
        } else {
            cout << "NOT SURE" << endl;
        }
    }

    return 0;
}
