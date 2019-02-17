#include <iostream>
using namespace std;

int fib(int n){
    //cout << n << endl;
    if(n <= 1)
        return n;
    return fib(n - 1) + fib(n-2);
}

int fiblinear(int n){
    int result = 0;
    int a = 0;
    int b = 1;
    for (int i = 2; i <= n; i++){
        result = a + b;
        a = b;
        b = result;
    }
    return result;

}

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::cout << fib(8) << std::endl;
    std::cout << fiblinear(8) << std::endl;
    return 0;
}

//1 1 2 3 5 8 13 21 34 55 89
//1 2 3 4 5 6 7  8  9  10 11

//fib(4) + fib(3)
//fib(1) + fib(-1)