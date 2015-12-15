/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/Named.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {

Named::Named(std::string newName)
        : name(newName) {

}

const std::string& Named::getName() const {
    return name;
}
void Named::setName(const std::string& newName) {
    name.assign(newName);
}

} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

