#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <array>



class Span {
    private:
        unsigned int                _size;
        std::vector<unsigned int>   _tab;
    public:
        Span();
        ~Span();
        Span(unsigned int size);
        Span(Span const &src);
        Span& operator=(Span const &src);
        void addNumber(int num);
        void displayTab(); //debug tool
        int longestSpan();
        int shortestSpan();
};

#endif