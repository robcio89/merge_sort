// This header file defines the public API for Google Test.
//It should be included by any test program that uses Google Test.
#include "gtest/gtest.h"
#include "..\merge_sort_code\FileReader.h"

//#include "..\Calc\Calc.h"

/* TEST(test_case_name, test_name) is a predefined macro. 
   These are ordinary C++ functions that don't return a value. 
   In this function, along with any valid C++ statements you want to include, 
   use the various Google Test assertions to check values. 
   The test's result is determined by the assertions; 
   if any assertion in the test fails (either fatally or non-fatally), 
   or if the test crashes, the entire test fails. Otherwise, it succeeds.
*/
TEST(aaa, readFile)
{
	FileReader f;

	std::vector<int> nums;
	std::string path = "D:\\projects\\merge_sort\\gistfile1.txt";
	nums = f.read_file_content("D:\\projects\\merge_sort\\gistfile1.txt");

	EXPECT_TRUE(nums.size() != 0);
}

TEST(aaa, sum_elements)
{
	FileReader f;

	std::vector<int> nums;
	std::string path = "D:\\projects\\merge_sort\\gistfile1.txt";
	nums = f.read_file_content("D:\\projects\\merge_sort\\gistfile1.txt");
	
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