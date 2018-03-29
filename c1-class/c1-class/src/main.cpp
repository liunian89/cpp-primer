#include <iostream>
#include "../include/Sales_item.h"
using namespace std;

int main(int argc, const char * argv[]) {
    Sales_item total;
    
    if (cin >> total) {
        Sales_item next;
        
        while (cin >> next) {
            if (total.isbn() == next.isbn()) {
                total += next;
            } else {
                cout << "Total is: " << total << endl;
                total = next;
            }
        }
        cout << "Total is: " << total << endl;
        
    } else {
        // no input! warn the user
        std::cerr << "No data?!" << std::endl;
        return -1;  // indicate failure
    }
    
    return 0;
}
