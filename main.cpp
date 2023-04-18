#include <iostream>

using namespace std;

#define MAX(a, b) (a>b?a:b)

// https://zhuanlan.zhihu.com/p/419060261
void defineMacro();

int main() {
    cout << "Hello, World!" << endl;

    defineMacro();

    cout << "This is the line number " << __LINE__;
    cout << " of file " << __FILE__ << ".\n";
    cout << "Its compilation began " << __DATE__;
    cout << " at " << __TIME__ << ".\n";
    cout << "The compiler gives a __cplusplus value of " << __cplusplus;

    return 0;
}

void defineMacro() {
    int x = 5, y;
    y = MAX(x, 2);
    cout << y << endl;

    cout << MAX(7, x) << endl;

#undef MAX
#define MAX(a, b) (a>b?b:a)

    y = MAX(x, 2);
    cout << y << endl;

    cout << MAX(7, x) << endl;
}
