#include <iostream>

using namespace std;

int sumEven(int N){
    int a=0;
    int sum=0;
    while(a<=N){
        sum= sum+a;
        a+=2;
    }
    return sum;
}

int main()
{ 
    
    int N;
    std::cout << "enter the number" << std::endl;
    std::cin >> N;
    cout<<sumEven(N);
    return 0;
}
