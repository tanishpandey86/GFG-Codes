class Solution {
  public:
    int count = 0;
    int countDigits(int n) {
        // code here
        while (n>0){
        int w = n%10;
        n = n/10;
        count ++;
        }
        return count;
    }
};