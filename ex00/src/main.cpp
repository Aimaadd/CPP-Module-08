#include "../includes/easyfind.hpp"

int main() {
    std::cout << "--- easy find on vectors" << std::endl;
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    try {
        std::vector<int>::iterator it = easyfind(v, 3);
        std::cout << "Found: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Not found" << std::endl;
    }
    try {
        std::cout << "Trying to find a value that is not in the container..." << std::endl;
        std::vector<int>::iterator it = easyfind(v, 6);
        std::cout << "Found: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Not found" << std::endl;
    }
    std::cout << "--- easy find on deque" << std::endl;
    std::deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    try {
        std::deque<int>::iterator it = easyfind(d, 3);
        std::cout << "Found: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Not found" << std::endl;
    }
    try {
        std::cout << "Trying to find a value that is not in the container..." << std::endl;
        std::deque<int>::iterator it = easyfind(d, 6);
        std::cout << "Found: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Not found" << std::endl;
    }
    std::cout << "--- easy find on list" << std::endl;
    std::list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    try {
        std::list<int>::iterator it = easyfind(l, 3);
        std::cout << "Found: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Not found" << std::endl;
    }
    try {
        std::cout << "Trying to find a value that is not in the container..." << std::endl;
        std::list<int>::iterator it = easyfind(l, 6);
        std::cout << "Found: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << "Not found" << std::endl;
    }
    return 0;
}