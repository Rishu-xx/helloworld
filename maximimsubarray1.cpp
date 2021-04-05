#include <iostream>
using namespace std;
//max sum subarray using precomputation technique//
int main() {
    int a[100];
    int currentsum=0;int maxsum=0;
    int left=-1;int right=-1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cs[100]={0};
    cs[0]=a[0];
    for(int i=1;i<n;i++){//this loop is for building cummulativesum array i.e cs//
        cs[i]=cs[i-1]+a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            currentsum=0;

            currentsum=cs[j]-cs[i-1];
            if(currentsum>maxsum){
                maxsum=currentsum;
                left=i;
                right=j;
            }

        }
    }
    cout<<"MAXIMUM SUBBARRAY SUM IS"<<" "<<maxsum<<"\n";
    for(int k=left;k<=right;k++){//this loop is for printing the subarray which having maximum sum
        cout<<a[k]<<",";
    }
}
