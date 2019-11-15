#include <iostream>
using namespace std;

void twounique(int *a,int n){
    int res=0;
    for(int i=0;i<n;i++){
        res=res^a[i];
    }
    int temp=res;
    int j=0;
    while(temp!=0){
        if((temp&1)==1){
            break;
        }
        j++;
        temp=temp>>1;
    }
    int no1=0;
    int mask=1<<j;
    for(int i=0;i<n;i++){
        if((a[i]&mask)!=0){
            no1 = no1 ^ a[i];
        }
    }
    int no2=no1^res;
    cout << no1 << endl;
    cout << no2 << endl;
}
int main() {
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    twounique(a,n);
}
