/*

Author: Grant Broadwater
Date: November 15, 2016

*/

int sum(const int* a, const int start, const int end)
{
  int i;
  int sum = 0;

  for(i=start; i<=end; i++)
    sum += a[i];

  return sum;
}

int max(const int x, const int y)
{
  return (x > y) ? x : y;
}

int getLargestPossibleScore(const int* a, const int i, const int j)
{
  int s;

  if (i > j)
    return 0;

  s = sum(a, i, j);

  return max( (s - getLargestPossibleScore(a, i+1, j)),
              (s - getLargestPossibleScore(a, i, j-1)) );
}
