#include "MagicalContainer.hpp"
using namespace ariel;

bool MagicalContainer::PrimeIterator::isPrime(int num)
{
      if (num <=1)return false;
    if (num == 2)return true;
    for (int i = 2; i * i <= num; i++)
    {
        if ((num % i) == 0)
        {

            return false;
        }
    }

    return true;
}

MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator=(const PrimeIterator& other)
{
    if(this != &other)
    {
        container = other.container;
        index = other.index;
    }
    return *this;
}

int MagicalContainer::PrimeIterator::operator*()
{
    return index;
}

bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator& other) const
{
    return index == other.index;
}

bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator& other) const
{
    return index != other.index;
}

bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator& other) const
{
    return index < other.index;
}

bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator& other) const
{
    return index > other.index;
}


MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator++()
{
    ++index;
    return *this;
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin()
{
    return PrimeIterator(*this);
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end()
{
    index = container.elements.size();
    return *this;
}