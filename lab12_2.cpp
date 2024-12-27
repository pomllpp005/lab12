#include<iostream>
#include <ctime> 
using namespace std;

long long int fibonacci(unsigned int X);
int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}
long long int fibonacci(unsigned int X){
    if(X == 0) return 0;
    if(X == 1) return 1;
    return fibonacci(X-1) + fibonacci(X-2);
}