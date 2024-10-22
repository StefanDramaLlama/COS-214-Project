#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Block.h"
#include "Visitor.h"

TEST_CASE("Block class unit tests") {
    // Create a Block object
    Block block;

    // Test addSection()
    Section* section1;
    Section* section2;
    block.addSection(section1);
    block.addSection(section2);
    CHECK(block.getSection(0) == section1);
    CHECK(block.getSection(1) == section2);

    // Test removeSection()
    block.removeSection(section1);
    CHECK(block.getSection(0) == section2);
    CHECK(block.getSection(1) == nullptr);

    // Test getSection() with invalid index
    CHECK(block.getSection(-1) == nullptr);
    CHECK(block.getSection(100) == nullptr);
}