#include <iostream>
#include<cstring>
using namespace std;
void removeDuplicates(char a[]){
    int l=strlen(a);
    if(l==0 or l==1){
        return;
    }
    int current=1;
    int previous=0;
    while(current<l){
        if(a[current]==a[previous]){
            current++;
        }
        else{
            if(a[current]!=a[previous]){
                previous++;
                a[previous]=a[current];
            }
        }
    }
    a[previous+1]='\0';
    return;

}
int main() {
       
       char a[1000];
       cin.getline(a,1000);
       removeDuplicates(a);
       cout<<a;



}
