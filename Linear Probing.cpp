#include<iostream>

using namespace std;


int linear_prob(int Hashtable[],int key,int Flag[],int size){
	int pos;
	pos=key%size;
	for(int i=0;i<size;i++){
		if(Flag[pos]==-1){
			Hashtable[pos]=key;
			Flag[pos]=1;


			return pos;

		}

		pos=(pos+1)%size;

	}

	return -1;

}


int Search_linear_prob(int Hashtable[],int size){
	int key;
	cout<<"\n Enter the Record to search: "<<endl;
	cin>>key;
	int pos;
	pos=key%size;
	for(int i=0;i<size;i++){
		if(Hashtable[pos]==key){
			return pos;

		}
		pos=(pos+1)%size;

	}
	return -1;

}

void display(int Hashtable[],int size){


	for(int j=0;j<size;j++){
		cout<<Hashtable[j]<<" ";
	}

}


int main(){

	int Flag[10];
		int key;
		int size;
		cout<<"Enter the size of table: "<<endl;
		cin>>size;
	int Hashtable[10];
	for(int i=0;i<size;i++){
		Flag[i]=-1;
		Hashtable[i]=0;

			}


	for(int k=0;k<size;k++){
		cout<<"Enter Record: "<<endl;
		cin>>key;
		linear_prob(Hashtable,key,Flag,size);
	}
	//display

	display(Hashtable,size);

	//Searching...

int position;
position=Search_linear_prob(Hashtable,size);
//position++;                  // If position++ then couting starts from 1 otherwise 0

cout<<"\n Position of required element: "<<position;
	return 0;

}
