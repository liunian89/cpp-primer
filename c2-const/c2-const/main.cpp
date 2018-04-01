#include <iostream>

int main(int argc, const char * argv[]) {
    const double pi = 3.14;   // pi is const; its value may not be changed
    const double *p1 = &pi;        // error: ptr is a plain pointer
    double d = 1.99;
    
    std::cout << *p1 << std::endl;
    p1 = &d;
    std::cout << *p1 << std::endl;
    
    int errNumb = 0;
    int *const curErr = &errNumb;  // curErr will always point to errNumb
    const double p2 = 3.14159;
    const double *const pip = &pi; // pip is a const pointer to a const object
    
    *pip = 2.72;     // error: pip is a pointer to const
    // if the object to which curErr points (i.e., errNumb) is nonzero
    if (*curErr) {
        errorHandler();
        *curErr = 0; // ok: reset the value of the object to which curErr is bound
    }
    
    return 0;
}
