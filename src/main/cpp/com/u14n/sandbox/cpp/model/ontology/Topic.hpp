/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#pragma once

#include "com/u14n/sandbox/cpp/Constants.hpp"

#include <string>

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace ontology {

class Topic {
public:
    Topic(std::string newName = Constants::STRING_EMPTY());
    const std::string& getName() const;
    void setName(const std::string& newName);
private:
    std::string name;
};

} // namespace ontology
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com
