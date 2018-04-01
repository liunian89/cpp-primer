//
//  main.cpp
//  c2-type
//
//  Created by Nian Liu on 3/30/18.
//  Copyright © 2018 Nian Liu. All rights reserved.
//

#include <iostream>
using namespace std;

void f(int *p1);
int main(int argc, const char * argv[]) {
//    for (char c; cin >> c; )
//        cout << "the value of '" << c << "' is " << int{c} << '\n';
    
    int a = 99, *p1 = &a;
    f(p1);
    return 0;
}

void f(int *pi) {
    void *pv = pi;
    int *pi2 = static_cast<int*>(pv);
    
    cout << pi2;
    
}
