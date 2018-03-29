#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int currentValue = 0, value = 0;
    
    while (cin >> currentValue) {
        int counter = 1;
        
        while (cin >> value) {
            if (currentValue == value) {
                ++counter;
            } else {
                cout << currentValue << " occurs " << counter << " times" << endl;
                currentValue = value;
                counter = 1;
            }
        }
        
        cout << currentValue << " occurs " << counter << " times" << endl;
    }
    
    
    
    return 0;
}
