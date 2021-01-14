#include "zad5.hpp"

TEST_CASE("Test sortowania Tagliatelle", "[zad5]")
{
    std::vector< Artysta > v = {{"abc", 1},
                                {"abc", 2},
                                {"abc", 3},
                                {"abc", 1000},
                                {"abc", 1001},
                                {"abc", 1002},
                                {"abc", 999}};

    CHECK(liczPopularnych(v.cbegin(), v.cend()) == 2);

    std::deque< Artysta > d = {{"abc", 1002},
                               {"abc", 1},
                               {"abc", 2},
                               {"abc", 3},
                               {"abc", 1000},
                               {"abc", 1001},
                               {"abc", 1002}};

    CHECK(liczPopularnych(d.cbegin(), d.cend()) == 3);
}
