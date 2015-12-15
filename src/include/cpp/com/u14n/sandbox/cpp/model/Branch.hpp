/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#pragma once

#include "com/u14n/sandbox/cpp/Constants.hpp"
#include "com/u14n/sandbox/cpp/model/Named.hpp"
#include "com/u14n/sandbox/cpp/model/Forked.hpp"
#include "com/u14n/sandbox/cpp/model/Pronged.hpp"

#include <string>

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {

template <class Parent, class Child> class Branch
        : public Named, public Forked<Child>, public Pronged<Parent> {
public:
    Branch(Parent& newParent,
           std::string newName = Constants::STRING_EMPTY());
    virtual ~Branch();
};

} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com
