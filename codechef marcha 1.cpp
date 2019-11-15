#include <iostream>
using namespace std;

int b=0;
void dowork(int a[1000],int no,int target){
    int i=0;
    int ans=0;
    while(no!=0){
        if(no&1==1){
            ans = ans + a[i];
        }
        i++;
        no=no>>1;
    }
    if(ans == target){
        cout << "yes" << endl;
        b=1;
    }
}

void subset(int a[1000],int n,int target){
    int range=(1<<n)-1;
    for(int i=0;i<=range;i++){
        if(b==1){
            break;
        }
        dowork(a,i,target);
    }
}
int main() {
    int n,target;
    cin>>n>>target;
    int notes[1000];
    for(int i=0;i<n;i++){
        cin>>notes[i];
    }
    subset(notes,n,target);
}
