/*
psxdefs: PS register/constants definitions

Copyright (c) 2017 Ben "GreaseMonkey" Russell
Copyright (c) 2019 Adrian "asie" Siekierka

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
   claim that you wrote the original software. If you use this software
   in a product, an acknowledgment in the product documentation would be
   appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.
*/

#define CD_CMD_SYNC_XX     0x00
#define CD_CMD_GETSTAT     0x01
#define CD_CMD_SETLOC      0x02
#define CD_CMD_PLAY        0x03
#define CD_CMD_FORWARD     0x04
#define CD_CMD_BACKWARD    0x05
#define CD_CMD_READN       0x06
#define CD_CMD_MOTORON     0x07
#define CD_CMD_STOP        0x08
#define CD_CMD_PAUSE       0x09
#define CD_CMD_INIT        0x0A
#define CD_CMD_MUTE        0x0B
#define CD_CMD_DEMUTE      0x0C
#define CD_CMD_SETFILTER   0x0D
#define CD_CMD_SETMODE     0x0E
#define CD_CMD_GETPARAM    0x0F
#define CD_CMD_GETLOCL     0x10
#define CD_CMD_GETLOCP     0x11
#define CD_CMD_SETSESSION  0x12
#define CD_CMD_GETTN       0x13
#define CD_CMD_GETTD       0x14
#define CD_CMD_SEEKL       0x15
#define CD_CMD_SEEKP       0x16
#define CD_CMD_SETCLOCK_XX 0x17
#define CD_CMD_GETCLOCK_XX 0x18
#define CD_CMD_TEST        0x19
#define CD_CMD_GETID       0x1A
#define CD_CMD_READS       0x1B
#define CD_CMD_RESET       0x1C
#define CD_CMD_GETQ        0x1D
#define CD_CMD_READTOC     0x1E

#define CD_CMD_SECRET_1    0x50
#define CD_CMD_SECRET_2    0x51
#define CD_CMD_SECRET_3    0x52
#define CD_CMD_SECRET_4    0x53
#define CD_CMD_SECRET_5    0x54
#define CD_CMD_SECRET_6    0x55
#define CD_CMD_SECRET_7    0x56
#define CD_CMD_SECRETLOCK  0x57

