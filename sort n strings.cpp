#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
bool compare(string a,string b){
    if(a.length()==b.length()){//if both lengths are equal then do lexi sorting otherwise do on the basis of length
        return a<b;
    }
    else{
        return a.length()>b.length();
    }
}
int main() {
     //Read array of strings or n strings and sort them in lexi order and on the basis of length.
     int n;
     cin>>n;
     cin.get();
     string s[100];
     for(int i=0;i<n;i++){
         getline(cin,s[i]);
     }
     sort(s,s+n,compare);
     for(int i=0;i<n;i++){
         cout<<s[i]<<endl;
     }

}

