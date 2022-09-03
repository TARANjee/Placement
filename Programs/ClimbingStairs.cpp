#include<iostream>
using namespace std;
int main(){
    int n=5; //Ans =8
    int sum=0,way=0,k=1;
      for(int i=0;i<n;i++){
        sum=0;
          for(int j=1;sum<=n;){
              sum +=j;
              
              if(sum==n){
                  way++;
              }
              
          }
      }
      cout<<sum<<endl;
      cout<<way<<endl;

    return 0;
}