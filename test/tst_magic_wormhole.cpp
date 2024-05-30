
#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

using namespace testing;
extern "C" int add(int a, int b);
extern "C" void hello();
extern "C" const char* send_files(const char** file_paths,
                                size_t length,
                                const char* new_name,
                                size_t code_length);

TEST(magic_wormhole_hello, magic_wormhole)
{
    hello();
    EXPECT_EQ(add(1,2), 3);
    ASSERT_THAT(add(-11,11), Eq(0));
}

TEST(magic_wormhole_send, magic_wormhole)
{
    const char* file_path_1= "F:/MixedProjects/MagicWormhole/QtGUIforMagicWormhole/magic-wormhole.rs/README.md";
    const char** file_paths = &file_path_1;
    const char* new_name= "new_name";
    printf("%s",send_files(file_paths,1,new_name,2));
}


// int main(int argc, char **argv) {
//     ::testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }
