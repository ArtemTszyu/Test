#include <iostream>
#include <sstream>
using namespace std;

int main (){
	int a[10]; int i, j; int p=0;
  string stroka;
	getline(cin, stroka);
	istringstream stream(stroka);
	for(i=0; i<10; ++i){
	    if(!(stream>>a[i])){
	        cout<<"An error has occurred while reading the input sequence"<<endl;
	        return -1;
	    }
	    if(p>a[i]){
	        cout<<"The input sequence must be non-decreasing"<<endl;
	        return -1;
	    }
	    p=a[i];
	}
	int r;
	cin>>r;
	for(i=0; i<10; ++i){
	    for(j=0; j<10; ++j){
	        if((a[i]+a[j])==r){
	            cout<<a[i]<<" "<<a[j];
	            return -1;
	        }
	    }
	}
	cout<<"There is no such pair of numbers"<<endl;
	return -1;
}
