#include <iostream>
#include "math.h"
#include "cal.h"

using namespace std;

int main(int argc, char **argv) {
    int result;

    result = cal::add(1, 2);
    cout << "add 1 + 2 : " << result << endl;

    result = cal::add(4, 2);
    cout << "add 4 + 2 : " << result << endl;

    result = cal::sub(1, 2);
    cout << "sub 1 - 2 : " << result << endl;

    result = cal::sub(4, 2);
    cout << "sub 4 - 2 : " << result << endl;

    result = cal::mul(1, 2);
    cout << "mul 1 * 2 : " << result << endl;

    result = cal::mul(4, 2);
    cout << "mul 4 * 2 : " << result << endl;
}
