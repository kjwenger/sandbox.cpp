/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/phylum/Chordata.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {
namespace phylum {

Chordata::Chordata(std::string newName)
        : name(newName) {

}

const std::string& Chordata::getName() const {
    return name;
}

void Chordata::setName(const std::string& newName) {
    name.assign(newName);
}

} // namespace phylum
} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

