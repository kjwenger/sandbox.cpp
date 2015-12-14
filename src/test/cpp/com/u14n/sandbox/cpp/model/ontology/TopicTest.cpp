/**
 * @author Klaus Wenger
 * @date 2015-12-14
 */

#include "com/u14n/sandbox/cpp/Constants.hpp"
#include "com/u14n/sandbox/cpp/model/ontology/Topic.hpp"

#include <gtest/gtest.h>

namespace com {
namespace u14n {
namespace sandbox {
namespace cpp {
namespace model {
namespace ontology {

class TopicTest : public ::testing::Test {
public:
};

TEST_F(TopicTest, shouldCreateTopic) {
    Topic topic;
    EXPECT_EQ(Constants::STRING_EMPTY(), topic.getName());
    std::string newName("Topic");
    topic.setName(newName);
    EXPECT_EQ(newName, topic.getName());
}

} // namespace ontology
} // namespace model
} // namespace cpp
} // namespace sandbox
} // namespace u14n
} // namespace com

