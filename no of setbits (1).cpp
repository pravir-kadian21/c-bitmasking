#include <iostream>
using namespace std;

int countsetbits(int no){
    int ans=0;
    while(no!=0){
        ans = ans + (no&1);
        no=no>>1;
    }
    return ans;
}

int countsetbitsfast(int n){
    int ans =0;
    while(n!=0){
        ans++;
        n=n&(n-1);
    }
    return ans;
}
int main() {
    int no;
    cin>>no;
    cout << countsetbits(no) << endl;
    cout << countsetbitsfast(no) << endl;

    return 0;
}
