#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int t;
    cin >> t;

    while (t--) {
        long long m, n;
        cin >> m >> n;

        long long limit = sqrt(n) + 1;
        vector<bool> isPrime(limit + 1, true);
        vector<int> primes;

        for (int p = 2; p * p <= limit; ++p) {
            if (isPrime[p]) {
                for (int multiple = p * p; multiple <= limit; multiple += p) {
                    isPrime[multiple] = false;
                }
            }
        }

        for (int p = 2; p <= limit; ++p) {
            if (isPrime[p]) {
                primes.push_back(p);
            }
        }

        vector<bool> isPrimeRange(n - m + 1, true);

        for (int i = 0; i < primes.size(); ++i) {
            int currentPrime = primes[i];
            long long base = (m / currentPrime) * currentPrime;
            if (base < m) base += currentPrime;
            if (base == currentPrime) base += currentPrime; 

            for (long long multiple = base; multiple <= n; multiple += currentPrime) {
                isPrimeRange[multiple - m] = false;
            }
        }

        for (long long i = 0; i <= n - m; ++i) {
            if (isPrimeRange[i] && (i + m) > 1) {
                cout << (i + m) << endl;
            }
        }

        if (t > 0) {
            cout << endl; 
        }
    }

    return 0;
}
