/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#pragma once

#include "com/u14n/sandbox/cpp/Constants.hpp"
#include "com/u14n/sandbox/cpp/model/Branch.hpp"

#include <string>

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {

class Familia;
class Species;

class Genus : public Branch<Familia, Species> {
public:
    Genus(Familia& newFamilia,
           std::string newName = Constants::STRING_EMPTY());
    virtual ~Genus();

    Familia& getFamilia();

    const std::vector<std::reference_wrapper<Species> >& getSpecies() const;
};

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com
