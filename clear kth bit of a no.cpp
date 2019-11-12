#include <iostream>
using namespace std;

int clearkthbit(int n,int k){
    int mask= ~(1<<k);
    return n&mask;
}
int main() {
    int n,k;
    cin>>n>>k;
    int ans = clearkthbit(n,k);
    cout << ans << endl;
    return 0;
}
