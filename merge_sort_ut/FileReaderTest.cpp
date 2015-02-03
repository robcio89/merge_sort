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