#include<bits/stdc++.h>

using namespace std;

int main() {
    
    ifstream file("input.txt");
    
    if (!file.is_open()) {
        cout << "Error: input.txt not found!" << endl;
        return 1;
    }
    string instruction;
    int currentPos = 50; 
    int zeroCount = 0;   

    
    while (file >> instruction) {
        
        char dir = instruction[0];
        
        
        int amount = stoi(instruction.substr(1));

        if (dir == 'R') {
            
            currentPos = (currentPos + amount) % 100;
        } 
        else if (dir == 'L') {
            
            currentPos = (currentPos - amount) % 100;
            
            
            if (currentPos < 0) {
                currentPos += 100;
            }
        }

        if (currentPos == 0) {
            zeroCount++;
        }
    }

    file.close();
    
    cout << "Actual password: " << zeroCount << endl;

    return 0;
}