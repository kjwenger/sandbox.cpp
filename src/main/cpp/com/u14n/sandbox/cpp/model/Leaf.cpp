/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/Leaf.hpp"
#include "com/u14n/sandbox/cpp/model/Forked.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Genus.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {

template <class Parent> Leaf<Parent>::Leaf(
    Parent& newParent, std::string newName)
        : Named(newName)
        , Pronged<Parent>(newParent) {

}
template <class Parent> Leaf<Parent>::~Leaf() {

}

template class Leaf<taxonomy::Genus>;

} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

