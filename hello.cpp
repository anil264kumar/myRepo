#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
	for(int i = 0;i<n;i++){
	   for(int j = 0;j<i;j++){
	    cout<<"* ";
	   }
	   cout<<endl;

	}
  }
  
 void pattern1(int n){
          for(int  i = 0; i<n; i++){
             for ( int j = 1 ; j <= n ;j++){
               cout<<i;
               }
               
              cout<<endl;
              }
              
              }

int main(){
	int n;
	cin>>n;
	pattern(n);
        cout<< "Hello bhai"<<endl;
	return 0;

}	

