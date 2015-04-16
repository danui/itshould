# ITSHOULD

ITSHOULD is a very simple unit testing for C. The design philosophy is to
enable developers to write tests ASAP, and not meddle about with setting up
complex test frameworks.

ITSHOULD is inspired by the simplicity of the Mocha JavaScript testing style.
While it is not as featureful, it gets to the point. Write the test, and if it
fails... stop.

So while one might write the following in JavaScript...

    describe("subject of the test", function () {
        it("should behave like so", function () {
            assert(behaviour);
        });
    });

With ITSHOULD we can write the following...

    Describe("subject of the test", do {
        It("should behave like so", do {
            Assert(behaviour);
        } while (0));
    } while (0));

And all it takes to get that working is a single include!

    #include "itshould.h"

For example the above could be written in a file as shown below.

    #include "itshould.h"
    int main(void) {
        Describe("subject of the test", do {
            It("should behave like so", do {
                Assert(behaviour);
            } while (0));
        } while (0));
        Summarise();
        return 0;
    }

## Provided Examples

See examples [example-all-pass.c][example-all-pass.c] and
[example-with-failure.c][example-with-failure.c].

Run `make` to build examples.

    $ make

Run

    $ ./example-all-pass

    ITSHOULD v0.0.0

    Example Unit Test

      add(x,y)
        should return the sum of two integers ... OK
        should handle negative numbers ... OK

      cmp(x,y)
        should return 0 if x == y ... OK
        should return a negative value if x < y ... OK
        should return a positive value if x > y ... OK

    ITSHOULD: Completed 5 asserts
