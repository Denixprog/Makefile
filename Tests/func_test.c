#include <ctest.h>
#include <def.h>

CTEST(func_pack, err)
{
	double x0, x1, dis;
	const double a = 0, b = 0, c = 0;
	const double ret = solve(a, b, c, &x0, &x1, &dis);
	const double expected_ret = -1;

	ASSERT_EQUAL(expected_ret, ret);
}

CTEST(func_pack, neg_d)
{
	double x0, x1, dis;
	const double a = 3, b = 1, c = 5;
	const double ret = solve(a ,b, c, &x0, &x1, &dis);
	const double expected_ret = 0;
	const double expected_d = -59;

	ASSERT_DBL_NEAR(expected_d, dis);
	ASSERT_EQUAL(expected_ret, ret);
}

CTEST(func_pack, t_roots)
{
	double x0, x1, dis;
	const double a = 1, b = -1, c = -2;
	const double ret = solve(a, b, c, &x0, &x1, &dis);
	const double expected_ret = 2;
	const double expected_d = 9;
	const double expected_x0 = 2;
	const double expected_x1 = -1;

	ASSERT_DBL_NEAR(expected_d, dis);
	ASSERT_EQUAL(expected_ret, ret);
	ASSERT_DBL_NEAR(expected_x0, x0);
	ASSERT_DBL_NEAR(expected_x1, x1);
}
CTEST(func_pack, o_root)
{
	double x0, x1, dis;
	const double a = 1, b = 2, c = 1;
	const double ret = solve(a, b, c, &x0, &x1, &dis);
	const double expected_ret = 1;
	const double expected_d = 0;
	const double expected_x0 = -1;

	ASSERT_EQUAL(expected_ret, ret);
	ASSERT_DBL_NEAR(expected_d, dis);
	ASSERT_DBL_NEAR(expected_x0, x0);
}