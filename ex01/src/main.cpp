#include "../includes/Span.hpp"

int main() {
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    sp.displayTab();
    std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
    std::cout << "longest span : " << sp.longestSpan() << std::endl;
    return 0;
}