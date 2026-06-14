#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    long c = 0;
    for(int i=0;i<=n-1;i++){
        cin >> a[i];
    }
    for(int i=0;i<=n-1;i++){
        c = c+a[i];
    }
    cout << c;
    return 0;
}
