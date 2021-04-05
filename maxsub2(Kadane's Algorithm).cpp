#include <iostream>
using namespace std;
//max sum subarray using precomputation technique//
int main() {
    int a[100];
    int currentsum=0;int maximumsumsofar=0;int n;cin>>n;
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   //Kadane's algo for finding maximum subarray sum//
   for(int i=0;i<n;i++){
       currentsum+=a[i];
       if(currentsum<0){
           currentsum=0;
       }
       else{
           if(currentsum>maximumsumsofar){
               maximumsumsofar=currentsum;
           }
       }
   }
   cout<<"Maximum subarray sum using kadane's is"<<" "<<maximumsumsofar<<"\n";
}
