#include <iostream>
using namespace std;

bool IsKPeriodic(const string& str, int K) {
    int n = str.size();

    if (n % K != 0) {
        
        return false;
    }

    for (int i = 0; i < K; i++) {
        char prev = str[i];
        for (int j = i + K; j < n; j += K) {
            if (str[j] != prev) {
               
                return false;
            }
            prev = str[j];
        }
    }


    return true;
}

