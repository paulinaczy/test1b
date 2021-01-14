#include "zad4.hpp"

TEST_CASE("Test tworzenia zespolu", "[zad4]")
{
    std::vector< Artysta > v;
    CHECK_THROWS_AS(v = stworzZespol(1, "ab"), std::logic_error);

    v = stworzZespol(5, "abcde");

    for (int i = 0; i < 5; ++i)
    {
        CHECK(v[i].getSluchacze() == i + 1);
        CHECK(v[i].getPseudonim() == "abcde");
    }
}
