#ifndef IMAGECREATOR_HPP
# define IMAGECREATOR_HPP

#include "ICast.hpp"
#include "IShieldCast.hpp"
#include "IZoneCast.hpp"
#include <memory>

class IMageCreator {
public:
    virtual ~IMageCreator() {}
    virtual std::unique_ptr<ICast> createCast() const = 0;
    virtual std::unique_ptr<IShieldCast> createShieldCast() const = 0;
    virtual std::unique_ptr<IZoneCast> createZoneCast() const = 0;
};

#endif