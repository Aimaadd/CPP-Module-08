#include "../includes/Span.hpp"

Span::Span() : _size(0), _tab(0) {
    std::cout << "Span default constructor called" << std::endl;
}

Span::~Span() {
    std::cout << "Span destructor called" << std::endl;
}

Span::Span(unsigned int size) {
    this->_size = size;
    std::cout << "Span constructor called" << std::endl;
}

Span::Span(const Span &src) : _size(src._size), _tab(src._tab) {
    std::cout << "Span copy constructor called" << std::endl;
}

Span& Span::operator=(Span const &src) {
    this->_size = src._size;
    this->_tab = src._tab;
    return *this;
}

void Span::addNumber(int num) {
    if (this->_tab.size() < this->_size) {
        this->_tab.push_back(num);
    } else {
        throw std::exception();
    }
}

void Span::displayTab() {
    std::cout << "-- tab content : " << std::endl;
    if (this->_tab.size() == 0) {
        std::cout << "empty tab" << std::endl;
    }
    for (std::vector<unsigned int>::iterator it = this->_tab.begin(); it != this->_tab.end(); it++) {
        std::cout << *it << std::endl;
    }
}

int Span::longestSpan() {
    if (this->_tab.size() <= 1) {
        throw std::exception();
    }
    std::vector<unsigned int> sorted_tab = this->_tab;
    std::sort(sorted_tab.begin(), sorted_tab.end());
    return sorted_tab.back() - sorted_tab.front();
}

int Span::shortestSpan() {
    if (this->_tab.size() <= 1) {
        throw std::exception();
    }
    std::vector<unsigned int> sorted_tab = this->_tab;
    std::sort(sorted_tab.begin(), sorted_tab.end());
    unsigned int shortest = sorted_tab[1] - sorted_tab[0];
    for (std::vector<unsigned int>::iterator it = sorted_tab.begin(); it != sorted_tab.end(); it++) {
        if (it + 1 != sorted_tab.end()) {
            if ((*(it + 1) - *it) < shortest) {
                shortest = *(it + 1) - *it;
            }
        }
    }
    return shortest;
}