#include <iostream>
#include <string>
using namespace std;

// Function to check if a string is easy to pronounce
bool is_easy_to_pronounce(const string& s) {
    string vowels = "aeiou";
    int consecutive_consonants = 0;
    
    for (char ch : s) {
        if (vowels.find(ch) == string::npos) {  // Not a vowel, so it's a consonant
            consecutive_consonants++;
            if (consecutive_consonants >= 4) {
                return false;  // Hard to pronounce
            }
        } else {
            consecutive_consonants = 0;  // Reset count if a vowel is found
        }
    }
    return true;  // Easy to pronounce
}

int main() {
    int t;  // Number of test cases
    cin >> t;
    
    while (t--) {
        int n;  // Length of the string (not needed for the logic)
        cin >> n;
        
        string s;
        cin >> s;
        
        if (is_easy_to_pronounce(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

