/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/Classis.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Phylum.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Ordo.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {

Classis::Classis(Phylum& newPhylum, std::string newName)
        : Branch<Phylum, Ordo>(newPhylum, newName) {
    Pronged<Phylum>::getFork().addProng(*this);
}
Classis::~Classis() {
    Pronged<Phylum>::getFork().removeProng(*this);
}

Phylum& Classis::getPhylum() {
    return getFork();
}

const std::vector<std::reference_wrapper<Ordo> >& Classis::getOrdines() const {
    return getProngs();
}

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

