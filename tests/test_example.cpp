#include <boost/test/unit_test.hpp>

#include "../src/example.cpp"

BOOST_AUTO_TEST_CASE(addition)
{
    BOOST_CHECK(add(1, 2) == 3);
}
