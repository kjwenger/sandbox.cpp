/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/model/Root.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Phylum.hpp"

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {

template <class Child> Root<Child>::Root(std::string newName)
        : Named(newName) {

}
template <class Child> Root<Child>::~Root() {

}

template class Root<taxonomy::Phylum>;

} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

