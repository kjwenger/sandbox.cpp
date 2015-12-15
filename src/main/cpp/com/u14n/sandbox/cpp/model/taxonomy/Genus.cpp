/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/Genus.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Familia.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Species.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {

Genus::Genus(Familia& newFamilia, std::string newName)
        : Branch<Familia, Species>(newFamilia, newName) {
    getFork().addProng(*this);
}
Genus::~Genus() {
    getFork().removeProng(*this);
}

Familia& Genus::getFamilia() {
    return getFork();
}

const std::vector<std::reference_wrapper<Species> >& Genus::getSpecies() const {
    return getProngs();
}

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

