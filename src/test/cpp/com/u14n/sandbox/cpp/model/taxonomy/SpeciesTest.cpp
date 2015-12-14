/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/Constants.hpp"
#include "com/u14n/sandbox/cpp/model/taxonomy/Species.hpp"

#include <gtest/gtest.h>

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace taxonomy {

class SpeciesTest : public ::testing::Test {
public:
};

TEST_F(SpeciesTest, shouldCreateSpecies) {
    std::string regnumString("Animalia");
    Regnum regnum(regnumString);
    std::string phylumString("Chordata");
    Phylum phylum(regnum, phylumString);
    std::string classisString("Mammalia");
    Classis classis(phylum, classisString);
    std::string ordoString("Carnivora");
    Ordo ordo(classis, ordoString);
    std::string familiaString("Canidae");
    Familia familia(ordo, familiaString);
    std::string genusString("Canis");
    Genus genus(familia, genusString);
    std::string speciesName("Lupus");
    Species species(genus, "Lupus");
    EXPECT_EQ(speciesName, species.getName());
    EXPECT_EQ(genusString, genus.getName());
    EXPECT_EQ(genusString, species
            .getGenus().getName());
    EXPECT_EQ(familiaString, familia.getName());
    EXPECT_EQ(familiaString, species
            .getGenus()
            .getFamilia().getName());
    EXPECT_EQ(ordoString, ordo.getName());
    EXPECT_EQ(ordoString, species
            .getGenus()
            .getFamilia()
            .getOrdo().getName());
    EXPECT_EQ(classisString, classis.getName());
    EXPECT_EQ(classisString, species
            .getGenus()
            .getFamilia()
            .getOrdo()
            .getClassis().getName());
    EXPECT_EQ(phylumString, phylum.getName());
    EXPECT_EQ(phylumString, species
            .getGenus()
            .getFamilia()
            .getOrdo()
            .getClassis()
            .getPhylum().getName());
    EXPECT_EQ(regnumString, regnum.getName());
    EXPECT_EQ(regnumString, species
            .getGenus()
            .getFamilia()
            .getOrdo()
            .getClassis()
            .getPhylum()
            .getRegnum().getName());
    std::string newName("Canis Lupus");
    species.setName(newName);
    EXPECT_EQ(newName, species.getName());
}

} // namespace taxonomy
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com
