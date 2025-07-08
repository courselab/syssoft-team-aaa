/*
 *    SPDX-FileCopyrightText: 2021 Monaco F. J. <monaco@usp.br>
 *    SPDX-FileCopyrightText: 2025 chonkachu <chrissimascgr@gmail.com>
 *   
 *    SPDX-License-Identifier: GPL-3.0-or-later
 *
 *  This file is a derivative of SYSeg (https://gitlab.com/monaco/syseg)
 *  and includes modifications made by the following author(s):
 *  chonkachu <chrissimascgr@gmail.com>
 */

#include <stdio.h>

int foo();
char bar();

int main()
{
  foo();
  return 0;
}

int foo(int n)
{
  int a;
  a = bar(n+1);
  return a;
}

char bar(int m)
{
  int b;
  b = m+1;
  return b;
}
