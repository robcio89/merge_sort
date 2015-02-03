#include "gtest/gtest.h"
#include "..\merge_sort_code\FileReader.h"

TEST(aaa, readFile)
{
	FileReader f;

	std::vector<int> nums;
	std::string path = "..\\gistfile1.txt";
	nums = f.read_file_content("..\\gistfile1.txt");

	EXPECT_TRUE(nums.size() != 0);
}

TEST(aaa, sum_elements)
{
	FileReader f;

	std::vector<int> nums;
	std::string path = "..\\gistfile1.txt";
	nums = f.read_file_content("..\\gistfile1.txt");
	
	EXPECT_EQ(5000050000, f.get_sum(nums));
}

//TEST(aaa, sum_elements)
//{
	//no inversions
	//2507223936
//}

int main(int argc, char* argv[])
{
   /*The method is initializes the Google framework and must be called before RUN_ALL_TESTS */
   ::testing::InitGoogleTest(&argc, argv);

   /*RUN_ALL_TESTS automatically detects and runs all the tests defined using the TEST macro. 
   It's must be called only once in the code because multiple calls lead to conflicts and, 
   therefore, are not supported.
   */ 
   return RUN_ALL_TESTS();
}