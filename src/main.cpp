/* Copyright 2018 furuhama */

// Artillery

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

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
    cout << "main process" << endl;
    int killed = 0;
    cout << "You killed " << killed << " of the enemy." << endl;
}
