#include "test1.h"

int test1::feed(int amount) {
    bigness.setValue(bigness.value() + amount);

    gotFood();

    return bigness.value();
}
