#ifndef IMAGECREATOR_HPP
# define IMAGECREATOR_HPP

#include "ICast.hpp"
#include <memory>

class IMageCreator {
public:
    virtual ~IMageCreator() {}
    virtual std::unique_ptr<ICast> createCast() const = 0;
};

#endif