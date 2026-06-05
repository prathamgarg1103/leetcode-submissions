// Last updated: 6/5/2026, 12:15:52 PM
class Solution {
public:
    int product(int n) {
        int product = 1;
        while (n != 0) {
            int count = n % 10;
            n = n / 10;
            product = product * count;
        }
        return product;
    }

    int sum(int n) {
        int sum = 0;
        while (n != 0) {
            int count = n % 10;
            n = n / 10;
            sum = sum + count;
        }
        return sum;
    }

    int subtractProductAndSum(int n) {
        int result = product(n) - sum(n);
        return result;
    }
};
