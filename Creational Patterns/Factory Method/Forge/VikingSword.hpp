#ifndef VIKINGSWORD_HPP
# define VIKINGSWORD_HPP

#include <string>
#include "ISword.hpp"

class VikingSword : public ISword {
public:
    std::string getType() const override;
};

#endif