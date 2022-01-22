#include <iostream>

using namespace std;
void printarray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void rev(int arr[],int size){
    int s=0;
    int e=size-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main()
{
    int a[5]={1,2,3,4,5};
    int b[4]={2,4,-1,3};
    rev(a,5);
    printarray(a,5);
    rev(b,4);
    printarray(b,4);
    
    

    return 0;
}
