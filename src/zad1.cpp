#include "zad1.hpp"

TEST_CASE("Test klasy Artysta", "[zad1]")
{
    const Artysta     a1{};
    std::stringstream s1;
    a1.graj(s1);
    CHECK(s1.str() == "Anonim: 0");
    CHECK(a1.getSluchacze() == 0);

    const Artysta     a2{"The Beatles", 42};
    std::stringstream s2;
    a2.graj(s2);
    CHECK(s2.str() == "The Beatles: 42");
    CHECK(a2.getSluchacze() == 42);
}
