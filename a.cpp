#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct player {
    string name,school;
}; 

int main() {

    int n;
    cout << "Amount people: ";
    cin >> n;

    vector<player> allplayers(n);

    for (int i = 0; i < n; i++) {
        cout << "Name: ";
        cin >> allplayers[i].name;

        cout << "School: ";
        cin >> allplayers[i].school;
    }



    return 0;
}