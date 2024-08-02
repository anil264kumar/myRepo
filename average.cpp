#include<bits/stdc++.h>
using namespace std;

float findAverage(float num1,float num2){
            return (num1 + num2)/2;
            
            }
            
            
 int main(){
      float num1, num2;
      cout<<"Enter num1:";
      cin>>num1;
      cout<<"Enter num2:";
      cin>>num2;
      float average = findAverage(num1 , num2);
      cout<<"Average of num1 and num2 is : "<<average<<endl;
      
      return 0;
      
      }           
      
