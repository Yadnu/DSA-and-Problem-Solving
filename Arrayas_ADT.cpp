#include<bits/stdc++.h>
using namespace std;
struct Array
{
	int* A;
	int length;
	int size;
};
void display(struct Array &YJ){
	for (int i = 0; i < YJ.length; i++)
	{
		cout<<YJ.A[i]<<" ";
	}
	cout<<"\n";
}
void insertAtIndex(struct Array &YJ,int index,int a){
    if(index>=0 && YJ.length>=index ){
        for(int i=YJ.length;i>index;i--){
            YJ.A[i]=YJ.A[i-1];
        }
        YJ.A[index]=a;
        YJ.length;
    }
}

void createArr(struct Array &YJ){
	cout<<"Enter Size of Array \n";
	cin>>YJ.size;
	cout<<"Enter Length \n";
	cin>>YJ.length;
	YJ.A=new int[YJ.length];
	for (int i = 0; i < YJ.length; i++)
	{
		cin>>YJ.A[i];
	}

}

void append(struct Array &YJ,int a){
	YJ.length++;
	YJ.A[YJ.length]=a;
}
int main(int argc, char const *argv[])
{
	Array YJ;
	createArr(YJ);
	// entry(YJ);
	append(YJ,15);


    insertAtIndex(YJ,2,12);
    	display(YJ);
    	cout<<"\n"<<YJ.length;
	return 0;
}
