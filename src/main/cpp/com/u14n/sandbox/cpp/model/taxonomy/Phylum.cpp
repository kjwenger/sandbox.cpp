/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/Phylum.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {

Phylum::Phylum(Regnum& newRegnum, std::string newName)
        : regnum(newRegnum)
        , name(newName) {

}

const std::string& Phylum::getName() const {
    return name;
}

void Phylum::setName(const std::string& newName) {
    name.assign(newName);
}

const Regnum& Phylum::getRegnum() const {
    return regnum;
}

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

