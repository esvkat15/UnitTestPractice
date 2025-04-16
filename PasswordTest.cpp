/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, two_leading_a)
{
	Password my_password;
	ASSERT_EQ( 2, my_password.count_leading_characters("aab") );
}

TEST(PasswordTest, cap_low_stuff)
{
	Password my_password;
	ASSERT_EQ( 1, my_password.count_leading_characters("AaB") );
}

TEST(PasswordTest, low_cap_stuff)
{
	Password my_password;
	ASSERT_EQ( 1, my_password.count_leading_characters("aAb") );
}

TEST(PasswordTest, empty_str)
{
	Password my_password;
	ASSERT_EQ( 0, my_password.count_leading_characters("") );
}