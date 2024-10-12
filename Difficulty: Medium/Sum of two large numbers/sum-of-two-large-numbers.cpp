//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    // Helper function to add two numeric strings
    string func(string x, string y) {
        int m = x.size(); // Size of string x
        int n = y.size(); // Size of string y
        int c = 0; // Carry variable
        int j = m - 1; // Pointer for the end of string x
        int i = n - 1; // Pointer for the end of string y
        
        // Process both strings from the end towards the beginning
        while(i >= 0 && j >= 0) {
            // Calculate sum of corresponding digits and carry
            int b = (x[j] - '0') + (y[i] - '0') + c;
            if(b > 9) {
                c = 1; // Set carry if sum is greater than 9
                x[j] = (b % 10) + '0'; // Store last digit of sum in x
            } else {
                c = 0; // No carry needed
                x[j] = b + '0'; // Store sum in x
            }
            i--; // Move to the next digit in y
            j--; // Move to the next digit in x
        }
        
        // If y is fully processed but x has remaining digits
        if(i == -1 && j >= 0) {
            while(j >= 0) {
                // Add carry to the remaining digits of x
                int b = (x[j] - '0') + c;
                if(b > 9) {
                    c = 1; // Set carry if sum is greater than 9
                    x[j] = (b % 10) + '0'; // Store last digit of sum in x
                } else {
                    c = 0; // No carry needed
                    x[j] = b + '0'; // Store sum in x
                }
                j--; // Move to the next digit in x
            }
        }
        
        // If there is a carry left after processing all digits
        if(c) return "1" + x;
        return x;
    }
    
    // Helper function to remove leading zeros from a numeric string
    string check(string x) {
        int f = 0; // Counter for zeroes
        int d = -1; // Index of the first non-zero digit
        for(int i = 0; i < x.size(); i++) {
            if(d == -1 && x[i] != '0') d = i; // Find the first non-zero digit
            if(x[i] == '0') f++; // Count zeroes
        }
        // If the entire string is zeros, return "0"
        if(f == x.size()) return "0";
        // Remove leading zeros by taking substring from the first non-zero digit
        if(d) x = x.substr(d);
        return x;
    }
    
    // Main function to find the sum of two numeric strings
    string findSum(string x, string y) {
        x = check(x); // Remove leading zeros from x
        y = check(y); // Remove leading zeros from y
        // Add the strings, ensuring the larger string is the first argument
        if(x.size() >= y.size()) return func(x, y);
        return func(y, x);
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends