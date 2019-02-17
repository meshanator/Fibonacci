## Fibonacci Calculator

This is a very basic c++ program to demonstrate two ways of calculating the nth term of a fibonacci sequence.

### Definition

A fibonacci sequence is a sequence of numbers such that each term is calculated as the sum of the previous two, beginning with 0 and 1.
Here are the first 15:

```
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
```


### Recursive method

Here our recursive method simply calls itself on the previous (n-1) number and the one before that (n-2), stopping when it hits 1. 

```cpp
int fibonacciRecursive(int n){
    if(n <= 1)
        return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}
```



### Linear method

With this method we are simply tracking the two numbers linearly and returning the final number.

```cpp
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

```
###Demo 
![alt text](https://raw.githubusercontent.com/meshanator/Fibonacci/master/demo1.PNG "demo")
