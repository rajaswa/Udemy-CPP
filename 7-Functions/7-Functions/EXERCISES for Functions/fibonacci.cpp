//
// Created by Rajaswa on 26-12-2017.
//
#include <iostream>

using namespace std;

int fibonacci(int);
int fibonacciWithRecursion(int);

int main() {
    int term;
    cout << "Which term of the fibonacci sequence do you want ? " << endl;
    cin >> term;
    cout << fibonacci(term)<<endl;
    cout << fibonacciWithRecursion(term);

}

int fibonacci(int term) {
    int a = 1, b = 1, c;
    if (term == 1 || term == 2)
        return 1;
    for (int i = 2; i < term; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int fibonacciWithRecursion(int term){

    if (term ==0){
        return 0;
    }
    if (term ==1 || term ==2){
        return 1;
    }
    return fibonacciWithRecursion(term -1 ) + fibonacciWithRecursion( term -2);

}

