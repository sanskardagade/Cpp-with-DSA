
#include <iostream>
#include <bits/stdc++.h> // STL
using namespace std;

========= Linear Time Complexity O(n) =========

int main() {
    int n,m;
    cin >> n >> m;

    for(int i=0; i<n; i++) { // O(n) time complexity
        cout<<i<<" ";
    }

    for(int i=0; i<n; i+=3) { // O(n/3) ~ O(n) time complexity
        cout<<i<<" ";
    }

    for(int i=0; i<n; i+=m) { // O(n/m) time complexity
        cout<<i<<" ";
    }

    for(int i=0; i<m; i++) { // O(m) time complexity
        cout<<i<<" ";
    }

    for(int i=0; i<5*n; i++) { // O(5*n)~O(n) time complexity
        cout<<i<<" ";
    }

    for(int i=0; i<n; i++) { // O(n*1000000)~O(n) time complexity
        for(int j=0; j<1000000; j++) { 
            cout<<i<<" "<<j<<endl;
        }
    }

    // Total time complexity = O(n) + O(m) + O(n) + O(n) = O(n+m)
    return 0;
}

========= Constant Time Complexity O(1) =========

int main() {
    int n;

    for(int i=0; i<100000000000; i++) { // O(100000000000)~O(1) constant time complexity
        cout<<n<<" ";
    }

    for(int i=0; i<5; i++) { // O(5000000)~O(1) constant time complexity
        for(int j=0; j<1000000; j++) { 
            cout<<n<<" "<<j<<endl;
        }
    }

    return 0;
}

========= Quadradic Time Complexity O(n^2) =========

int main() {

    int n;
    cin >> n;

    for(int i=0; i<n; i++) { // O(n^2) time complexity
        for(int j=0; j<n; j++) { 
            cout<<i<<" "<<j<<endl;
        }
    }

    for(int i=0; i<n; i++) { // O(n*m) time complexity
        for(int j=0; j<m; j++) {
            cout<<i<<" "<<j<<endl;
        }
    }

    for(int i=0; i<n; i++) { // O(n*m*k) time complexity
        for(int j=0; j<m; j++) {
            for(int k=0; k<k; k++) { // O(k) time complexity
                cout<<i<<" "<<j<<" "<<k<<endl;
            }
        }
    }

    for(int i=0;i<n*n;i++) { // O(n^2) time complexity
        cout<<i<<endl;
    }

    for(int i=0;i<n*n*n;i++) { // O(n^3) time complexity
        cout<<i<<endl;
    }

    return 0;
}

========= Logarithmic Time Complexity O(logn) =========

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i=i*2) { // O(log2n) time complexity
        cout<<i<<" ";
    }

    for(int i=1; i<=n; i=i*2) { // O(n*log2n) time complexity
        for(int j=1; j<=n; j++) 
            cout<<i<<" "<<j<<endl;
        }
    }

    for(int i=1; i<=n; i=i*3) { // O(log3n) time complexity
        cout<<i<<" ";
    }

    for(int i=1; i<=n; i=i*m) { // O(logm(n)) time complexity
        cout<<i<<" ";
    }

    for(int i=n; i>0; i=i/2) { // O(logn) time complexity
        cout<<i<<" ";
    }

    for(int i=1; i<=pow(2,n); i++) { // O(2^n) time complexity
        cout<<i<<" ";
    }

    return 0;
}

int main() {
    int n;
    cin >> n;

    int a[n]; // O(n) space complexity
    int matrix[n][n]; // O(n*n) space complexity
    int matrix1[n][m]; // O(n*m) space complexity
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    int sum = 0; // O(1) space complexity
    int b[100]; // O(1) space complexity
    for(int i=0; i<n; i++) {
        sum += a[i];
    }

    cout<<sum<<endl;

    return 0;
}

int arr[5] = {1, 2, 3, 4, 5};
cout << arr[2]; // Output: 3
