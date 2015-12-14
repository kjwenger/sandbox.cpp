/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/ordo/Carnivora.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {
namespace ordo {

Carnivora::Carnivora(std::string newName)
        : name(newName) {

}

const std::string& Carnivora::getName() const {
    return name;
}

void Carnivora::setName(const std::string& newName) {
    name.assign(newName);
}

} // namespace ordo
} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

