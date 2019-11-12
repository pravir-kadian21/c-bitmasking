#include <iostream>
using namespace std;

int setkthbit(int n,int k){
    return n|(1<<k);
}
int main() {
    int n,k;
    cin>>n>>k;
    int ans = setkthbit(n,k);
    cout << ans << endl;

    return 0;
}
