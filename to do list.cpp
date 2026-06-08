#include <iostream>
#include <string>
using namespace std;

int main() {
    string task[10];
    int n;

    cout << "How many tasks do you want to add? ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "Enter task " << i + 1 << ": ";
        getline(cin, task[i]);
    }

    cout << "\n--- TO DO LIST ---\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << task[i] << endl;
    }

    return 0;
}