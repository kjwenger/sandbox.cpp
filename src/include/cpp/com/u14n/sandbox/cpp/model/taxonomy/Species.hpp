/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#pragma once

#include "com/u14n/sandbox/cpp/Constants.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Genus.hpp"

#include <string>

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {

class Species {
public:
    Species(Genus& newGenus,
           std::string newName = Constants::STRING_EMPTY());

    const std::string& getName() const;

    void setName(const std::string& newName);

    const Genus& getGenus() const;

private:
    std::string name;
    Genus& genus;
};

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com
