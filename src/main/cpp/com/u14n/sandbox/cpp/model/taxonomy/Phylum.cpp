/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/Phylum.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Regnum.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Classis.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {

Phylum::Phylum(Regnum& newRegnum, std::string newName)
        : Branch<Regnum, Classis>(newRegnum, newName) {
    getFork().addProng(*this);
}
Phylum::~Phylum() {
    getFork().removeProng(*this);
}

Regnum& Phylum::getRegnum() {
    return getFork();
}

const std::vector<std::reference_wrapper<Classis> >& Phylum::getClasses() const {
    return getProngs();
}

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

