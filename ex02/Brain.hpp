#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
class Brain {
   public:
    Brain();
    Brain(const Brain &other);
    ~Brain();

    Brain &operator=(const Brain &other);

    const std::string &getIdea(size_t i) const;
    void createRandomIdeas();

   private:
    const static unsigned int numOfIdeas = 100;
    std::string ideas[numOfIdeas];

    void copyIdeas(const Brain &other);
    void setIdea(size_t i, const std::string &idea);
};

#endif
