 #include "doctest.h"
#include "sources/MagicalContainer.hpp"
using namespace ariel;
TEST_CASE("1")
{
    MagicalContainer container;
    CHECK_NOTHROW( MagicalContainer::AscendingIterator ascIter(container));
    CHECK_NOTHROW( MagicalContainer::SideCrossIterator crossIter(container));
    CHECK_NOTHROW( MagicalContainer::PrimeIterator primeIter(container));
    
}
TEST_CASE("2")
{
    MagicalContainer container;
    
    CHECK_EQ(container.size(), 0);
    container.addElement(1);
    container.addElement(2);

    CHECK_EQ(container.size(), 2);
    container.removeElement(2);
    CHECK_EQ(container.size(), 1);
    container.removeElement(1);
    CHECK_EQ(container.size(), 0);
    CHECK_THROWS(container.removeElement(12));
}
TEST_CASE(" 3")
{
    MagicalContainer container;
    MagicalContainer::SideCrossIterator cross(container);
    auto begin = cross.begin();
    auto end = cross.end();
    CHECK(begin == end);
}

TEST_CASE("4")
{
    MagicalContainer container;
    container.addElement(4);
    container.addElement(3);
    container.addElement(1);
    container.addElement(2);
    MagicalContainer::AscendingIterator ascIter(container);

    CHECK_EQ(*ascIter, 1);
    ++ascIter;
    CHECK_EQ(*ascIter, 2);
    ++ascIter;
    CHECK_EQ(*ascIter, 3);
    ++ascIter;
    CHECK_EQ(*ascIter, 4);
}
TEST_CASE(" 5")
{
    MagicalContainer container;
    MagicalContainer::SideCrossIterator cross(container);
    auto begin = cross.begin();
    auto end = cross.end();
    CHECK(begin == end);
}
TEST_CASE("6")
{
    MagicalContainer container;
    container.addElement(3);
    container.addElement(1);
    container.addElement(2);   
    MagicalContainer::SideCrossIterator sCrossIter(container);
    CHECK_EQ(*sCrossIter, 3);
    ++sCrossIter;
    CHECK_EQ(*sCrossIter, 2);
    ++sCrossIter;
    CHECK_EQ(*sCrossIter, 1);
}

TEST_CASE("7")
{
    MagicalContainer container;
    container.addElement(7);
    container.addElement(6);
    container.addElement(3);
    container.addElement(11);   
    MagicalContainer::PrimeIterator primeiter(container);
    CHECK_EQ(*primeiter, 3);
    ++primeiter;
    CHECK_EQ(*primeiter, 7);
    ++primeiter;
    CHECK_EQ(*primeiter, 11);
}

TEST_CASE("8")
{
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(4);
    container.addElement(3);
    MagicalContainer::AscendingIterator ace1(container);
    MagicalContainer::AscendingIterator ace2(container);

    CHECK(ace1 == ace2);
    CHECK_FALSE(ace1 != ace2);
    ++ace1;
    CHECK(ace1 != ace2);
    CHECK_FALSE(ace1 == ace2);
    ++ace2;
    CHECK(ace1 == ace2);
    ++ace1;
    CHECK(ace2 > ace1);
    CHECK(ace1 < ace2);
}

TEST_CASE("9")
{
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(4);
    container.addElement(3);
    MagicalContainer::AscendingIterator ascIter(container);
    MagicalContainer::SideCrossIterator crossIter(container);
    MagicalContainer::PrimeIterator primeIter(container);
    CHECK_NOTHROW(ascIter.begin() );
    CHECK_NOTHROW(ascIter.end() );
    CHECK_NOTHROW(crossIter.begin() );
    CHECK_NOTHROW(crossIter.end() );
    CHECK_NOTHROW(primeIter.begin() );
    CHECK_NOTHROW(primeIter.end() );

}
