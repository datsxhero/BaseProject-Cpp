#include "../src/main.h"
#include <assert.h>

void testGetTriangleType() {
    assert(getTriangleType(3, 4, 5) == 0);
}

int addnumber(int a,int b);

int main() {
    assert(addNumber(5, 2) == 7);
    testGetTriangleType();
    return 0;
}
