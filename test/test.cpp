#include<iostream>

using namespace std;
int test();
int main(){
	int i = 1;
	cout<<"i = "<<i <<"\n";
	cout<<"enter a digit = ";
	cin>>i;
	cout<<"i now = " <<i <<"\n" ;
	test();
	return 0;
}

int test(){
 string s= "hello\n";
 cout<<s[2];
	return 0;
}
