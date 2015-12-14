/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/Species.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {

Species::Species(Genus& newGenus, std::string newName)
        : genus(newGenus)
        , name(newName) {

}

const std::string& Species::getName() const {
    return name;
}

void Species::setName(const std::string& newName) {
    name.assign(newName);
}

const Genus& Species::getGenus() const {
    return genus;
}

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

