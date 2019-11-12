#include <iostream>
using namespace std;
int main() {
    int no;
    cin>>no;
    if(no&1){
        cout << "odd" << endl;
    }
    else{
        cout << "even" << endl;
    }
    return 0;
}
