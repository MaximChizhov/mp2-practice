#include "Monom.h"

#include <gtest.h>


//Default
TEST(TMonom, create_monom_test)
{
	ASSERT_NO_THROW(TMonom monom());
}
//Parametr test
TEST(TMonom, default_constructor_test)
{
	ASSERT_NO_THROW(TMonom monom(3, 145));
}
//Coef test
TEST(TMonom, return_coef_test)
{
	TMonom monom(3, 145);
	double k = monom.GetCoef();
	EXPECT_EQ(3, k);
}
//Degree test
TEST(TMonom, return_degree_test)
{
	TMonom monom(3, 145);
	int k = monom.GetDegree();
	EXPECT_EQ(145, k);
}
//Operator >
TEST(TMonom, operation_more_test_true)
{
	TMonom monom(3, 145);
	TMonom monom2(5, 346);
	ASSERT_TRUE(monom2 > monom);
}
TEST(TMonom, operation_more_test_false)
{
	TMonom monom(3, 145);
	TMonom monom2(5, 346);
	ASSERT_FALSE(monom > monom2);
}
//Operator <
TEST(TMonom, operation_less_test_true)
{
	TMonom monom(3, 145);
	TMonom monom2(5, 346);
	ASSERT_TRUE(monom < monom2);
}
TEST(TMonom, operation_less_test_false)
{
	TMonom monom(3, 145);
	TMonom monom2(5, 346);
	ASSERT_FALSE(monom2 < monom);
}
//Operator ==
TEST(TMonom, operation_equality_test_true)
{
	TMonom monom(3, 145);
	TMonom monom2(5, 145);
	ASSERT_TRUE(monom2 == monom);
}
TEST(TMonom, operation_equality_test_false)
{
	TMonom monom(3, 145);
	TMonom monom2(5, 346);
	ASSERT_FALSE(monom == monom2);
}
//Operator !=
TEST(TMonom, operation_inequality_test_true)
{
	TMonom monom(3, 145);
	TMonom monom2(5, 346);
	ASSERT_TRUE(monom2 != monom);
}
TEST(TMonom, operation_inequality_test_false)
{
	TMonom monom(3, 145);
	TMonom monom2(5, 145);
	ASSERT_FALSE(monom != monom2);
}
//GetCoef
TEST(TMonom, get_coef_test)
{
	TMonom monom(3, 145);
	double k = monom.GetCoef();
	EXPECT_EQ(3, k);
}
//GetDegree
TEST(TMonom, get_degree_test)
{
	TMonom monom(3, 145);
	int d = monom.GetDegree();
	EXPECT_EQ(145, d);
}
//SetCoef
TEST(TMonom, set_coef_test)
{
	TMonom monom(3, 145);
	monom.SetCoef(6);
	double k = monom.GetCoef();
	EXPECT_EQ(6, k);
}