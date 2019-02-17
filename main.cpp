#include <iostream>
using namespace std;

int fibonacciRecursive(int n){
    if(n <= 1)
        return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int fibonacciLinear(int n){
    int result = 0;
    int a = 0;
    int b = 1;
    if(n == 0)
        return a;
    for (int i = 2; i <= n; i++){
        result = a + b;
        a = b;
        b = result;
    }
    return b;
}

int main() {
    std::cout << fibonacciRecursive(6) << std::endl;
    std::cout << fibonacciLinear(6) << std::endl;
    return 0;
}

//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...