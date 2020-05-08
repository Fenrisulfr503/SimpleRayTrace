#include "gtest/gtest.h"
#include "Vector3.h"


// int main()
// {
//     Table a;
//     a.displayTable();
//     a = Table();
// }

TEST(TESTA, SUBTEST)
{
	Vector3 vec0{ 1, 2, 3 };
	vec0 = vec0 + vec0;
    ASSERT_EQ(vec0.x, 2);
}