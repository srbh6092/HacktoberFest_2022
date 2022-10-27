int Solution::climbStairs(int A)
{
  if (A <= 1)
    return A;

  int a = 1, b = 1, c;
  for (int i = 2; i <= A; i++)
  {
    c = a + b;
    a = b;
    b = c;
  }
  return b;
}
