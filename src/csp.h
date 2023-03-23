#ifndef CSP_H
#define CSP_H

#include <vector>

template <class T>
class Variable {
    private:
    T value;
    std::vector<T> domain;

    public:
    int assign();
    int get_value();
    int is_assigned();
    std::vector<T> domain();
    int reduce_domain(std::vector<T>);
};

template <class T>
class Constraint {
    private:
    std::vector<Variable<T>> scope;

};

#endif