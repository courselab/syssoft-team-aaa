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

#include "stdio.h"

void show_rtc() {
  unsigned short rtc = read_rtc();

  char rtc_str[8];
  
  short i = 7;
  while (i--){
    rtc_str[i] = (rtc % 10) + '0';
    rtc /= 10;
  }
  rtc_str[7] = '\0';

  printf(rtc_str);
}

int main(void)   
{
  printf ("Hello World\n");
  show_rtc();
  return 0;
}

