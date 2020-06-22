#include <unit-test.h>

int addition_test() {
    int x = 3;
    int y = 4;
    return expect(x + y, 7);
}

int multiplication_test() {
    int x = 3;
    int y = 4;
    return expect(x * y, 12);
}

int failing_test() {
    return expect(1, 2);
}

void main() {
    test("Addition Test", &addition_test);
    test("Multiplication Test", &multiplication_test);
    test("Should Fail", &failing_test);
}