#ifndef FIREMAGE_HPP
# define FIREMAGE_HPP

#include <memory>
#include "ICast.hpp"
#include "IMageCreator.hpp"

class FireMage : public IMageCreator {
public:
    std::unique_ptr<ICast> createCast() const override;
};

#endif