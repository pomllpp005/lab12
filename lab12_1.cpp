#include<iostream>
using namespace std;

int fibonacci(unsigned int X);
int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}
int fibonacci(unsigned int X){
    if(X == 0) return 0;
    if(X == 1) return 1;
    return fibonacci(X-1) + fibonacci(X-2);
}