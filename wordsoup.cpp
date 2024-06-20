#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
int main() {
    // Initialize random seed at top of code to ensure difirent num each time
    srand(time(0));
    for (int k = 0; k < 8; k++){ // main loop random choice ' '|' '|' '
        vector <char> AB = {'A','B', 'C','D','E','F','G','H','I','J','K','L','M','N','O','P','R','S','T','U','V','W','Y'}; // vec of character A-B
        vector <char> list = {}; // will become empty vector after main for cycle
        
        for (int i = 0; i < 8; i++){ // width of matrix
            // Generate random number between 0 and 99
            int randomNumber = (rand() % 23); // % 3 is there for to set the limit
            list.push_back(AB[randomNumber]);
            
        }
        cout << endl;
        
        // loop to print matrix of random character A-C
        for (int j = 0; j < 8; j++){
            if (j == 7){
                cout << list[j];
            }else{
                cout << list[j] << " | ";
            }
        }
    }
    return 0;
}
