#include<bits/stdc++.h>

using namespace std;


bool isInvalid(long long num) {
    string s = to_string(num);
    int len = s.length();

    if (len % 2 != 0) return false;

    int half = len / 2;

    return s.substr(0, half) == s.substr(half);
}

int main() {
    ifstream file("input.txt");   
    string input;

    getline(file, input);
    file.close();

    long long sum = 0;

    stringstream ss(input);
    string range;

  
    while (getline(ss, range, ',')) {
        long long start, end;
        sscanf(range.c_str(), "%lld-%lld", &start, &end);

        
        for (long long i = start; i <= end; i++) {
            if (isInvalid(i)) {
                sum += i;
            }
        }
    }

    cout << sum << endl;
    return 0;
}
