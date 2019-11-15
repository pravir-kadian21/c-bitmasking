#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[1000];
    cin>>a;
    int l=strlen(a);
    int ans1 = (1<<l)-2;
    int pos=0;
    for(int i=l-1;i>=0;i--){
        if(a[i]=='7'){
            ans1+=(1<<pos);
        }
        pos++;
    }
    cout << ans1+1 << endl;
}