#include "coredump_mgmt.c"

int main(){
    return 0;

}


TEST(QueueUnitTest, ResetTest)
{
    EXPECT_EQ(COREDUMP_STATUS_SUCCESS, coredump_initialize());
}
