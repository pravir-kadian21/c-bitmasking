#include <iostream>
using namespace std;

int getkthbit(int n,int k){
    int ans = n&(1<<k);
    if(ans==0){
        return 0;
    }
    else{
        return 1;
    }
}
int main() {
    int n,k;
    cin>>n>>k;
    int ans = getkthbit(n,k);
    cout << ans << endl;
    return 0;
}
