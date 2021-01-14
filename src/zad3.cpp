#include "zad3.hpp"

struct Instrument1
{
    unsigned liczbaUczestnikow(const Artysta& a) const { return a.getSluchacze() * 42; }
};

struct Instrument2
{
    unsigned liczbaUczestnikow(const Artysta& a) const { return a.getSluchacze() * 3; }
};

TEST_CASE("Test szablonu")
{
    ArtystaPlusInstrument< Instrument1 > a1{{"abc", 3}, Instrument1{}};
    CHECK(a1.koncert() == 3 * 42);

    ArtystaPlusInstrument< Instrument2 > a2{{"abc", 4}, Instrument2{}};
    CHECK(a2.koncert() == 3 * 4);
}
