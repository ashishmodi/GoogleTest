#include <iostream>
#include <gtest/gtest.h>

using namespace std;

// {build,Build,BUILD,out,Out,OUT}/**/*{test,Test,TEST}*
TEST(TestSum, subtest1) {
    ASSERT_TRUE(2+5 == 7);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv); 
    cout << "Welcome to Google test" << endl;
    return RUN_ALL_TESTS();
}