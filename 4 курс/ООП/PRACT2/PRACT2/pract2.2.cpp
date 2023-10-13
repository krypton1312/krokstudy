#include <iostream>
#include <string>
using namespace std;

struct Factory {
    string name;
    int age;
    string specialty;
    double salary;
    bool isLocksmith() {
        return specialty == "locksmith";
    }
    bool isTurner() {
        return specialty == "turner";
    }
};

int main() {
    int N;
    cout << "Enter the number of factories: ";
    cin >> N;

    Factory* factories = new Factory[N];

    for (int i = 0; i < N; i++) {
        cout << "Enter factory " << i + 1 << " name: ";
        cin >> factories[i].name;
        cout << "Enter factory " << i + 1 << " age: ";
        cin >> factories[i].age;
        cout << "Enter factory " << i + 1 << " specialty: ";
        cin >> factories[i].specialty;
        cout << "Enter factory " << i + 1 << " salary: ";
        cin >> factories[i].salary;
    }

    int locksmithCount = 0;
    int turnerCount = 0;

    cout << "Factories with average age > 35:" << endl;
    for (int i = 0; i < N; i++) {
        if (factories[i].isLocksmith()) {
            locksmithCount++;
        }
        if (factories[i].isTurner()) {
            turnerCount++;
        }

        if (factories[i].age > 35) {
            cout << "Factory " << i + 1 << ": " << factories[i].name << " (Age: " << factories[i].age << ")" << endl;
        }
    }

    cout << "Locksmiths: " << locksmithCount << endl;
    cout << "Turners: " << turnerCount << endl;
    delete[] factories;
    return 0;
}
