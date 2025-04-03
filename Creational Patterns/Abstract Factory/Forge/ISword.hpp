#ifndef ISWORD_HPP
# define ISWORD_HPP

#include <string>

class ISword {
public:
    virtual ~ISword() {}
    virtual std::string getType() const = 0;
};
#endif