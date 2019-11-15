#include <iostream>
#include<cstring>
using namespace std;

void dowork(char *a,int no){
    int i=0;
    while(no!=0){
        if(no&1==1){
            cout << a[i];
        }
        i++;
        no=no>>1;
    }
    cout << endl;
}

void generatesub(char *a){
    int n=strlen(a);
    int range = (1<<n)-1;
    for(int i=0;i<=range;i++){
        dowork(a,i);
    }
}
int main() {
    char a[100];
    cin>>a;
    generatesub(a);

    return 0;
}
