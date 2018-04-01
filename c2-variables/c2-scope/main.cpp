#include <iostream>

int i = 3;
int main(int argc, const char * argv[]) {
    int i = 100, b = 0, sum = 0;
    
    if (true) {
        i = 10;
        b = i;
        for (int i = 0; i != 10; ++i)
            sum += i;
        
    }
    std::cout << i << " " << b << " " << sum << std::endl;
    return 0;
}
