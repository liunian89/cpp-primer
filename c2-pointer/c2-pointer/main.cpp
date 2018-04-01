//
//  main.cpp
//  c2-pointer
//
//  Created by Nian Liu on 3/30/18.
//  Copyright © 2018 Nian Liu. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int ival = 1024;
    int *pi = &ival;    // pi points to an int
    int **ppi = &pi;    // ppi points to a pointer to an int
    cout << "The value of ival\n"
    << "direct value: " << ival << "\n"
    << "indirect value: " << *pi << "\n"
    << "doubly indirect value: " << **ppi
    << endl;
    return 0;
}
