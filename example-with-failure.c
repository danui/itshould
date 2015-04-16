#include "itshould.h"

static int add(int x, int y) {
    if (y % 2 == 0) {
        return x + y + 1; // a bug!
    }
    return x + y;
}

static int cmp(int x, int y) {
    return x-y;
}

int main(int argc, char ** argv) {
    Describe("Example Unit Test with Failure", do {
        Describe("add(x,y)", do {
            It("should return the sum of two integers", do {
                int x = 10;
                int y = 20;
                Assert(x+y == add(x,y));
            } while (0));
            It("should handle negative numbers", do {
                int x = -5;
                int y = -10;
                Assert(x+y == add(x,y));
            } while (0));
        } while (0));
        Describe("cmp(x,y)", do {
            It("should return 0 if x == y", do {
                Assert(cmp(100, 100) == 0);
            } while (0));
            It("should return a negative value if x < y", do {
                Assert(cmp(80, 100) < 0);
            } while (0));
            It("should return a positive value if x > y", do {
                Assert(cmp(100, 80) > 0);
            } while (0));
        } while (0));
    } while (0));
    Summarise();
}
