//
//  main.cpp
//  c2-reference
//
//  Created by Nian Liu on 3/30/18.
//  Copyright © 2018 Nian Liu. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int i, &ri = i;
    i = 5; ri = 10;
    // since &ri and i are linked with reference, the value assign to ri passed to i as well.
    std::cout << i << " " << ri << " " << &ri << std::endl;
}
