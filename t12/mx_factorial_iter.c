#include <unistd.h>

int mx_factorial_iter(int n) {    
    if (n < 0) {
        return 0;
    }
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        if (factorial > __INT_MAX__ / i) {
            return 0;
        }
        factorial *= i;
    }
    return factorial;
}
