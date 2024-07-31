#include<bits/stdc++.h>
using namespace std;
int findSum(int n ){

int sum = 0;

for( int i = 0;i<n ; i++){
    cout<<sum;
    sum +sum;
   }
return sum;
}

int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;
    int Sum = findSum(n);
    cout<<"Sum is :"<<Sum<<endl;
 return 0;

}














