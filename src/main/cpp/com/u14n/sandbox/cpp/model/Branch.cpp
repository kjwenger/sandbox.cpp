/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/Branch.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Regnum.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Phylum.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Classis.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Ordo.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Familia.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Genus.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Species.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {

template <class Parent, class Child> Branch<Parent, Child>::Branch(
    Parent& newParent, std::string newName)
        : Named(newName)
        , Forked<Child>()
        , Pronged<Parent>(newParent) {

}
template <class Parent, class Child> Branch<Parent, Child>::~Branch() {

}

template class Branch<taxonomy::Regnum, taxonomy::Classis>;
template class Branch<taxonomy::Phylum, taxonomy::Ordo>;
template class Branch<taxonomy::Classis, taxonomy::Familia>;
template class Branch<taxonomy::Ordo, taxonomy::Genus>;
template class Branch<taxonomy::Familia, taxonomy::Species>;

} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

