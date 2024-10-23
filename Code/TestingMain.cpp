#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Block.h"
#include "Visitor.h"
#include "Section.h"
#include "Buildings.h"
#include "Hospital.h"
#include "Visitor.h"
#include "CVisitor.h"

TEST_CASE("Composite") {
    Section* test = new Block();
    Section* test2 = new Block();

    Section* building1 = new Hospital();

    test->addSection(building1);
    test2->addSection(building1);

    test->addSection(test2);

    CHECK(test->getSection(0) == building1);
    CHECK(test->getSection(1) == test2);

    test->removeSection(test2);

    CHECK(test->getSection(1) == nullptr);
}

TEST_CASE("Visitor")
{
    Section* test = new Block();
    Section* test2 = new Block();

    Section* building1 = new Hospital();

    test->addSection(building1);
    test->addSection(building1);

    Visitor* vis = new CVisitor();

    test->acceptVisitor(vis);
}