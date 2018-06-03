/* Copyright 2018 furuhama */

// Artillery

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void StartUp() {
    cout << "Welcome to Artillery" << endl;
    cout << "You are in the middle of a war and being charged by thousands of enemies." << endl;
    cout << "You have one cannon, which you can shoot at any angle." << endl;
    cout << "You only have 10 cannonballs for this target." << endl;
    cout << "Let's begin..." << endl;
    cout << endl;
}

int main() {
    StartUp();

    int killed = 0;
    string done;

    do {
        cout << "main process" << endl;
        cout << "after main process, do you want to continue? [y/n]" << endl;
        cin >> done;
    } while (done != "n");

    cout << "You killed " << killed << " of the enemy." << endl;
}
