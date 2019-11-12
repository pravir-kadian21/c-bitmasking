#include <iostream>
using namespace std;

int getkthbit(int n,int k){
    return n&(1<<k)==0?0:1;
}
int main() {
    int n,k;
    cin>>n>>k;
    int ans = getkthbit(n,k);
    cout << ans << endl;
    return 0;
}
