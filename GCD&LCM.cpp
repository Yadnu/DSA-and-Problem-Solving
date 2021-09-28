/* T is the test cases and getGCD and getLCM functions computes GCD and LCM of 2 numbers.
Code goes here
*/
#include <iostream>
#define ll long long int
using namespace std;
int getGCD(ll a, ll b){
    if(a==0){
        return b;
    }
    if(b==0){return a;}
    if(a==b){return a;}
    if(a>b){
        return(getGCD(a-b,b));
    }
    return getGCD(a,b-a);
}
int getLCM(ll a, ll b){
    return (a/getGCD(a,b))*b;
}

int main() {
    int T;
    cin>>T;
    while(T--){
        ll a,b;
        cin>>a>>b;
        cout<< getGCD(a,b)<<" "<<getLCM(a,b)<<endl;
        
    }
    
	return 0;
}
