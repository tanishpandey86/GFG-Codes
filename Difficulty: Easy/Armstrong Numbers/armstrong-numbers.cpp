class Solution {
  public:
    bool armstrongNumber(int n) {
        int dup = n;
        int sum = 0;
        
        while (n > 0) {
            int last_digit = n % 10;
            sum += last_digit * last_digit * last_digit;
            n /= 10;
        }
        
        return (sum == dup);
    }
};
