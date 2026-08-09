class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            // Cast to unsigned int to safely handle negative overflows
            int carry = (static_cast<unsigned int>(a & b)) << 1;
            
            a = a ^ b; // Removed 'int' to correctly modify the parameter 'a'
            b = carry;
        }
        return a;
    }
};
