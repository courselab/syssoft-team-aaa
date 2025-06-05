#    SPDX-FileCopyrightText: 2025 chonkachu <chrissimascgr@gmail.com>
#   
#    SPDX-License-Identifier: GPL-3.0-or-later
#
#  This file is a derivative of SYSeg (https://gitlab.com/monaco/syseg)
#  and includes modifications made by the following author(s):
#  chonkachu <chrissimascgr@gmail.com>

	/* Suppose we receive the argument in %cx. */

	.code16gcc
	.global printf
    .global read_rtc

	.section .text
	
printf:	

	mov   %cx, %bx
	
        mov   $0x0e,%ah               
        mov   $0x0, %si               
loop:                                 
        mov   (%bx, %si), %al           
        cmp   $0x0, %al               
        je    end                    
        int   $0x10                   
        add   $0x1, %si               
        jmp   loop                    
end:
        mov %si, %ax
        ret
read_rtc:
        mov $0x00,%ah
        int $0x1a
        mov %dh,%ah
        ret
