#include <iostream>
#include<cstring>
using namespace std;
//Read n,then n strings and print the largest string and its length//
int main() {
       
       int n;
       cin>>n;
       cin.get();//At this point input pointer leaves the null string.//
       char current[1000];
       char largest[1000];
       int cslen=0;
       int lslen=0;
       for(int i=0;i<n;i++){
           cin.getline(current,1000);
           cslen=strlen(current);
           if(cslen>lslen){
               lslen=cslen;
               strcpy(largest,current);
           }
       }
       cout<<largest<<" "<<"with length of"<<" "<<lslen<<"\n";
       return 0;



}
