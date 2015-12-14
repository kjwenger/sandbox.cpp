/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/taxonomy/familia/Canidae.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {
namespace familia {

Canidae::Canidae(std::string newName)
        : name(newName) {

}

const std::string& Canidae::getName() const {
    return name;
}

void Canidae::setName(const std::string& newName) {
    name.assign(newName);
}

} // namespace familia
} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

