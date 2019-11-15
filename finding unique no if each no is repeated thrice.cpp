#include <iostream>
#include<cmath>
using namespace std;

void findunique(int a[1000],int n){
    int freq[64]={0};
    for(int i=0;i<n;i++){
        int no=a[i];
        int j=0;
        while(no!=0){
            freq[j]=freq[j]+(no&1);
            no=no>>1;
            j++;
        }
    }
    for(int i=0;i<64;i++){
        freq[i]=freq[i]%3;
    }
    int ans =0;
    for(int i=0;i<64;i++){
        ans = ans + freq[i]*pow(2,i);
    }
    cout << ans << endl;
}
int main() {
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    findunique(a,n);
}
