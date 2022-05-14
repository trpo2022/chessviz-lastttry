#include <ctest.h>
#include <libchess/seemove.h>

CTEST(ctest, write1)
{
    const int result = see_move("e2-e4 e7-5e");
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(ctest, write2)
{
    const int result = see_move("e2-e4 e7-e5");
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}