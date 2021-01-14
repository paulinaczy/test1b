#include "zad2.hpp"

TEST_CASE("Test polimorfizmu", "[zad2]")
{
    Artysta* a1_ptr = stworzArtyste("Hello");
    REQUIRE(dynamic_cast< PopGwiazda* >(a1_ptr));
    std::stringstream s1;
    a1_ptr->graj(s1);
    CHECK(s1.str() == "PopGwiazda: BTS");
    CHECK(a1_ptr->getSluchacze() == 1234);

    Artysta* a2_ptr = stworzArtyste("hello");
    REQUIRE(dynamic_cast< RapGwiazda* >(a2_ptr));
    std::stringstream s2;
    a2_ptr->graj(s2);
    CHECK(s2.str() == "RapGwiazda: Ye");
    CHECK(a2_ptr->getSluchacze() == 4321);
}