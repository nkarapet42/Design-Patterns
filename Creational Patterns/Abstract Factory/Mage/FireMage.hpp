#ifndef FIREMAGE_HPP
# define FIREMAGE_HPP

#include <memory>
#include "ICast.hpp"
#include "IZoneCast.hpp"
#include "IShieldCast.hpp"
#include "IMageCreator.hpp"

class FireMage : public IMageCreator {
public:
    std::unique_ptr<ICast> createCast() const override;
    std::unique_ptr<IShieldCast> createShieldCast() const override;
    std::unique_ptr<IZoneCast> createZoneCast() const override;
};

#endif