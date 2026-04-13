// #include <bits/stdc++.h>
// using namespace std;

// struct Transaction {
//     string sender, receiver;
//     double amount;
//     int time;
// };

// // function to find fraud transactions
// void findFraud(vector<Transaction> &v, int n) {
//     vector<int> fraud(n, 0);

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {

//             if (v[i].sender == v[j].sender &&
//                 v[i].receiver == v[j].receiver &&
//                 v[i].amount == v[j].amount &&
//                 abs(v[i].time - v[j].time) <= 60) {

//                 fraud[i] = 1;
//                 fraud[j] = 1;
//             }
//         }
//     }

//     // print fraud transactions
//     for (int i = 0; i < n; i++) {
//         if (fraud[i]) {
//             cout << v[i].sender << " "
//                  << v[i].receiver << " "
//                  << v[i].amount << " "
//                  << v[i].time;
            
//             cout << endl;
//         }
//     }
// }

// int main() {
//     int n;

//     if (!(cin >> n) || n <= 0) {
//         cout << "Invalid input";
//         return 0;
//     }

//     vector<Transaction> v(n);

//     for (int i = 0; i < n; i++) {
//         cin >> v[i].sender >> v[i].receiver >> v[i].amount >> v[i].time;
//     }

//     findFraud(v, n);

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

struct Transaction {
    string sender, receiver;
    double amount;
    int time;
};

// function to find fraud transactions
void findFraud(vector<Transaction> &v, int n) {
    vector<int> fraud(n, 0);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (v[i].sender == v[j].sender &&
                v[i].receiver == v[j].receiver &&
                v[i].amount == v[j].amount &&
                abs(v[i].time - v[j].time) <= 60) {

                fraud[i] = 1;
                fraud[j] = 1;
            }
        }
    }

    // print fraud transactions
    for (int i = 0; i < n; i++) {
        if (fraud[i]) {
            cout << v[i].sender << " "
                 << v[i].receiver << " "
                 << v[i].amount << " "
                 << v[i].time;
            
            cout << endl;
        }
    }
}

int main() {
    int n;

    if (!(cin >> n) || n <= 0) {
        cout << "Invalid input";
        return 0;
    }

    vector<Transaction> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].sender >> v[i].receiver >> v[i].amount >> v[i].time;
    }

    findFraud(v, n);

    return 0;
}