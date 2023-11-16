#include <iostream>
using namespace std;

int main() {
    int i, n, a[10], max;
   
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
   
    max = a[0];
    for (i = 1; i < 4; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
 
    cout << max;
    
    return 0;
}

OUTPUT:
1
2
3
45
45
