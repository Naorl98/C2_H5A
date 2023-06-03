#pragma once

#include <iostream>
#include <vector>

namespace ariel
{
}
    class MagicalContainer 
    {
        private:
            std::vector<int> elements;
            std::vector<int> sortElement;

        public:
        
            size_t size() const;       
            void addElement(int elem);
            void removeElement(int elem);
            MagicalContainer() {}
            class AscendingIterator
            {
                private:
                    MagicalContainer& container;
                    size_t index;
                public:
                    AscendingIterator(MagicalContainer& container): container(container), index(0) {}
                    AscendingIterator(MagicalContainer& container, size_t index): container(container), index(index) {}
                    AscendingIterator(AscendingIterator& other): container(other.container), index(other.index) {}
                    ~AscendingIterator() = default;
                    AscendingIterator(AscendingIterator&&) noexcept;
                    AscendingIterator& operator=(AscendingIterator&&) noexcept;
                    AscendingIterator& operator=(const AscendingIterator& other);
                    AscendingIterator& operator++();
                    AscendingIterator begin();
                    AscendingIterator end();                   
                    bool operator==(const AscendingIterator& other) const;
                    bool operator!=(const AscendingIterator& other) const;
                    bool operator<(const AscendingIterator& other) const;
                    bool operator>(const AscendingIterator& other) const;
                    int operator*();
            };

            class PrimeIterator
            {
                private:
                    MagicalContainer& container;
                    size_t index;

                public:
                    PrimeIterator(MagicalContainer& container): container(container), index(0) {}  
                    PrimeIterator(MagicalContainer& container, size_t index): container(container), index(index) {}
                    PrimeIterator(const PrimeIterator& other): container(other.container), index(other.index) {}
                    ~PrimeIterator() = default;
                    PrimeIterator(PrimeIterator&&) noexcept;
                    PrimeIterator& operator=(PrimeIterator&&) noexcept;
                    PrimeIterator& operator=(const PrimeIterator& other);                   
                    PrimeIterator begin();
                    PrimeIterator end();
                    PrimeIterator& operator++();
                    bool operator==(const PrimeIterator& other) const;
                    bool operator!=(const PrimeIterator& other) const;
                    bool operator>(const PrimeIterator& other) const;
                    bool operator<(const PrimeIterator& other) const;
                    int operator*();
                    bool isPrime(int num);

            };

            class SideCrossIterator
            {
                private:
                    MagicalContainer& container;
                    size_t index;

                public:
                    SideCrossIterator(MagicalContainer& container): container(container), index(0) {} 
                    SideCrossIterator(MagicalContainer& container, size_t index): container(container), index(index) {}
                    SideCrossIterator(const SideCrossIterator& other): container(other.container), index(other.index) {}
                    ~SideCrossIterator() = default;
                    SideCrossIterator(SideCrossIterator&&) noexcept;
                    SideCrossIterator& operator=(SideCrossIterator&&) noexcept;
                    SideCrossIterator& operator=(const SideCrossIterator& other);
                    SideCrossIterator& operator++();
                    SideCrossIterator begin();
                    SideCrossIterator end();
                    bool operator==(const SideCrossIterator& other) const;
                    bool operator!=(const SideCrossIterator& other) const;
                    bool operator>(const SideCrossIterator& other) const;
                    bool operator<(const SideCrossIterator& other) const;
                    int operator*();
            };
    };