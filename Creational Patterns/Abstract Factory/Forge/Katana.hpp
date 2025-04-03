#ifndef KATANA_HPP
# define KATANA_HPP

#include <string>
#include "ISword.hpp"

class Katana : public ISword {
public:
    std::string getType() const override;
};

#endif