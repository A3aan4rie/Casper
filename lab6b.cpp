// Lab6b.cpp : This file contains the 'main' function. Program execution begins and ends there.

//

//Jaryd White

//COSC-1436-001

//Roll snake eyes


#include <iostream>

#include <cstdlib>

#include <ctime>

using namespace std;

// Function to roll a 20-sided dice and select a random number (d20)

int rollD20() {

    return rand() % 20 + 1;  // Generate a random number between 1 and 20
}

// Function to roll a 4-sided dice and select a random number (d4)

int rollD4() {

    return rand() % 4 + 1;  // Generate a random number between 1 and 4
}

int main() {

    // Seed the random number generator with the current time  -- added by AFD

    srand(static_cast<unsigned int>(time(0)));
    
    // Counter variable to keep track of the number of rolls

    int rollCount = 0;

    // Roll the dice until both dice show 1 (snake eyes)

    while (true) {

        int d20Result = rollD20();

        int d4Result = rollD4();

        // Roll counter to calculate how many rolls it took

        rollCount++;

        // Display the numbers on the dice of the current roll

        cout << "Roll " << rollCount << ": d20 = " << d20Result << ", d4 = " << d4Result << endl;

        // Check if both dice show 1

        if (d20Result == 1 && d4Result == 1) {

            break;  // Exit the loop if snake eyes is rolled

        }

    }

    // Print the total number of rolls needed to get snake eyes

    cout << "\nYou got snake eyes in " << rollCount << " rolls.\n";

    return 0;

}
