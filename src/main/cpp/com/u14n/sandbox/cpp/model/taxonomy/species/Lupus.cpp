/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/species/Lupus.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {
namespace species {

Lupus::Lupus(std::string newName)
        : name(newName) {

}

const std::string& Lupus::getName() const {
    return name;
}

void Lupus::setName(const std::string& newName) {
    name.assign(newName);
}

} // namespace species
} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

