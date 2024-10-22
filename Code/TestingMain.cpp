#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Block.h"
#include "Visitor.h"
#include "Section.h"
#include "Buildings.h"
#include "Hospital.h"

TEST_CASE("Block class unit tests") {
    Section* test = new Block();

    Section* building1 = new Hospital();

    test->addSection(building1);
}