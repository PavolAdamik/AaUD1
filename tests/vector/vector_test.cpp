#include "vector_test.h"
#include "../../structures/vector/vector.h"

namespace tests
{
// VectorTestInterface:

    VectorTestInterface::VectorTestInterface() :
        SimpleTest("Interface")
    {
    }

    void VectorTestInterface::test()
    {
        structures::Vector* vector = new structures::Vector(10);
        vector->size();
        vector->assign(*vector);
        vector->equals(*vector);
        vector->at(0);
        vector->getBytePointer(0);
        //structures::Vector::copy(*vector, 0, *vector, 0, 1);
        delete vector;
        SimpleTest::logPass("Compiled.");
    }

    //vectorTestAt:

    VectorTestAt::VectorTestAt():
        SimpleTest("Vector test at")
    {
    }

    void VectorTestAt::test()
    {
        SimpleTest::logInfo("Funguje!");
    }


// VectorTestOverall:

    VectorTestOverall::VectorTestOverall() :
        ComplexTest("Vector")
    {
        addTest(new VectorTestInterface());
        addTest(new VectorTestAt());
    }
}