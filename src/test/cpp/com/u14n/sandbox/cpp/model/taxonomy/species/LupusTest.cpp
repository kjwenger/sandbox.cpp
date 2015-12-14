/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/Constants.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/regnum/Animalia.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/phylum/Chordata.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/classis/Mammalia.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/ordo/Carnivora.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/familia/Canidae.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/genus/Canis.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/species/Lupus.hpp"

#include <gtest/gtest.h>

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {
namespace species {

class LupusTest : public ::testing::Test {
public:
};

TEST_F(LupusTest, shouldCreateLupus) {
    std::string regnumString("Animalia");
    regnum::Animalia regnum(regnumString);
    std::string phylumString("Chordata");
    phylum::Chordata phylum(phylumString);
    std::string classisString("Mammalia");
    classis::Mammalia classis(classisString);
    std::string ordoString("Carnivora");
    ordo::Carnivora ordo(ordoString);
    std::string familiaString("Canidae");
    familia::Canidae familia(familiaString);
    std::string genusString("Canis");
    genus::Canis genus(genusString);
    std::string speciesName("Lupus");
    species::Lupus species("Lupus");
    EXPECT_EQ(speciesName, species.getName());
    EXPECT_EQ(genusString, genus.getName());
    EXPECT_EQ(genusString, dynamic_cast<genus::Canis&>(species).getName());
    EXPECT_EQ(familiaString, familia.getName());
    EXPECT_EQ(familiaString, dynamic_cast<familia::Canidae&>(species).getName());
    EXPECT_EQ(ordoString, ordo.getName());
    EXPECT_EQ(ordoString, dynamic_cast<ordo::Carnivora&>(species).getName());
    EXPECT_EQ(classisString, classis.getName());
    EXPECT_EQ(classisString, dynamic_cast<classis::Mammalia&>(species).getName());
    EXPECT_EQ(phylumString, phylum.getName());
    EXPECT_EQ(phylumString, dynamic_cast<phylum::Chordata&>(species).getName());
    EXPECT_EQ(regnumString, regnum.getName());
    EXPECT_EQ(regnumString, dynamic_cast<regnum::Animalia&>(species).getName());
    std::string newName("Canis Lupus");
    species.setName(newName);
    EXPECT_EQ(newName, species.getName());
}

} // namespace species
} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

