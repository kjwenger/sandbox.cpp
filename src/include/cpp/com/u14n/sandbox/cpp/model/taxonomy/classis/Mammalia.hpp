/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#pragma once

#include "com/u14n/sandbox/cpp/Constants.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/phylum/Chordata.hpp"

#include <string>

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {
namespace classis {

class Mammalia : public phylum::Chordata {
public:
    Mammalia(std::string newName = std::string("Mammalia"));

    const std::string& getName() const;

    void setName(const std::string& newName);

private:
    std::string name;
};

} // namespace classis
} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com
