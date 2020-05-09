#include "gtest/gtest.h"
#include "test_vector.h"



TEST(Vector3Operation, Vector3Inization)
{
    ASSERT_EQ(TestInizationVector3(), true);
}

TEST(Vector3Operation, Vector3Operation)
{
    ASSERT_EQ(TestOperationVector3(), true);
}