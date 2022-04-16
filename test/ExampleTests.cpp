#include"../Example.hpp"
#include<gtest\gtest.h>

int arr[] = {1,2,3,4,5,6,7,8};

bool f()
{
    return true;
}

TEST(ExampleTest,DemostrateGTestMacros){
    const bool res = f();
    EXPECT_EQ(true,res);
}


TEST(ExampleTests,SQUARE)
{
    int x = 5;
    int expected_square = x*x;
    EXPECT_EQ(
        expected_square,
        square(x)
        );
}

TEST(chk_arr,ARC)
{
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len; i++)
    {
        EXPECT_EQ(
            arr[i],i+1
        );
    }
}