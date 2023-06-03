#include "MagicalContainer.hpp"
using namespace ariel;

void MagicalContainer::addElement(int element)
{
    this->elements.emplace_back(element);
    auto iter = std::lower_bound(sortElement.begin(), sortElement.end(), element);
    sortElement.insert(iter, element);
}

void MagicalContainer::removeElement(int element)
{

}

size_t MagicalContainer::size() const{
    return elements.size();
}

