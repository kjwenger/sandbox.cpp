/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#pragma once

#include "com/u14n/sandbox/cpp/Constants.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/familia/Canidae.hpp"

#include <string>

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {
namespace genus {

class Canis : public familia::Canidae {
public:
    Canis(std::string newName = std::string("Canis"));

    const std::string& getName() const;

    void setName(const std::string& newName);

private:
    std::string name;
};

} // namespace genus
} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com
