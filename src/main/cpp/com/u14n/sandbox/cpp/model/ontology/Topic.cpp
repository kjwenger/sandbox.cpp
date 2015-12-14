/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/ontology/Topic.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace ontology {

Topic::Topic(std::string newName)
    : name(newName) {

}

const std::string& Topic::getName() const {
    return name;
}

void Topic::setName(const std::string& newName) {
    name.assign(newName);
}

} // namespace ontology
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

