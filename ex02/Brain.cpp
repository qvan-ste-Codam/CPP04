#include "Brain.hpp"

#include <iostream>

Brain::Brain() { std::cout << "Created brain" << std::endl; }

Brain::Brain(const Brain& other) {
    std::cout << "Created brain" << std::endl;
    this->copyIdeas(other);
}

Brain::~Brain() { std::cout << "Deleted brain" << std::endl; }

Brain& ::Brain::operator=(const Brain & other) {
    if (this != &other) {
        this->copyIdeas(other);
    }
    return *this;
}

void Brain::copyIdeas(const Brain& other) {
    for (size_t i = 0; i < numOfIdeas; ++i) {
        this->ideas[i] = other.ideas[i];
    }
}

const std::string& Brain::getIdea(size_t i) const {
    if (i > numOfIdeas) {
        throw std::invalid_argument("Index out of bounds");
    }
    return this->ideas[i];
}

void Brain::setIdea(size_t i, const std::string& idea) {
    if (i > numOfIdeas) {
        throw std::invalid_argument("Index out of bounds");
    }
    this->ideas[i] = idea;
}

const std::string createRandomString() {
    static const char chars[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    std::string ret;
    ret.resize(10);
    for (int i = 0; i < 10; ++i) {
        ret += chars[rand() % (sizeof(chars) - 1)];
    }
    return ret;
}

void Brain::createRandomIdeas() {
    for (size_t i = 0; i < numOfIdeas; ++i) {
        this->setIdea(i, createRandomString());
    }
}
