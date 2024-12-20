#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    string input;
    int pressCount = 0;
    cout << "Press Enter 3 times to reveal your future." << endl;
    while (pressCount < 3) {
        getline(cin, input);
        pressCount++;
    }
    srand(time(0));
    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    int randomIndex = rand() % 9;  
    cout << "You will get " << grades[randomIndex] << "in this 261102."<<endl;
    return 0;
}