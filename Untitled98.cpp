#include <iostream>
#include <array>
using namespace std;

// Define a 2x2 matrix type for matrix multiplication
using matrix = array<array<long long, 2>, 2>;

// Function to multiply two matrices
matrix operator*(const matrix& a, const matrix& b) {
    matrix c = {};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return c;
}

// Function to calculate the nth Fibonacci number using matrix exponentiation
long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    matrix fib = {{{1, 1}, {1, 0}}};
    matrix result = {{{1, 0}, {0, 1}}};

    while (n > 0) {
        if (n & 1) {
            result = result * fib;
        }
        fib = fib * fib;
        n >>= 1;
    }

    return result[0][1];
}

int main() {
    int n;
    cin >> n;
    cout <<fibonacci(n-1) << endl;
    return 0;
}
