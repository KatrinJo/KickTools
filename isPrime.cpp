#include <math.h>

// 当数大于3时 质数的一定是 6k+1 6k+5
bool isPrime(int num) {
    if (num <= 3) {
        return num > 1;
    }
    if (num % 6 != 1 && num % 6 != 5) {
        return false;
    }
    int sq = (int) sqrt(num);
    for (int i = 5; i <= sq; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}