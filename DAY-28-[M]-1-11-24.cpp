#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }

        std::sort(a.begin(), a.end());

        bool flag = true;
        int operations = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] < i + 1) {
                operations += (i + 1) - a[i];
            } else if (a[i] > i + 1) {
                flag = false;
                break;
            }
        }

 if (flag) {
            std::cout << operations << std::endl;
        } else {
            std::cout << -1 << std::endl;
        }
    }

    return 0;

}
