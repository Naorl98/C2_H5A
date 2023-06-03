#include "MagicalContainer.hpp"
using namespace ariel;

MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator& other)
{
    if(this != &other)
    {
        container = other.container;
        index = other.index;
    }
    return *this;
}
int MagicalContainer::SideCrossIterator::operator*()
{
    return index;
}

bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator& other) const
{
    return index == other.index;
}

bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator& other) const
{
    return index != other.index;
}

bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator& other) const
{
    return index < other.index;
}

bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator& other) const
{
    return index > other.index;
}



MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator++()
{
    ++index;
    return *this;
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin()
{
    return SideCrossIterator(*this);
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end()
{
    index = container.elements.size();
    return *this;
}