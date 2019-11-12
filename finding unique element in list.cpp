#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a,no,b;
    cin>>a>>b;
    int ans = a^b;
    for(int i=2;i<n;i++){
        cin>>no;
        ans = ans ^ no;
    }
    cout << ans << endl;
}
