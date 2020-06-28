#include <iostream>

using namespace std;

void func(int first, ...) {
    int s = 0;
    int* p = &first;
    for (int i = 1; i <= first; i++) {
        s += *++p;
    }
    cout << s << endl;
}

int main(int argc, char* argv[])
{
    func(3, 1, 7, 9);
    func(7, 1, 3, 4, 1, 7, 8, 8);
    func(11, 1, 0, 2, 3, 4, 5, 6, 7, 8, 1, 0);
    return 0;
}