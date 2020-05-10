#include "gtest/gtest.h"
#include "test_vector.h"
#include "test_fileio.h"
#include "test_ppm.h"

TEST(Vector3Operation, Vector3Inization)
{
    ASSERT_EQ(TestInizationVector3(), true);
}

TEST(Vector3Operation, Vector3Operation)
{
    ASSERT_EQ(TestOperationVector3(), true);
}

TEST(FileOutputTest, WriteFileTest)
{
     ASSERT_EQ(WriteFileTest(), true);
}

TEST(FileInputTest, ReadFIle)
{
     ASSERT_EQ(ReadFileTest(), true);
}

TEST(TESTPPMWrite, PPMOutput)
{
     ASSERT_EQ(TestWritePpm(), true);
}
