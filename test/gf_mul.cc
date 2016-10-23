// Copyright (c) 2016, Robert Escriva
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//     * Redistributions of source code must retain the above copyright notice,
//       this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of this project nor the names of its contributors may
//       be used to endorse or promote products derived from this software
//       without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

// divvy
#include "divvy.h"
#include "divvy-internal.h"

// testing
#include "th.h"

TEST(GfMul, Test1)
{
    ASSERT_EQ(divvy_gf_mul(254, 231), 36);
    ASSERT_EQ(divvy_gf_mul(231, 254), 36);
}

TEST(GfMul, Test2)
{
    ASSERT_EQ(divvy_gf_mul(229, 17), 55);
    ASSERT_EQ(divvy_gf_mul(17, 229), 55);
}

TEST(GfMul, Test3)
{
    ASSERT_EQ(divvy_gf_mul(218, 36), 91);
    ASSERT_EQ(divvy_gf_mul(36, 218), 91);
}

TEST(GfMul, Test4)
{
    ASSERT_EQ(divvy_gf_mul(70, 193), 22);
    ASSERT_EQ(divvy_gf_mul(193, 70), 22);
}

TEST(GfMul, Test5)
{
    ASSERT_EQ(divvy_gf_mul(45, 245), 108);
    ASSERT_EQ(divvy_gf_mul(245, 45), 108);
}

TEST(GfMul, Test6)
{
    ASSERT_EQ(divvy_gf_mul(131, 239), 151);
    ASSERT_EQ(divvy_gf_mul(239, 131), 151);
}

TEST(GfMul, Test7)
{
    ASSERT_EQ(divvy_gf_mul(167, 94), 96);
    ASSERT_EQ(divvy_gf_mul(94, 167), 96);
}

TEST(GfMul, Test8)
{
    ASSERT_EQ(divvy_gf_mul(133, 239), 195);
    ASSERT_EQ(divvy_gf_mul(239, 133), 195);
}

TEST(GfMul, Test9)
{
    ASSERT_EQ(divvy_gf_mul(228, 169), 80);
    ASSERT_EQ(divvy_gf_mul(169, 228), 80);
}

TEST(GfMul, Test10)
{
    ASSERT_EQ(divvy_gf_mul(196, 99), 89);
    ASSERT_EQ(divvy_gf_mul(99, 196), 89);
}

TEST(GfMul, Test11)
{
    ASSERT_EQ(divvy_gf_mul(90, 182), 71);
    ASSERT_EQ(divvy_gf_mul(182, 90), 71);
}

TEST(GfMul, Test12)
{
    ASSERT_EQ(divvy_gf_mul(227, 108), 121);
    ASSERT_EQ(divvy_gf_mul(108, 227), 121);
}

TEST(GfMul, Test13)
{
    ASSERT_EQ(divvy_gf_mul(53, 229), 49);
    ASSERT_EQ(divvy_gf_mul(229, 53), 49);
}

TEST(GfMul, Test14)
{
    ASSERT_EQ(divvy_gf_mul(238, 213), 183);
    ASSERT_EQ(divvy_gf_mul(213, 238), 183);
}

TEST(GfMul, Test15)
{
    ASSERT_EQ(divvy_gf_mul(225, 118), 163);
    ASSERT_EQ(divvy_gf_mul(118, 225), 163);
}

TEST(GfMul, Test16)
{
    ASSERT_EQ(divvy_gf_mul(197, 176), 86);
    ASSERT_EQ(divvy_gf_mul(176, 197), 86);
}

TEST(GfMul, Test17)
{
    ASSERT_EQ(divvy_gf_mul(35, 136), 51);
    ASSERT_EQ(divvy_gf_mul(136, 35), 51);
}

TEST(GfMul, Test18)
{
    ASSERT_EQ(divvy_gf_mul(165, 240), 144);
    ASSERT_EQ(divvy_gf_mul(240, 165), 144);
}

TEST(GfMul, Test19)
{
    ASSERT_EQ(divvy_gf_mul(58, 194), 114);
    ASSERT_EQ(divvy_gf_mul(194, 58), 114);
}

TEST(GfMul, Test20)
{
    ASSERT_EQ(divvy_gf_mul(212, 180), 110);
    ASSERT_EQ(divvy_gf_mul(180, 212), 110);
}

TEST(GfMul, Test21)
{
    ASSERT_EQ(divvy_gf_mul(162, 26), 246);
    ASSERT_EQ(divvy_gf_mul(26, 162), 246);
}

TEST(GfMul, Test22)
{
    ASSERT_EQ(divvy_gf_mul(210, 247), 156);
    ASSERT_EQ(divvy_gf_mul(247, 210), 156);
}

TEST(GfMul, Test23)
{
    ASSERT_EQ(divvy_gf_mul(184, 163), 188);
    ASSERT_EQ(divvy_gf_mul(163, 184), 188);
}

TEST(GfMul, Test24)
{
    ASSERT_EQ(divvy_gf_mul(180, 37), 35);
    ASSERT_EQ(divvy_gf_mul(37, 180), 35);
}

TEST(GfMul, Test25)
{
    ASSERT_EQ(divvy_gf_mul(136, 241), 237);
    ASSERT_EQ(divvy_gf_mul(241, 136), 237);
}

TEST(GfMul, Test26)
{
    ASSERT_EQ(divvy_gf_mul(35, 216), 45);
    ASSERT_EQ(divvy_gf_mul(216, 35), 45);
}

TEST(GfMul, Test27)
{
    ASSERT_EQ(divvy_gf_mul(20, 15), 204);
    ASSERT_EQ(divvy_gf_mul(15, 20), 204);
}

TEST(GfMul, Test28)
{
    ASSERT_EQ(divvy_gf_mul(150, 222), 243);
    ASSERT_EQ(divvy_gf_mul(222, 150), 243);
}

TEST(GfMul, Test29)
{
    ASSERT_EQ(divvy_gf_mul(65, 37), 166);
    ASSERT_EQ(divvy_gf_mul(37, 65), 166);
}

TEST(GfMul, Test30)
{
    ASSERT_EQ(divvy_gf_mul(207, 179), 144);
    ASSERT_EQ(divvy_gf_mul(179, 207), 144);
}

TEST(GfMul, Test31)
{
    ASSERT_EQ(divvy_gf_mul(83, 142), 81);
    ASSERT_EQ(divvy_gf_mul(142, 83), 81);
}

TEST(GfMul, Test32)
{
    ASSERT_EQ(divvy_gf_mul(118, 3), 154);
    ASSERT_EQ(divvy_gf_mul(3, 118), 154);
}

TEST(GfMul, Test33)
{
    ASSERT_EQ(divvy_gf_mul(192, 131), 140);
    ASSERT_EQ(divvy_gf_mul(131, 192), 140);
}

TEST(GfMul, Test34)
{
    ASSERT_EQ(divvy_gf_mul(20, 124), 106);
    ASSERT_EQ(divvy_gf_mul(124, 20), 106);
}

TEST(GfMul, Test35)
{
    ASSERT_EQ(divvy_gf_mul(190, 57), 6);
    ASSERT_EQ(divvy_gf_mul(57, 190), 6);
}

TEST(GfMul, Test36)
{
    ASSERT_EQ(divvy_gf_mul(8, 234), 17);
    ASSERT_EQ(divvy_gf_mul(234, 8), 17);
}

TEST(GfMul, Test37)
{
    ASSERT_EQ(divvy_gf_mul(6, 237), 88);
    ASSERT_EQ(divvy_gf_mul(237, 6), 88);
}

TEST(GfMul, Test38)
{
    ASSERT_EQ(divvy_gf_mul(145, 49), 255);
    ASSERT_EQ(divvy_gf_mul(49, 145), 255);
}

TEST(GfMul, Test39)
{
    ASSERT_EQ(divvy_gf_mul(182, 117), 158);
    ASSERT_EQ(divvy_gf_mul(117, 182), 158);
}

TEST(GfMul, Test40)
{
    ASSERT_EQ(divvy_gf_mul(48, 219), 33);
    ASSERT_EQ(divvy_gf_mul(219, 48), 33);
}

TEST(GfMul, Test41)
{
    ASSERT_EQ(divvy_gf_mul(162, 137), 239);
    ASSERT_EQ(divvy_gf_mul(137, 162), 239);
}

TEST(GfMul, Test42)
{
    ASSERT_EQ(divvy_gf_mul(8, 167), 79);
    ASSERT_EQ(divvy_gf_mul(167, 8), 79);
}

TEST(GfMul, Test43)
{
    ASSERT_EQ(divvy_gf_mul(237, 152), 221);
    ASSERT_EQ(divvy_gf_mul(152, 237), 221);
}

TEST(GfMul, Test44)
{
    ASSERT_EQ(divvy_gf_mul(214, 29), 134);
    ASSERT_EQ(divvy_gf_mul(29, 214), 134);
}

TEST(GfMul, Test45)
{
    ASSERT_EQ(divvy_gf_mul(45, 41), 137);
    ASSERT_EQ(divvy_gf_mul(41, 45), 137);
}

TEST(GfMul, Test46)
{
    ASSERT_EQ(divvy_gf_mul(47, 159), 2);
    ASSERT_EQ(divvy_gf_mul(159, 47), 2);
}

TEST(GfMul, Test47)
{
    ASSERT_EQ(divvy_gf_mul(72, 183), 237);
    ASSERT_EQ(divvy_gf_mul(183, 72), 237);
}

TEST(GfMul, Test48)
{
    ASSERT_EQ(divvy_gf_mul(1, 84), 84);
    ASSERT_EQ(divvy_gf_mul(84, 1), 84);
}

TEST(GfMul, Test49)
{
    ASSERT_EQ(divvy_gf_mul(1, 65), 65);
    ASSERT_EQ(divvy_gf_mul(65, 1), 65);
}

TEST(GfMul, Test50)
{
    ASSERT_EQ(divvy_gf_mul(250, 229), 122);
    ASSERT_EQ(divvy_gf_mul(229, 250), 122);
}

TEST(GfMul, Test51)
{
    ASSERT_EQ(divvy_gf_mul(232, 207), 183);
    ASSERT_EQ(divvy_gf_mul(207, 232), 183);
}

TEST(GfMul, Test52)
{
    ASSERT_EQ(divvy_gf_mul(161, 209), 59);
    ASSERT_EQ(divvy_gf_mul(209, 161), 59);
}

TEST(GfMul, Test53)
{
    ASSERT_EQ(divvy_gf_mul(37, 63), 98);
    ASSERT_EQ(divvy_gf_mul(63, 37), 98);
}

TEST(GfMul, Test54)
{
    ASSERT_EQ(divvy_gf_mul(168, 150), 238);
    ASSERT_EQ(divvy_gf_mul(150, 168), 238);
}

TEST(GfMul, Test55)
{
    ASSERT_EQ(divvy_gf_mul(75, 74), 165);
    ASSERT_EQ(divvy_gf_mul(74, 75), 165);
}

TEST(GfMul, Test56)
{
    ASSERT_EQ(divvy_gf_mul(106, 239), 203);
    ASSERT_EQ(divvy_gf_mul(239, 106), 203);
}

TEST(GfMul, Test57)
{
    ASSERT_EQ(divvy_gf_mul(138, 44), 210);
    ASSERT_EQ(divvy_gf_mul(44, 138), 210);
}

TEST(GfMul, Test58)
{
    ASSERT_EQ(divvy_gf_mul(65, 9), 127);
    ASSERT_EQ(divvy_gf_mul(9, 65), 127);
}

TEST(GfMul, Test59)
{
    ASSERT_EQ(divvy_gf_mul(240, 159), 26);
    ASSERT_EQ(divvy_gf_mul(159, 240), 26);
}

TEST(GfMul, Test60)
{
    ASSERT_EQ(divvy_gf_mul(131, 61), 238);
    ASSERT_EQ(divvy_gf_mul(61, 131), 238);
}

TEST(GfMul, Test61)
{
    ASSERT_EQ(divvy_gf_mul(126, 220), 82);
    ASSERT_EQ(divvy_gf_mul(220, 126), 82);
}

TEST(GfMul, Test62)
{
    ASSERT_EQ(divvy_gf_mul(176, 170), 148);
    ASSERT_EQ(divvy_gf_mul(170, 176), 148);
}

TEST(GfMul, Test63)
{
    ASSERT_EQ(divvy_gf_mul(237, 168), 43);
    ASSERT_EQ(divvy_gf_mul(168, 237), 43);
}

TEST(GfMul, Test64)
{
    ASSERT_EQ(divvy_gf_mul(205, 231), 27);
    ASSERT_EQ(divvy_gf_mul(231, 205), 27);
}

TEST(GfMul, Test65)
{
    ASSERT_EQ(divvy_gf_mul(125, 204), 188);
    ASSERT_EQ(divvy_gf_mul(204, 125), 188);
}

TEST(GfMul, Test66)
{
    ASSERT_EQ(divvy_gf_mul(104, 38), 196);
    ASSERT_EQ(divvy_gf_mul(38, 104), 196);
}

TEST(GfMul, Test67)
{
    ASSERT_EQ(divvy_gf_mul(8, 167), 79);
    ASSERT_EQ(divvy_gf_mul(167, 8), 79);
}

TEST(GfMul, Test68)
{
    ASSERT_EQ(divvy_gf_mul(14, 14), 84);
    ASSERT_EQ(divvy_gf_mul(14, 14), 84);
}

TEST(GfMul, Test69)
{
    ASSERT_EQ(divvy_gf_mul(223, 214), 2);
    ASSERT_EQ(divvy_gf_mul(214, 223), 2);
}

TEST(GfMul, Test70)
{
    ASSERT_EQ(divvy_gf_mul(86, 213), 230);
    ASSERT_EQ(divvy_gf_mul(213, 86), 230);
}

TEST(GfMul, Test71)
{
    ASSERT_EQ(divvy_gf_mul(250, 30), 130);
    ASSERT_EQ(divvy_gf_mul(30, 250), 130);
}

TEST(GfMul, Test72)
{
    ASSERT_EQ(divvy_gf_mul(76, 222), 216);
    ASSERT_EQ(divvy_gf_mul(222, 76), 216);
}

TEST(GfMul, Test73)
{
    ASSERT_EQ(divvy_gf_mul(127, 242), 59);
    ASSERT_EQ(divvy_gf_mul(242, 127), 59);
}

TEST(GfMul, Test74)
{
    ASSERT_EQ(divvy_gf_mul(215, 174), 33);
    ASSERT_EQ(divvy_gf_mul(174, 215), 33);
}

TEST(GfMul, Test75)
{
    ASSERT_EQ(divvy_gf_mul(189, 132), 241);
    ASSERT_EQ(divvy_gf_mul(132, 189), 241);
}

TEST(GfMul, Test76)
{
    ASSERT_EQ(divvy_gf_mul(151, 37), 128);
    ASSERT_EQ(divvy_gf_mul(37, 151), 128);
}

TEST(GfMul, Test77)
{
    ASSERT_EQ(divvy_gf_mul(25, 13), 181);
    ASSERT_EQ(divvy_gf_mul(13, 25), 181);
}

TEST(GfMul, Test78)
{
    ASSERT_EQ(divvy_gf_mul(81, 254), 120);
    ASSERT_EQ(divvy_gf_mul(254, 81), 120);
}

TEST(GfMul, Test79)
{
    ASSERT_EQ(divvy_gf_mul(10, 230), 166);
    ASSERT_EQ(divvy_gf_mul(230, 10), 166);
}

TEST(GfMul, Test80)
{
    ASSERT_EQ(divvy_gf_mul(236, 50), 5);
    ASSERT_EQ(divvy_gf_mul(50, 236), 5);
}

TEST(GfMul, Test81)
{
    ASSERT_EQ(divvy_gf_mul(149, 164), 171);
    ASSERT_EQ(divvy_gf_mul(164, 149), 171);
}

TEST(GfMul, Test82)
{
    ASSERT_EQ(divvy_gf_mul(26, 36), 5);
    ASSERT_EQ(divvy_gf_mul(36, 26), 5);
}

TEST(GfMul, Test83)
{
    ASSERT_EQ(divvy_gf_mul(141, 158), 79);
    ASSERT_EQ(divvy_gf_mul(158, 141), 79);
}

TEST(GfMul, Test84)
{
    ASSERT_EQ(divvy_gf_mul(157, 131), 36);
    ASSERT_EQ(divvy_gf_mul(131, 157), 36);
}

TEST(GfMul, Test85)
{
    ASSERT_EQ(divvy_gf_mul(29, 117), 46);
    ASSERT_EQ(divvy_gf_mul(117, 29), 46);
}

TEST(GfMul, Test86)
{
    ASSERT_EQ(divvy_gf_mul(164, 212), 129);
    ASSERT_EQ(divvy_gf_mul(212, 164), 129);
}

TEST(GfMul, Test87)
{
    ASSERT_EQ(divvy_gf_mul(195, 213), 12);
    ASSERT_EQ(divvy_gf_mul(213, 195), 12);
}

TEST(GfMul, Test88)
{
    ASSERT_EQ(divvy_gf_mul(73, 27), 89);
    ASSERT_EQ(divvy_gf_mul(27, 73), 89);
}

TEST(GfMul, Test89)
{
    ASSERT_EQ(divvy_gf_mul(220, 77), 156);
    ASSERT_EQ(divvy_gf_mul(77, 220), 156);
}

TEST(GfMul, Test90)
{
    ASSERT_EQ(divvy_gf_mul(132, 192), 250);
    ASSERT_EQ(divvy_gf_mul(192, 132), 250);
}

TEST(GfMul, Test91)
{
    ASSERT_EQ(divvy_gf_mul(33, 55), 141);
    ASSERT_EQ(divvy_gf_mul(55, 33), 141);
}

TEST(GfMul, Test92)
{
    ASSERT_EQ(divvy_gf_mul(16, 228), 194);
    ASSERT_EQ(divvy_gf_mul(228, 16), 194);
}

TEST(GfMul, Test93)
{
    ASSERT_EQ(divvy_gf_mul(123, 139), 177);
    ASSERT_EQ(divvy_gf_mul(139, 123), 177);
}

TEST(GfMul, Test94)
{
    ASSERT_EQ(divvy_gf_mul(107, 175), 161);
    ASSERT_EQ(divvy_gf_mul(175, 107), 161);
}

TEST(GfMul, Test95)
{
    ASSERT_EQ(divvy_gf_mul(37, 229), 227);
    ASSERT_EQ(divvy_gf_mul(229, 37), 227);
}

TEST(GfMul, Test96)
{
    ASSERT_EQ(divvy_gf_mul(63, 163), 82);
    ASSERT_EQ(divvy_gf_mul(163, 63), 82);
}

TEST(GfMul, Test97)
{
    ASSERT_EQ(divvy_gf_mul(155, 203), 96);
    ASSERT_EQ(divvy_gf_mul(203, 155), 96);
}

TEST(GfMul, Test98)
{
    ASSERT_EQ(divvy_gf_mul(113, 155), 217);
    ASSERT_EQ(divvy_gf_mul(155, 113), 217);
}

TEST(GfMul, Test99)
{
    ASSERT_EQ(divvy_gf_mul(195, 171), 67);
    ASSERT_EQ(divvy_gf_mul(171, 195), 67);
}

TEST(GfMul, Test100)
{
    ASSERT_EQ(divvy_gf_mul(229, 37), 227);
    ASSERT_EQ(divvy_gf_mul(37, 229), 227);
}

TEST(GfMul, Test101)
{
    ASSERT_EQ(divvy_gf_mul(236, 239), 34);
    ASSERT_EQ(divvy_gf_mul(239, 236), 34);
}

TEST(GfMul, Test102)
{
    ASSERT_EQ(divvy_gf_mul(122, 64), 169);
    ASSERT_EQ(divvy_gf_mul(64, 122), 169);
}

TEST(GfMul, Test103)
{
    ASSERT_EQ(divvy_gf_mul(34, 219), 147);
    ASSERT_EQ(divvy_gf_mul(219, 34), 147);
}

TEST(GfMul, Test104)
{
    ASSERT_EQ(divvy_gf_mul(94, 123), 236);
    ASSERT_EQ(divvy_gf_mul(123, 94), 236);
}

TEST(GfMul, Test105)
{
    ASSERT_EQ(divvy_gf_mul(80, 184), 186);
    ASSERT_EQ(divvy_gf_mul(184, 80), 186);
}

TEST(GfMul, Test106)
{
    ASSERT_EQ(divvy_gf_mul(49, 148), 10);
    ASSERT_EQ(divvy_gf_mul(148, 49), 10);
}

TEST(GfMul, Test107)
{
    ASSERT_EQ(divvy_gf_mul(149, 72), 190);
    ASSERT_EQ(divvy_gf_mul(72, 149), 190);
}

TEST(GfMul, Test108)
{
    ASSERT_EQ(divvy_gf_mul(32, 88), 245);
    ASSERT_EQ(divvy_gf_mul(88, 32), 245);
}

TEST(GfMul, Test109)
{
    ASSERT_EQ(divvy_gf_mul(48, 219), 33);
    ASSERT_EQ(divvy_gf_mul(219, 48), 33);
}

TEST(GfMul, Test110)
{
    ASSERT_EQ(divvy_gf_mul(110, 54), 170);
    ASSERT_EQ(divvy_gf_mul(54, 110), 170);
}

TEST(GfMul, Test111)
{
    ASSERT_EQ(divvy_gf_mul(187, 193), 170);
    ASSERT_EQ(divvy_gf_mul(193, 187), 170);
}

TEST(GfMul, Test112)
{
    ASSERT_EQ(divvy_gf_mul(73, 8), 126);
    ASSERT_EQ(divvy_gf_mul(8, 73), 126);
}

TEST(GfMul, Test113)
{
    ASSERT_EQ(divvy_gf_mul(149, 245), 215);
    ASSERT_EQ(divvy_gf_mul(245, 149), 215);
}

TEST(GfMul, Test114)
{
    ASSERT_EQ(divvy_gf_mul(151, 25), 240);
    ASSERT_EQ(divvy_gf_mul(25, 151), 240);
}

TEST(GfMul, Test115)
{
    ASSERT_EQ(divvy_gf_mul(255, 237), 159);
    ASSERT_EQ(divvy_gf_mul(237, 255), 159);
}

TEST(GfMul, Test116)
{
    ASSERT_EQ(divvy_gf_mul(173, 144), 213);
    ASSERT_EQ(divvy_gf_mul(144, 173), 213);
}

TEST(GfMul, Test117)
{
    ASSERT_EQ(divvy_gf_mul(54, 109), 240);
    ASSERT_EQ(divvy_gf_mul(109, 54), 240);
}

TEST(GfMul, Test118)
{
    ASSERT_EQ(divvy_gf_mul(213, 14), 58);
    ASSERT_EQ(divvy_gf_mul(14, 213), 58);
}

TEST(GfMul, Test119)
{
    ASSERT_EQ(divvy_gf_mul(49, 55), 208);
    ASSERT_EQ(divvy_gf_mul(55, 49), 208);
}

TEST(GfMul, Test120)
{
    ASSERT_EQ(divvy_gf_mul(114, 85), 95);
    ASSERT_EQ(divvy_gf_mul(85, 114), 95);
}

TEST(GfMul, Test121)
{
    ASSERT_EQ(divvy_gf_mul(5, 218), 159);
    ASSERT_EQ(divvy_gf_mul(218, 5), 159);
}

TEST(GfMul, Test122)
{
    ASSERT_EQ(divvy_gf_mul(224, 63), 74);
    ASSERT_EQ(divvy_gf_mul(63, 224), 74);
}

TEST(GfMul, Test123)
{
    ASSERT_EQ(divvy_gf_mul(99, 192), 206);
    ASSERT_EQ(divvy_gf_mul(192, 99), 206);
}

TEST(GfMul, Test124)
{
    ASSERT_EQ(divvy_gf_mul(134, 124), 119);
    ASSERT_EQ(divvy_gf_mul(124, 134), 119);
}

TEST(GfMul, Test125)
{
    ASSERT_EQ(divvy_gf_mul(215, 152), 159);
    ASSERT_EQ(divvy_gf_mul(152, 215), 159);
}

TEST(GfMul, Test126)
{
    ASSERT_EQ(divvy_gf_mul(191, 67), 206);
    ASSERT_EQ(divvy_gf_mul(67, 191), 206);
}

TEST(GfMul, Test127)
{
    ASSERT_EQ(divvy_gf_mul(158, 94), 90);
    ASSERT_EQ(divvy_gf_mul(94, 158), 90);
}

TEST(GfMul, Test128)
{
    ASSERT_EQ(divvy_gf_mul(102, 13), 248);
    ASSERT_EQ(divvy_gf_mul(13, 102), 248);
}

TEST(GfMul, Test129)
{
    ASSERT_EQ(divvy_gf_mul(98, 100), 148);
    ASSERT_EQ(divvy_gf_mul(100, 98), 148);
}

TEST(GfMul, Test130)
{
    ASSERT_EQ(divvy_gf_mul(119, 143), 88);
    ASSERT_EQ(divvy_gf_mul(143, 119), 88);
}

TEST(GfMul, Test131)
{
    ASSERT_EQ(divvy_gf_mul(229, 36), 6);
    ASSERT_EQ(divvy_gf_mul(36, 229), 6);
}

TEST(GfMul, Test132)
{
    ASSERT_EQ(divvy_gf_mul(174, 91), 216);
    ASSERT_EQ(divvy_gf_mul(91, 174), 216);
}

TEST(GfMul, Test133)
{
    ASSERT_EQ(divvy_gf_mul(66, 128), 86);
    ASSERT_EQ(divvy_gf_mul(128, 66), 86);
}

TEST(GfMul, Test134)
{
    ASSERT_EQ(divvy_gf_mul(30, 111), 134);
    ASSERT_EQ(divvy_gf_mul(111, 30), 134);
}

TEST(GfMul, Test135)
{
    ASSERT_EQ(divvy_gf_mul(102, 184), 152);
    ASSERT_EQ(divvy_gf_mul(184, 102), 152);
}

TEST(GfMul, Test136)
{
    ASSERT_EQ(divvy_gf_mul(240, 168), 76);
    ASSERT_EQ(divvy_gf_mul(168, 240), 76);
}

TEST(GfMul, Test137)
{
    ASSERT_EQ(divvy_gf_mul(111, 9), 58);
    ASSERT_EQ(divvy_gf_mul(9, 111), 58);
}

TEST(GfMul, Test138)
{
    ASSERT_EQ(divvy_gf_mul(159, 183), 38);
    ASSERT_EQ(divvy_gf_mul(183, 159), 38);
}

TEST(GfMul, Test139)
{
    ASSERT_EQ(divvy_gf_mul(140, 6), 5);
    ASSERT_EQ(divvy_gf_mul(6, 140), 5);
}

TEST(GfMul, Test140)
{
    ASSERT_EQ(divvy_gf_mul(223, 99), 163);
    ASSERT_EQ(divvy_gf_mul(99, 223), 163);
}

TEST(GfMul, Test141)
{
    ASSERT_EQ(divvy_gf_mul(203, 49), 199);
    ASSERT_EQ(divvy_gf_mul(49, 203), 199);
}

TEST(GfMul, Test142)
{
    ASSERT_EQ(divvy_gf_mul(99, 180), 84);
    ASSERT_EQ(divvy_gf_mul(180, 99), 84);
}

TEST(GfMul, Test143)
{
    ASSERT_EQ(divvy_gf_mul(4, 108), 171);
    ASSERT_EQ(divvy_gf_mul(108, 4), 171);
}

TEST(GfMul, Test144)
{
    ASSERT_EQ(divvy_gf_mul(158, 145), 190);
    ASSERT_EQ(divvy_gf_mul(145, 158), 190);
}

TEST(GfMul, Test145)
{
    ASSERT_EQ(divvy_gf_mul(14, 233), 73);
    ASSERT_EQ(divvy_gf_mul(233, 14), 73);
}

TEST(GfMul, Test146)
{
    ASSERT_EQ(divvy_gf_mul(92, 106), 241);
    ASSERT_EQ(divvy_gf_mul(106, 92), 241);
}

TEST(GfMul, Test147)
{
    ASSERT_EQ(divvy_gf_mul(164, 119), 54);
    ASSERT_EQ(divvy_gf_mul(119, 164), 54);
}

TEST(GfMul, Test148)
{
    ASSERT_EQ(divvy_gf_mul(183, 32), 17);
    ASSERT_EQ(divvy_gf_mul(32, 183), 17);
}

TEST(GfMul, Test149)
{
    ASSERT_EQ(divvy_gf_mul(143, 220), 205);
    ASSERT_EQ(divvy_gf_mul(220, 143), 205);
}

TEST(GfMul, Test150)
{
    ASSERT_EQ(divvy_gf_mul(225, 12), 224);
    ASSERT_EQ(divvy_gf_mul(12, 225), 224);
}

TEST(GfMul, Test151)
{
    ASSERT_EQ(divvy_gf_mul(238, 119), 137);
    ASSERT_EQ(divvy_gf_mul(119, 238), 137);
}

TEST(GfMul, Test152)
{
    ASSERT_EQ(divvy_gf_mul(110, 45), 255);
    ASSERT_EQ(divvy_gf_mul(45, 110), 255);
}

TEST(GfMul, Test153)
{
    ASSERT_EQ(divvy_gf_mul(252, 250), 40);
    ASSERT_EQ(divvy_gf_mul(250, 252), 40);
}

TEST(GfMul, Test154)
{
    ASSERT_EQ(divvy_gf_mul(177, 179), 149);
    ASSERT_EQ(divvy_gf_mul(179, 177), 149);
}

TEST(GfMul, Test155)
{
    ASSERT_EQ(divvy_gf_mul(148, 9), 88);
    ASSERT_EQ(divvy_gf_mul(9, 148), 88);
}

TEST(GfMul, Test156)
{
    ASSERT_EQ(divvy_gf_mul(129, 80), 197);
    ASSERT_EQ(divvy_gf_mul(80, 129), 197);
}

TEST(GfMul, Test157)
{
    ASSERT_EQ(divvy_gf_mul(193, 225), 99);
    ASSERT_EQ(divvy_gf_mul(225, 193), 99);
}

TEST(GfMul, Test158)
{
    ASSERT_EQ(divvy_gf_mul(193, 204), 138);
    ASSERT_EQ(divvy_gf_mul(204, 193), 138);
}

TEST(GfMul, Test159)
{
    ASSERT_EQ(divvy_gf_mul(169, 182), 132);
    ASSERT_EQ(divvy_gf_mul(182, 169), 132);
}

TEST(GfMul, Test160)
{
    ASSERT_EQ(divvy_gf_mul(30, 111), 134);
    ASSERT_EQ(divvy_gf_mul(111, 30), 134);
}

TEST(GfMul, Test161)
{
    ASSERT_EQ(divvy_gf_mul(143, 169), 144);
    ASSERT_EQ(divvy_gf_mul(169, 143), 144);
}

TEST(GfMul, Test162)
{
    ASSERT_EQ(divvy_gf_mul(244, 233), 103);
    ASSERT_EQ(divvy_gf_mul(233, 244), 103);
}

TEST(GfMul, Test163)
{
    ASSERT_EQ(divvy_gf_mul(12, 105), 218);
    ASSERT_EQ(divvy_gf_mul(105, 12), 218);
}

TEST(GfMul, Test164)
{
    ASSERT_EQ(divvy_gf_mul(191, 176), 39);
    ASSERT_EQ(divvy_gf_mul(176, 191), 39);
}

TEST(GfMul, Test165)
{
    ASSERT_EQ(divvy_gf_mul(10, 90), 82);
    ASSERT_EQ(divvy_gf_mul(90, 10), 82);
}

TEST(GfMul, Test166)
{
    ASSERT_EQ(divvy_gf_mul(92, 53), 245);
    ASSERT_EQ(divvy_gf_mul(53, 92), 245);
}

TEST(GfMul, Test167)
{
    ASSERT_EQ(divvy_gf_mul(221, 127), 241);
    ASSERT_EQ(divvy_gf_mul(127, 221), 241);
}

TEST(GfMul, Test168)
{
    ASSERT_EQ(divvy_gf_mul(86, 84), 8);
    ASSERT_EQ(divvy_gf_mul(84, 86), 8);
}

TEST(GfMul, Test169)
{
    ASSERT_EQ(divvy_gf_mul(173, 225), 194);
    ASSERT_EQ(divvy_gf_mul(225, 173), 194);
}

TEST(GfMul, Test170)
{
    ASSERT_EQ(divvy_gf_mul(64, 197), 189);
    ASSERT_EQ(divvy_gf_mul(197, 64), 189);
}

TEST(GfMul, Test171)
{
    ASSERT_EQ(divvy_gf_mul(72, 98), 206);
    ASSERT_EQ(divvy_gf_mul(98, 72), 206);
}

TEST(GfMul, Test172)
{
    ASSERT_EQ(divvy_gf_mul(65, 54), 25);
    ASSERT_EQ(divvy_gf_mul(54, 65), 25);
}

TEST(GfMul, Test173)
{
    ASSERT_EQ(divvy_gf_mul(215, 148), 12);
    ASSERT_EQ(divvy_gf_mul(148, 215), 12);
}

TEST(GfMul, Test174)
{
    ASSERT_EQ(divvy_gf_mul(144, 96), 188);
    ASSERT_EQ(divvy_gf_mul(96, 144), 188);
}

TEST(GfMul, Test175)
{
    ASSERT_EQ(divvy_gf_mul(204, 74), 114);
    ASSERT_EQ(divvy_gf_mul(74, 204), 114);
}

TEST(GfMul, Test176)
{
    ASSERT_EQ(divvy_gf_mul(108, 80), 196);
    ASSERT_EQ(divvy_gf_mul(80, 108), 196);
}

TEST(GfMul, Test177)
{
    ASSERT_EQ(divvy_gf_mul(121, 193), 194);
    ASSERT_EQ(divvy_gf_mul(193, 121), 194);
}

TEST(GfMul, Test178)
{
    ASSERT_EQ(divvy_gf_mul(53, 171), 211);
    ASSERT_EQ(divvy_gf_mul(171, 53), 211);
}

TEST(GfMul, Test179)
{
    ASSERT_EQ(divvy_gf_mul(183, 25), 253);
    ASSERT_EQ(divvy_gf_mul(25, 183), 253);
}

TEST(GfMul, Test180)
{
    ASSERT_EQ(divvy_gf_mul(131, 30), 187);
    ASSERT_EQ(divvy_gf_mul(30, 131), 187);
}

TEST(GfMul, Test181)
{
    ASSERT_EQ(divvy_gf_mul(164, 195), 126);
    ASSERT_EQ(divvy_gf_mul(195, 164), 126);
}

TEST(GfMul, Test182)
{
    ASSERT_EQ(divvy_gf_mul(23, 150), 108);
    ASSERT_EQ(divvy_gf_mul(150, 23), 108);
}

TEST(GfMul, Test183)
{
    ASSERT_EQ(divvy_gf_mul(122, 92), 70);
    ASSERT_EQ(divvy_gf_mul(92, 122), 70);
}

TEST(GfMul, Test184)
{
    ASSERT_EQ(divvy_gf_mul(2, 249), 233);
    ASSERT_EQ(divvy_gf_mul(249, 2), 233);
}

TEST(GfMul, Test185)
{
    ASSERT_EQ(divvy_gf_mul(60, 203), 15);
    ASSERT_EQ(divvy_gf_mul(203, 60), 15);
}

TEST(GfMul, Test186)
{
    ASSERT_EQ(divvy_gf_mul(197, 225), 202);
    ASSERT_EQ(divvy_gf_mul(225, 197), 202);
}

TEST(GfMul, Test187)
{
    ASSERT_EQ(divvy_gf_mul(234, 52), 227);
    ASSERT_EQ(divvy_gf_mul(52, 234), 227);
}

TEST(GfMul, Test188)
{
    ASSERT_EQ(divvy_gf_mul(209, 200), 151);
    ASSERT_EQ(divvy_gf_mul(200, 209), 151);
}

TEST(GfMul, Test189)
{
    ASSERT_EQ(divvy_gf_mul(101, 84), 173);
    ASSERT_EQ(divvy_gf_mul(84, 101), 173);
}

TEST(GfMul, Test190)
{
    ASSERT_EQ(divvy_gf_mul(208, 171), 251);
    ASSERT_EQ(divvy_gf_mul(171, 208), 251);
}

TEST(GfMul, Test191)
{
    ASSERT_EQ(divvy_gf_mul(161, 82), 114);
    ASSERT_EQ(divvy_gf_mul(82, 161), 114);
}

TEST(GfMul, Test192)
{
    ASSERT_EQ(divvy_gf_mul(114, 48), 163);
    ASSERT_EQ(divvy_gf_mul(48, 114), 163);
}

TEST(GfMul, Test193)
{
    ASSERT_EQ(divvy_gf_mul(85, 100), 157);
    ASSERT_EQ(divvy_gf_mul(100, 85), 157);
}

TEST(GfMul, Test194)
{
    ASSERT_EQ(divvy_gf_mul(60, 33), 253);
    ASSERT_EQ(divvy_gf_mul(33, 60), 253);
}

TEST(GfMul, Test195)
{
    ASSERT_EQ(divvy_gf_mul(170, 10), 104);
    ASSERT_EQ(divvy_gf_mul(10, 170), 104);
}

TEST(GfMul, Test196)
{
    ASSERT_EQ(divvy_gf_mul(224, 41), 190);
    ASSERT_EQ(divvy_gf_mul(41, 224), 190);
}

TEST(GfMul, Test197)
{
    ASSERT_EQ(divvy_gf_mul(206, 134), 4);
    ASSERT_EQ(divvy_gf_mul(134, 206), 4);
}

TEST(GfMul, Test198)
{
    ASSERT_EQ(divvy_gf_mul(195, 125), 17);
    ASSERT_EQ(divvy_gf_mul(125, 195), 17);
}

TEST(GfMul, Test199)
{
    ASSERT_EQ(divvy_gf_mul(112, 18), 161);
    ASSERT_EQ(divvy_gf_mul(18, 112), 161);
}

TEST(GfMul, Test200)
{
    ASSERT_EQ(divvy_gf_mul(49, 217), 152);
    ASSERT_EQ(divvy_gf_mul(217, 49), 152);
}

TEST(GfMul, Test201)
{
    ASSERT_EQ(divvy_gf_mul(54, 75), 222);
    ASSERT_EQ(divvy_gf_mul(75, 54), 222);
}

TEST(GfMul, Test202)
{
    ASSERT_EQ(divvy_gf_mul(248, 218), 223);
    ASSERT_EQ(divvy_gf_mul(218, 248), 223);
}

TEST(GfMul, Test203)
{
    ASSERT_EQ(divvy_gf_mul(193, 189), 26);
    ASSERT_EQ(divvy_gf_mul(189, 193), 26);
}

TEST(GfMul, Test204)
{
    ASSERT_EQ(divvy_gf_mul(231, 50), 216);
    ASSERT_EQ(divvy_gf_mul(50, 231), 216);
}

TEST(GfMul, Test205)
{
    ASSERT_EQ(divvy_gf_mul(76, 159), 18);
    ASSERT_EQ(divvy_gf_mul(159, 76), 18);
}

TEST(GfMul, Test206)
{
    ASSERT_EQ(divvy_gf_mul(138, 252), 188);
    ASSERT_EQ(divvy_gf_mul(252, 138), 188);
}

TEST(GfMul, Test207)
{
    ASSERT_EQ(divvy_gf_mul(180, 196), 219);
    ASSERT_EQ(divvy_gf_mul(196, 180), 219);
}

TEST(GfMul, Test208)
{
    ASSERT_EQ(divvy_gf_mul(121, 204), 161);
    ASSERT_EQ(divvy_gf_mul(204, 121), 161);
}

TEST(GfMul, Test209)
{
    ASSERT_EQ(divvy_gf_mul(135, 127), 153);
    ASSERT_EQ(divvy_gf_mul(127, 135), 153);
}

TEST(GfMul, Test210)
{
    ASSERT_EQ(divvy_gf_mul(250, 68), 33);
    ASSERT_EQ(divvy_gf_mul(68, 250), 33);
}

TEST(GfMul, Test211)
{
    ASSERT_EQ(divvy_gf_mul(237, 136), 143);
    ASSERT_EQ(divvy_gf_mul(136, 237), 143);
}

TEST(GfMul, Test212)
{
    ASSERT_EQ(divvy_gf_mul(4, 22), 88);
    ASSERT_EQ(divvy_gf_mul(22, 4), 88);
}

TEST(GfMul, Test213)
{
    ASSERT_EQ(divvy_gf_mul(140, 246), 141);
    ASSERT_EQ(divvy_gf_mul(246, 140), 141);
}

TEST(GfMul, Test214)
{
    ASSERT_EQ(divvy_gf_mul(250, 70), 206);
    ASSERT_EQ(divvy_gf_mul(70, 250), 206);
}

TEST(GfMul, Test215)
{
    ASSERT_EQ(divvy_gf_mul(199, 0), 0);
    ASSERT_EQ(divvy_gf_mul(0, 199), 0);
}

TEST(GfMul, Test216)
{
    ASSERT_EQ(divvy_gf_mul(189, 226), 140);
    ASSERT_EQ(divvy_gf_mul(226, 189), 140);
}

TEST(GfMul, Test217)
{
    ASSERT_EQ(divvy_gf_mul(173, 117), 149);
    ASSERT_EQ(divvy_gf_mul(117, 173), 149);
}

TEST(GfMul, Test218)
{
    ASSERT_EQ(divvy_gf_mul(214, 0), 0);
    ASSERT_EQ(divvy_gf_mul(0, 214), 0);
}

TEST(GfMul, Test219)
{
    ASSERT_EQ(divvy_gf_mul(201, 176), 87);
    ASSERT_EQ(divvy_gf_mul(176, 201), 87);
}

TEST(GfMul, Test220)
{
    ASSERT_EQ(divvy_gf_mul(208, 182), 51);
    ASSERT_EQ(divvy_gf_mul(182, 208), 51);
}

TEST(GfMul, Test221)
{
    ASSERT_EQ(divvy_gf_mul(61, 16), 253);
    ASSERT_EQ(divvy_gf_mul(16, 61), 253);
}

TEST(GfMul, Test222)
{
    ASSERT_EQ(divvy_gf_mul(74, 34), 23);
    ASSERT_EQ(divvy_gf_mul(34, 74), 23);
}

TEST(GfMul, Test223)
{
    ASSERT_EQ(divvy_gf_mul(98, 174), 99);
    ASSERT_EQ(divvy_gf_mul(174, 98), 99);
}

TEST(GfMul, Test224)
{
    ASSERT_EQ(divvy_gf_mul(126, 136), 162);
    ASSERT_EQ(divvy_gf_mul(136, 126), 162);
}

TEST(GfMul, Test225)
{
    ASSERT_EQ(divvy_gf_mul(96, 218), 34);
    ASSERT_EQ(divvy_gf_mul(218, 96), 34);
}

TEST(GfMul, Test226)
{
    ASSERT_EQ(divvy_gf_mul(242, 225), 246);
    ASSERT_EQ(divvy_gf_mul(225, 242), 246);
}

TEST(GfMul, Test227)
{
    ASSERT_EQ(divvy_gf_mul(119, 251), 8);
    ASSERT_EQ(divvy_gf_mul(251, 119), 8);
}

TEST(GfMul, Test228)
{
    ASSERT_EQ(divvy_gf_mul(155, 245), 54);
    ASSERT_EQ(divvy_gf_mul(245, 155), 54);
}

TEST(GfMul, Test229)
{
    ASSERT_EQ(divvy_gf_mul(196, 47), 227);
    ASSERT_EQ(divvy_gf_mul(47, 196), 227);
}

TEST(GfMul, Test230)
{
    ASSERT_EQ(divvy_gf_mul(221, 100), 64);
    ASSERT_EQ(divvy_gf_mul(100, 221), 64);
}

TEST(GfMul, Test231)
{
    ASSERT_EQ(divvy_gf_mul(159, 252), 196);
    ASSERT_EQ(divvy_gf_mul(252, 159), 196);
}

TEST(GfMul, Test232)
{
    ASSERT_EQ(divvy_gf_mul(1, 162), 162);
    ASSERT_EQ(divvy_gf_mul(162, 1), 162);
}

TEST(GfMul, Test233)
{
    ASSERT_EQ(divvy_gf_mul(228, 174), 218);
    ASSERT_EQ(divvy_gf_mul(174, 228), 218);
}

TEST(GfMul, Test234)
{
    ASSERT_EQ(divvy_gf_mul(54, 173), 129);
    ASSERT_EQ(divvy_gf_mul(173, 54), 129);
}

TEST(GfMul, Test235)
{
    ASSERT_EQ(divvy_gf_mul(168, 97), 215);
    ASSERT_EQ(divvy_gf_mul(97, 168), 215);
}

TEST(GfMul, Test236)
{
    ASSERT_EQ(divvy_gf_mul(148, 125), 154);
    ASSERT_EQ(divvy_gf_mul(125, 148), 154);
}

TEST(GfMul, Test237)
{
    ASSERT_EQ(divvy_gf_mul(148, 195), 233);
    ASSERT_EQ(divvy_gf_mul(195, 148), 233);
}

TEST(GfMul, Test238)
{
    ASSERT_EQ(divvy_gf_mul(109, 154), 41);
    ASSERT_EQ(divvy_gf_mul(154, 109), 41);
}

TEST(GfMul, Test239)
{
    ASSERT_EQ(divvy_gf_mul(183, 157), 83);
    ASSERT_EQ(divvy_gf_mul(157, 183), 83);
}

TEST(GfMul, Test240)
{
    ASSERT_EQ(divvy_gf_mul(41, 35), 44);
    ASSERT_EQ(divvy_gf_mul(35, 41), 44);
}

TEST(GfMul, Test241)
{
    ASSERT_EQ(divvy_gf_mul(34, 43), 65);
    ASSERT_EQ(divvy_gf_mul(43, 34), 65);
}

TEST(GfMul, Test242)
{
    ASSERT_EQ(divvy_gf_mul(91, 217), 33);
    ASSERT_EQ(divvy_gf_mul(217, 91), 33);
}

TEST(GfMul, Test243)
{
    ASSERT_EQ(divvy_gf_mul(206, 24), 126);
    ASSERT_EQ(divvy_gf_mul(24, 206), 126);
}

TEST(GfMul, Test244)
{
    ASSERT_EQ(divvy_gf_mul(88, 27), 233);
    ASSERT_EQ(divvy_gf_mul(27, 88), 233);
}

TEST(GfMul, Test245)
{
    ASSERT_EQ(divvy_gf_mul(84, 170), 243);
    ASSERT_EQ(divvy_gf_mul(170, 84), 243);
}

TEST(GfMul, Test246)
{
    ASSERT_EQ(divvy_gf_mul(39, 21), 253);
    ASSERT_EQ(divvy_gf_mul(21, 39), 253);
}

TEST(GfMul, Test247)
{
    ASSERT_EQ(divvy_gf_mul(179, 59), 117);
    ASSERT_EQ(divvy_gf_mul(59, 179), 117);
}

TEST(GfMul, Test248)
{
    ASSERT_EQ(divvy_gf_mul(191, 230), 153);
    ASSERT_EQ(divvy_gf_mul(230, 191), 153);
}

TEST(GfMul, Test249)
{
    ASSERT_EQ(divvy_gf_mul(137, 26), 101);
    ASSERT_EQ(divvy_gf_mul(26, 137), 101);
}

TEST(GfMul, Test250)
{
    ASSERT_EQ(divvy_gf_mul(55, 177), 14);
    ASSERT_EQ(divvy_gf_mul(177, 55), 14);
}

TEST(GfMul, Test251)
{
    ASSERT_EQ(divvy_gf_mul(37, 184), 132);
    ASSERT_EQ(divvy_gf_mul(184, 37), 132);
}

TEST(GfMul, Test252)
{
    ASSERT_EQ(divvy_gf_mul(207, 40), 170);
    ASSERT_EQ(divvy_gf_mul(40, 207), 170);
}

TEST(GfMul, Test253)
{
    ASSERT_EQ(divvy_gf_mul(20, 191), 207);
    ASSERT_EQ(divvy_gf_mul(191, 20), 207);
}

TEST(GfMul, Test254)
{
    ASSERT_EQ(divvy_gf_mul(24, 163), 177);
    ASSERT_EQ(divvy_gf_mul(163, 24), 177);
}

TEST(GfMul, Test255)
{
    ASSERT_EQ(divvy_gf_mul(121, 128), 210);
    ASSERT_EQ(divvy_gf_mul(128, 121), 210);
}

TEST(GfMul, Test256)
{
    ASSERT_EQ(divvy_gf_mul(193, 231), 211);
    ASSERT_EQ(divvy_gf_mul(231, 193), 211);
}

TEST(GfMul, Test257)
{
    ASSERT_EQ(divvy_gf_mul(204, 93), 84);
    ASSERT_EQ(divvy_gf_mul(93, 204), 84);
}

TEST(GfMul, Test258)
{
    ASSERT_EQ(divvy_gf_mul(137, 123), 71);
    ASSERT_EQ(divvy_gf_mul(123, 137), 71);
}

TEST(GfMul, Test259)
{
    ASSERT_EQ(divvy_gf_mul(18, 152), 104);
    ASSERT_EQ(divvy_gf_mul(152, 18), 104);
}

TEST(GfMul, Test260)
{
    ASSERT_EQ(divvy_gf_mul(145, 24), 55);
    ASSERT_EQ(divvy_gf_mul(24, 145), 55);
}

TEST(GfMul, Test261)
{
    ASSERT_EQ(divvy_gf_mul(173, 222), 241);
    ASSERT_EQ(divvy_gf_mul(222, 173), 241);
}

TEST(GfMul, Test262)
{
    ASSERT_EQ(divvy_gf_mul(106, 35), 81);
    ASSERT_EQ(divvy_gf_mul(35, 106), 81);
}

TEST(GfMul, Test263)
{
    ASSERT_EQ(divvy_gf_mul(135, 107), 27);
    ASSERT_EQ(divvy_gf_mul(107, 135), 27);
}

TEST(GfMul, Test264)
{
    ASSERT_EQ(divvy_gf_mul(207, 78), 189);
    ASSERT_EQ(divvy_gf_mul(78, 207), 189);
}

TEST(GfMul, Test265)
{
    ASSERT_EQ(divvy_gf_mul(65, 83), 84);
    ASSERT_EQ(divvy_gf_mul(83, 65), 84);
}

TEST(GfMul, Test266)
{
    ASSERT_EQ(divvy_gf_mul(230, 167), 10);
    ASSERT_EQ(divvy_gf_mul(167, 230), 10);
}

TEST(GfMul, Test267)
{
    ASSERT_EQ(divvy_gf_mul(130, 35), 118);
    ASSERT_EQ(divvy_gf_mul(35, 130), 118);
}

TEST(GfMul, Test268)
{
    ASSERT_EQ(divvy_gf_mul(202, 142), 32);
    ASSERT_EQ(divvy_gf_mul(142, 202), 32);
}

TEST(GfMul, Test269)
{
    ASSERT_EQ(divvy_gf_mul(113, 97), 140);
    ASSERT_EQ(divvy_gf_mul(97, 113), 140);
}

TEST(GfMul, Test270)
{
    ASSERT_EQ(divvy_gf_mul(127, 153), 228);
    ASSERT_EQ(divvy_gf_mul(153, 127), 228);
}

TEST(GfMul, Test271)
{
    ASSERT_EQ(divvy_gf_mul(89, 45), 13);
    ASSERT_EQ(divvy_gf_mul(45, 89), 13);
}

TEST(GfMul, Test272)
{
    ASSERT_EQ(divvy_gf_mul(98, 90), 112);
    ASSERT_EQ(divvy_gf_mul(90, 98), 112);
}

TEST(GfMul, Test273)
{
    ASSERT_EQ(divvy_gf_mul(194, 99), 8);
    ASSERT_EQ(divvy_gf_mul(99, 194), 8);
}

TEST(GfMul, Test274)
{
    ASSERT_EQ(divvy_gf_mul(120, 202), 102);
    ASSERT_EQ(divvy_gf_mul(202, 120), 102);
}

TEST(GfMul, Test275)
{
    ASSERT_EQ(divvy_gf_mul(12, 50), 67);
    ASSERT_EQ(divvy_gf_mul(50, 12), 67);
}

TEST(GfMul, Test276)
{
    ASSERT_EQ(divvy_gf_mul(240, 239), 248);
    ASSERT_EQ(divvy_gf_mul(239, 240), 248);
}

TEST(GfMul, Test277)
{
    ASSERT_EQ(divvy_gf_mul(143, 161), 132);
    ASSERT_EQ(divvy_gf_mul(161, 143), 132);
}

TEST(GfMul, Test278)
{
    ASSERT_EQ(divvy_gf_mul(116, 126), 169);
    ASSERT_EQ(divvy_gf_mul(126, 116), 169);
}

TEST(GfMul, Test279)
{
    ASSERT_EQ(divvy_gf_mul(17, 67), 31);
    ASSERT_EQ(divvy_gf_mul(67, 17), 31);
}

TEST(GfMul, Test280)
{
    ASSERT_EQ(divvy_gf_mul(153, 102), 138);
    ASSERT_EQ(divvy_gf_mul(102, 153), 138);
}

TEST(GfMul, Test281)
{
    ASSERT_EQ(divvy_gf_mul(136, 97), 67);
    ASSERT_EQ(divvy_gf_mul(97, 136), 67);
}

TEST(GfMul, Test282)
{
    ASSERT_EQ(divvy_gf_mul(62, 200), 192);
    ASSERT_EQ(divvy_gf_mul(200, 62), 192);
}

TEST(GfMul, Test283)
{
    ASSERT_EQ(divvy_gf_mul(110, 143), 235);
    ASSERT_EQ(divvy_gf_mul(143, 110), 235);
}

TEST(GfMul, Test284)
{
    ASSERT_EQ(divvy_gf_mul(114, 235), 83);
    ASSERT_EQ(divvy_gf_mul(235, 114), 83);
}

TEST(GfMul, Test285)
{
    ASSERT_EQ(divvy_gf_mul(213, 228), 244);
    ASSERT_EQ(divvy_gf_mul(228, 213), 244);
}

TEST(GfMul, Test286)
{
    ASSERT_EQ(divvy_gf_mul(48, 32), 90);
    ASSERT_EQ(divvy_gf_mul(32, 48), 90);
}

TEST(GfMul, Test287)
{
    ASSERT_EQ(divvy_gf_mul(29, 51), 97);
    ASSERT_EQ(divvy_gf_mul(51, 29), 97);
}

TEST(GfMul, Test288)
{
    ASSERT_EQ(divvy_gf_mul(120, 237), 140);
    ASSERT_EQ(divvy_gf_mul(237, 120), 140);
}

TEST(GfMul, Test289)
{
    ASSERT_EQ(divvy_gf_mul(113, 198), 220);
    ASSERT_EQ(divvy_gf_mul(198, 113), 220);
}

TEST(GfMul, Test290)
{
    ASSERT_EQ(divvy_gf_mul(78, 169), 7);
    ASSERT_EQ(divvy_gf_mul(169, 78), 7);
}

TEST(GfMul, Test291)
{
    ASSERT_EQ(divvy_gf_mul(63, 254), 246);
    ASSERT_EQ(divvy_gf_mul(254, 63), 246);
}

TEST(GfMul, Test292)
{
    ASSERT_EQ(divvy_gf_mul(143, 171), 149);
    ASSERT_EQ(divvy_gf_mul(171, 143), 149);
}

TEST(GfMul, Test293)
{
    ASSERT_EQ(divvy_gf_mul(128, 225), 252);
    ASSERT_EQ(divvy_gf_mul(225, 128), 252);
}

TEST(GfMul, Test294)
{
    ASSERT_EQ(divvy_gf_mul(142, 142), 206);
    ASSERT_EQ(divvy_gf_mul(142, 142), 206);
}

TEST(GfMul, Test295)
{
    ASSERT_EQ(divvy_gf_mul(70, 62), 157);
    ASSERT_EQ(divvy_gf_mul(62, 70), 157);
}

TEST(GfMul, Test296)
{
    ASSERT_EQ(divvy_gf_mul(228, 0), 0);
    ASSERT_EQ(divvy_gf_mul(0, 228), 0);
}

TEST(GfMul, Test297)
{
    ASSERT_EQ(divvy_gf_mul(12, 212), 135);
    ASSERT_EQ(divvy_gf_mul(212, 12), 135);
}

TEST(GfMul, Test298)
{
    ASSERT_EQ(divvy_gf_mul(113, 194), 3);
    ASSERT_EQ(divvy_gf_mul(194, 113), 3);
}

TEST(GfMul, Test299)
{
    ASSERT_EQ(divvy_gf_mul(123, 231), 163);
    ASSERT_EQ(divvy_gf_mul(231, 123), 163);
}

TEST(GfMul, Test300)
{
    ASSERT_EQ(divvy_gf_mul(156, 114), 42);
    ASSERT_EQ(divvy_gf_mul(114, 156), 42);
}

TEST(GfMul, Test301)
{
    ASSERT_EQ(divvy_gf_mul(195, 189), 123);
    ASSERT_EQ(divvy_gf_mul(189, 195), 123);
}

TEST(GfMul, Test302)
{
    ASSERT_EQ(divvy_gf_mul(245, 86), 200);
    ASSERT_EQ(divvy_gf_mul(86, 245), 200);
}

TEST(GfMul, Test303)
{
    ASSERT_EQ(divvy_gf_mul(252, 172), 48);
    ASSERT_EQ(divvy_gf_mul(172, 252), 48);
}

TEST(GfMul, Test304)
{
    ASSERT_EQ(divvy_gf_mul(242, 91), 183);
    ASSERT_EQ(divvy_gf_mul(91, 242), 183);
}

TEST(GfMul, Test305)
{
    ASSERT_EQ(divvy_gf_mul(252, 108), 177);
    ASSERT_EQ(divvy_gf_mul(108, 252), 177);
}

TEST(GfMul, Test306)
{
    ASSERT_EQ(divvy_gf_mul(246, 254), 163);
    ASSERT_EQ(divvy_gf_mul(254, 246), 163);
}

TEST(GfMul, Test307)
{
    ASSERT_EQ(divvy_gf_mul(20, 39), 218);
    ASSERT_EQ(divvy_gf_mul(39, 20), 218);
}

TEST(GfMul, Test308)
{
    ASSERT_EQ(divvy_gf_mul(85, 69), 134);
    ASSERT_EQ(divvy_gf_mul(69, 85), 134);
}

TEST(GfMul, Test309)
{
    ASSERT_EQ(divvy_gf_mul(113, 199), 173);
    ASSERT_EQ(divvy_gf_mul(199, 113), 173);
}

TEST(GfMul, Test310)
{
    ASSERT_EQ(divvy_gf_mul(200, 110), 36);
    ASSERT_EQ(divvy_gf_mul(110, 200), 36);
}

TEST(GfMul, Test311)
{
    ASSERT_EQ(divvy_gf_mul(134, 126), 96);
    ASSERT_EQ(divvy_gf_mul(126, 134), 96);
}

TEST(GfMul, Test312)
{
    ASSERT_EQ(divvy_gf_mul(50, 66), 80);
    ASSERT_EQ(divvy_gf_mul(66, 50), 80);
}

TEST(GfMul, Test313)
{
    ASSERT_EQ(divvy_gf_mul(199, 76), 110);
    ASSERT_EQ(divvy_gf_mul(76, 199), 110);
}

TEST(GfMul, Test314)
{
    ASSERT_EQ(divvy_gf_mul(164, 72), 217);
    ASSERT_EQ(divvy_gf_mul(72, 164), 217);
}

TEST(GfMul, Test315)
{
    ASSERT_EQ(divvy_gf_mul(174, 41), 181);
    ASSERT_EQ(divvy_gf_mul(41, 174), 181);
}

TEST(GfMul, Test316)
{
    ASSERT_EQ(divvy_gf_mul(39, 86), 151);
    ASSERT_EQ(divvy_gf_mul(86, 39), 151);
}

TEST(GfMul, Test317)
{
    ASSERT_EQ(divvy_gf_mul(210, 186), 235);
    ASSERT_EQ(divvy_gf_mul(186, 210), 235);
}

TEST(GfMul, Test318)
{
    ASSERT_EQ(divvy_gf_mul(136, 113), 27);
    ASSERT_EQ(divvy_gf_mul(113, 136), 27);
}

TEST(GfMul, Test319)
{
    ASSERT_EQ(divvy_gf_mul(93, 183), 53);
    ASSERT_EQ(divvy_gf_mul(183, 93), 53);
}

TEST(GfMul, Test320)
{
    ASSERT_EQ(divvy_gf_mul(158, 12), 210);
    ASSERT_EQ(divvy_gf_mul(12, 158), 210);
}

TEST(GfMul, Test321)
{
    ASSERT_EQ(divvy_gf_mul(224, 205), 78);
    ASSERT_EQ(divvy_gf_mul(205, 224), 78);
}

TEST(GfMul, Test322)
{
    ASSERT_EQ(divvy_gf_mul(196, 55), 109);
    ASSERT_EQ(divvy_gf_mul(55, 196), 109);
}

TEST(GfMul, Test323)
{
    ASSERT_EQ(divvy_gf_mul(179, 114), 16);
    ASSERT_EQ(divvy_gf_mul(114, 179), 16);
}

TEST(GfMul, Test324)
{
    ASSERT_EQ(divvy_gf_mul(95, 178), 120);
    ASSERT_EQ(divvy_gf_mul(178, 95), 120);
}

TEST(GfMul, Test325)
{
    ASSERT_EQ(divvy_gf_mul(133, 223), 64);
    ASSERT_EQ(divvy_gf_mul(223, 133), 64);
}

TEST(GfMul, Test326)
{
    ASSERT_EQ(divvy_gf_mul(123, 20), 6);
    ASSERT_EQ(divvy_gf_mul(20, 123), 6);
}

TEST(GfMul, Test327)
{
    ASSERT_EQ(divvy_gf_mul(37, 185), 161);
    ASSERT_EQ(divvy_gf_mul(185, 37), 161);
}

TEST(GfMul, Test328)
{
    ASSERT_EQ(divvy_gf_mul(1, 75), 75);
    ASSERT_EQ(divvy_gf_mul(75, 1), 75);
}

TEST(GfMul, Test329)
{
    ASSERT_EQ(divvy_gf_mul(140, 20), 30);
    ASSERT_EQ(divvy_gf_mul(20, 140), 30);
}

TEST(GfMul, Test330)
{
    ASSERT_EQ(divvy_gf_mul(179, 12), 21);
    ASSERT_EQ(divvy_gf_mul(12, 179), 21);
}

TEST(GfMul, Test331)
{
    ASSERT_EQ(divvy_gf_mul(44, 190), 99);
    ASSERT_EQ(divvy_gf_mul(190, 44), 99);
}

TEST(GfMul, Test332)
{
    ASSERT_EQ(divvy_gf_mul(174, 136), 119);
    ASSERT_EQ(divvy_gf_mul(136, 174), 119);
}

TEST(GfMul, Test333)
{
    ASSERT_EQ(divvy_gf_mul(103, 15), 59);
    ASSERT_EQ(divvy_gf_mul(15, 103), 59);
}

TEST(GfMul, Test334)
{
    ASSERT_EQ(divvy_gf_mul(71, 158), 123);
    ASSERT_EQ(divvy_gf_mul(158, 71), 123);
}

TEST(GfMul, Test335)
{
    ASSERT_EQ(divvy_gf_mul(19, 231), 192);
    ASSERT_EQ(divvy_gf_mul(231, 19), 192);
}

TEST(GfMul, Test336)
{
    ASSERT_EQ(divvy_gf_mul(235, 18), 255);
    ASSERT_EQ(divvy_gf_mul(18, 235), 255);
}

TEST(GfMul, Test337)
{
    ASSERT_EQ(divvy_gf_mul(230, 179), 93);
    ASSERT_EQ(divvy_gf_mul(179, 230), 93);
}

TEST(GfMul, Test338)
{
    ASSERT_EQ(divvy_gf_mul(226, 196), 124);
    ASSERT_EQ(divvy_gf_mul(196, 226), 124);
}

TEST(GfMul, Test339)
{
    ASSERT_EQ(divvy_gf_mul(57, 177), 122);
    ASSERT_EQ(divvy_gf_mul(177, 57), 122);
}

TEST(GfMul, Test340)
{
    ASSERT_EQ(divvy_gf_mul(79, 127), 65);
    ASSERT_EQ(divvy_gf_mul(127, 79), 65);
}

TEST(GfMul, Test341)
{
    ASSERT_EQ(divvy_gf_mul(29, 71), 82);
    ASSERT_EQ(divvy_gf_mul(71, 29), 82);
}

TEST(GfMul, Test342)
{
    ASSERT_EQ(divvy_gf_mul(240, 13), 220);
    ASSERT_EQ(divvy_gf_mul(13, 240), 220);
}

TEST(GfMul, Test343)
{
    ASSERT_EQ(divvy_gf_mul(47, 27), 212);
    ASSERT_EQ(divvy_gf_mul(27, 47), 212);
}

TEST(GfMul, Test344)
{
    ASSERT_EQ(divvy_gf_mul(136, 236), 7);
    ASSERT_EQ(divvy_gf_mul(236, 136), 7);
}

TEST(GfMul, Test345)
{
    ASSERT_EQ(divvy_gf_mul(191, 151), 61);
    ASSERT_EQ(divvy_gf_mul(151, 191), 61);
}

TEST(GfMul, Test346)
{
    ASSERT_EQ(divvy_gf_mul(117, 146), 115);
    ASSERT_EQ(divvy_gf_mul(146, 117), 115);
}

TEST(GfMul, Test347)
{
    ASSERT_EQ(divvy_gf_mul(137, 218), 40);
    ASSERT_EQ(divvy_gf_mul(218, 137), 40);
}

TEST(GfMul, Test348)
{
    ASSERT_EQ(divvy_gf_mul(114, 142), 175);
    ASSERT_EQ(divvy_gf_mul(142, 114), 175);
}

TEST(GfMul, Test349)
{
    ASSERT_EQ(divvy_gf_mul(21, 205), 176);
    ASSERT_EQ(divvy_gf_mul(205, 21), 176);
}

TEST(GfMul, Test350)
{
    ASSERT_EQ(divvy_gf_mul(231, 113), 15);
    ASSERT_EQ(divvy_gf_mul(113, 231), 15);
}

TEST(GfMul, Test351)
{
    ASSERT_EQ(divvy_gf_mul(247, 151), 19);
    ASSERT_EQ(divvy_gf_mul(151, 247), 19);
}

TEST(GfMul, Test352)
{
    ASSERT_EQ(divvy_gf_mul(20, 221), 38);
    ASSERT_EQ(divvy_gf_mul(221, 20), 38);
}

TEST(GfMul, Test353)
{
    ASSERT_EQ(divvy_gf_mul(124, 8), 205);
    ASSERT_EQ(divvy_gf_mul(8, 124), 205);
}

TEST(GfMul, Test354)
{
    ASSERT_EQ(divvy_gf_mul(106, 98), 254);
    ASSERT_EQ(divvy_gf_mul(98, 106), 254);
}

TEST(GfMul, Test355)
{
    ASSERT_EQ(divvy_gf_mul(193, 164), 45);
    ASSERT_EQ(divvy_gf_mul(164, 193), 45);
}

TEST(GfMul, Test356)
{
    ASSERT_EQ(divvy_gf_mul(167, 202), 200);
    ASSERT_EQ(divvy_gf_mul(202, 167), 200);
}

TEST(GfMul, Test357)
{
    ASSERT_EQ(divvy_gf_mul(36, 72), 248);
    ASSERT_EQ(divvy_gf_mul(72, 36), 248);
}

TEST(GfMul, Test358)
{
    ASSERT_EQ(divvy_gf_mul(174, 182), 171);
    ASSERT_EQ(divvy_gf_mul(182, 174), 171);
}

TEST(GfMul, Test359)
{
    ASSERT_EQ(divvy_gf_mul(120, 34), 105);
    ASSERT_EQ(divvy_gf_mul(34, 120), 105);
}

TEST(GfMul, Test360)
{
    ASSERT_EQ(divvy_gf_mul(254, 217), 44);
    ASSERT_EQ(divvy_gf_mul(217, 254), 44);
}

TEST(GfMul, Test361)
{
    ASSERT_EQ(divvy_gf_mul(106, 223), 222);
    ASSERT_EQ(divvy_gf_mul(223, 106), 222);
}

TEST(GfMul, Test362)
{
    ASSERT_EQ(divvy_gf_mul(141, 34), 17);
    ASSERT_EQ(divvy_gf_mul(34, 141), 17);
}

TEST(GfMul, Test363)
{
    ASSERT_EQ(divvy_gf_mul(103, 22), 99);
    ASSERT_EQ(divvy_gf_mul(22, 103), 99);
}

TEST(GfMul, Test364)
{
    ASSERT_EQ(divvy_gf_mul(161, 242), 36);
    ASSERT_EQ(divvy_gf_mul(242, 161), 36);
}

TEST(GfMul, Test365)
{
    ASSERT_EQ(divvy_gf_mul(111, 102), 168);
    ASSERT_EQ(divvy_gf_mul(102, 111), 168);
}

TEST(GfMul, Test366)
{
    ASSERT_EQ(divvy_gf_mul(230, 177), 138);
    ASSERT_EQ(divvy_gf_mul(177, 230), 138);
}

TEST(GfMul, Test367)
{
    ASSERT_EQ(divvy_gf_mul(111, 188), 48);
    ASSERT_EQ(divvy_gf_mul(188, 111), 48);
}

TEST(GfMul, Test368)
{
    ASSERT_EQ(divvy_gf_mul(203, 56), 14);
    ASSERT_EQ(divvy_gf_mul(56, 203), 14);
}

TEST(GfMul, Test369)
{
    ASSERT_EQ(divvy_gf_mul(12, 31), 132);
    ASSERT_EQ(divvy_gf_mul(31, 12), 132);
}

TEST(GfMul, Test370)
{
    ASSERT_EQ(divvy_gf_mul(171, 222), 3);
    ASSERT_EQ(divvy_gf_mul(222, 171), 3);
}

TEST(GfMul, Test371)
{
    ASSERT_EQ(divvy_gf_mul(109, 43), 253);
    ASSERT_EQ(divvy_gf_mul(43, 109), 253);
}

TEST(GfMul, Test372)
{
    ASSERT_EQ(divvy_gf_mul(249, 18), 224);
    ASSERT_EQ(divvy_gf_mul(18, 249), 224);
}

TEST(GfMul, Test373)
{
    ASSERT_EQ(divvy_gf_mul(158, 41), 68);
    ASSERT_EQ(divvy_gf_mul(41, 158), 68);
}

TEST(GfMul, Test374)
{
    ASSERT_EQ(divvy_gf_mul(32, 167), 39);
    ASSERT_EQ(divvy_gf_mul(167, 32), 39);
}

TEST(GfMul, Test375)
{
    ASSERT_EQ(divvy_gf_mul(8, 111), 85);
    ASSERT_EQ(divvy_gf_mul(111, 8), 85);
}

TEST(GfMul, Test376)
{
    ASSERT_EQ(divvy_gf_mul(71, 72), 126);
    ASSERT_EQ(divvy_gf_mul(72, 71), 126);
}

TEST(GfMul, Test377)
{
    ASSERT_EQ(divvy_gf_mul(128, 151), 239);
    ASSERT_EQ(divvy_gf_mul(151, 128), 239);
}

TEST(GfMul, Test378)
{
    ASSERT_EQ(divvy_gf_mul(130, 96), 38);
    ASSERT_EQ(divvy_gf_mul(96, 130), 38);
}

TEST(GfMul, Test379)
{
    ASSERT_EQ(divvy_gf_mul(84, 35), 146);
    ASSERT_EQ(divvy_gf_mul(35, 84), 146);
}

TEST(GfMul, Test380)
{
    ASSERT_EQ(divvy_gf_mul(171, 62), 26);
    ASSERT_EQ(divvy_gf_mul(62, 171), 26);
}

TEST(GfMul, Test381)
{
    ASSERT_EQ(divvy_gf_mul(107, 186), 151);
    ASSERT_EQ(divvy_gf_mul(186, 107), 151);
}

TEST(GfMul, Test382)
{
    ASSERT_EQ(divvy_gf_mul(137, 66), 50);
    ASSERT_EQ(divvy_gf_mul(66, 137), 50);
}

TEST(GfMul, Test383)
{
    ASSERT_EQ(divvy_gf_mul(29, 76), 157);
    ASSERT_EQ(divvy_gf_mul(76, 29), 157);
}

TEST(GfMul, Test384)
{
    ASSERT_EQ(divvy_gf_mul(69, 126), 47);
    ASSERT_EQ(divvy_gf_mul(126, 69), 47);
}

TEST(GfMul, Test385)
{
    ASSERT_EQ(divvy_gf_mul(97, 76), 137);
    ASSERT_EQ(divvy_gf_mul(76, 97), 137);
}

TEST(GfMul, Test386)
{
    ASSERT_EQ(divvy_gf_mul(105, 206), 7);
    ASSERT_EQ(divvy_gf_mul(206, 105), 7);
}

TEST(GfMul, Test387)
{
    ASSERT_EQ(divvy_gf_mul(221, 39), 219);
    ASSERT_EQ(divvy_gf_mul(39, 221), 219);
}

TEST(GfMul, Test388)
{
    ASSERT_EQ(divvy_gf_mul(188, 204), 54);
    ASSERT_EQ(divvy_gf_mul(204, 188), 54);
}

TEST(GfMul, Test389)
{
    ASSERT_EQ(divvy_gf_mul(197, 198), 116);
    ASSERT_EQ(divvy_gf_mul(198, 197), 116);
}

TEST(GfMul, Test390)
{
    ASSERT_EQ(divvy_gf_mul(197, 118), 34);
    ASSERT_EQ(divvy_gf_mul(118, 197), 34);
}

TEST(GfMul, Test391)
{
    ASSERT_EQ(divvy_gf_mul(74, 171), 1);
    ASSERT_EQ(divvy_gf_mul(171, 74), 1);
}

TEST(GfMul, Test392)
{
    ASSERT_EQ(divvy_gf_mul(104, 100), 81);
    ASSERT_EQ(divvy_gf_mul(100, 104), 81);
}

TEST(GfMul, Test393)
{
    ASSERT_EQ(divvy_gf_mul(233, 40), 45);
    ASSERT_EQ(divvy_gf_mul(40, 233), 45);
}

TEST(GfMul, Test394)
{
    ASSERT_EQ(divvy_gf_mul(185, 70), 52);
    ASSERT_EQ(divvy_gf_mul(70, 185), 52);
}

TEST(GfMul, Test395)
{
    ASSERT_EQ(divvy_gf_mul(41, 241), 49);
    ASSERT_EQ(divvy_gf_mul(241, 41), 49);
}

TEST(GfMul, Test396)
{
    ASSERT_EQ(divvy_gf_mul(246, 87), 196);
    ASSERT_EQ(divvy_gf_mul(87, 246), 196);
}

TEST(GfMul, Test397)
{
    ASSERT_EQ(divvy_gf_mul(120, 25), 84);
    ASSERT_EQ(divvy_gf_mul(25, 120), 84);
}

TEST(GfMul, Test398)
{
    ASSERT_EQ(divvy_gf_mul(12, 126), 62);
    ASSERT_EQ(divvy_gf_mul(126, 12), 62);
}

TEST(GfMul, Test399)
{
    ASSERT_EQ(divvy_gf_mul(174, 182), 171);
    ASSERT_EQ(divvy_gf_mul(182, 174), 171);
}

TEST(GfMul, Test400)
{
    ASSERT_EQ(divvy_gf_mul(48, 96), 238);
    ASSERT_EQ(divvy_gf_mul(96, 48), 238);
}

TEST(GfMul, Test401)
{
    ASSERT_EQ(divvy_gf_mul(39, 61), 82);
    ASSERT_EQ(divvy_gf_mul(61, 39), 82);
}

TEST(GfMul, Test402)
{
    ASSERT_EQ(divvy_gf_mul(246, 154), 118);
    ASSERT_EQ(divvy_gf_mul(154, 246), 118);
}

TEST(GfMul, Test403)
{
    ASSERT_EQ(divvy_gf_mul(119, 248), 145);
    ASSERT_EQ(divvy_gf_mul(248, 119), 145);
}

TEST(GfMul, Test404)
{
    ASSERT_EQ(divvy_gf_mul(253, 12), 112);
    ASSERT_EQ(divvy_gf_mul(12, 253), 112);
}

TEST(GfMul, Test405)
{
    ASSERT_EQ(divvy_gf_mul(54, 47), 179);
    ASSERT_EQ(divvy_gf_mul(47, 54), 179);
}

TEST(GfMul, Test406)
{
    ASSERT_EQ(divvy_gf_mul(133, 2), 17);
    ASSERT_EQ(divvy_gf_mul(2, 133), 17);
}

TEST(GfMul, Test407)
{
    ASSERT_EQ(divvy_gf_mul(31, 146), 204);
    ASSERT_EQ(divvy_gf_mul(146, 31), 204);
}

TEST(GfMul, Test408)
{
    ASSERT_EQ(divvy_gf_mul(11, 146), 81);
    ASSERT_EQ(divvy_gf_mul(146, 11), 81);
}

TEST(GfMul, Test409)
{
    ASSERT_EQ(divvy_gf_mul(233, 54), 118);
    ASSERT_EQ(divvy_gf_mul(54, 233), 118);
}

TEST(GfMul, Test410)
{
    ASSERT_EQ(divvy_gf_mul(90, 48), 98);
    ASSERT_EQ(divvy_gf_mul(48, 90), 98);
}

TEST(GfMul, Test411)
{
    ASSERT_EQ(divvy_gf_mul(108, 137), 157);
    ASSERT_EQ(divvy_gf_mul(137, 108), 157);
}

TEST(GfMul, Test412)
{
    ASSERT_EQ(divvy_gf_mul(157, 40), 162);
    ASSERT_EQ(divvy_gf_mul(40, 157), 162);
}

TEST(GfMul, Test413)
{
    ASSERT_EQ(divvy_gf_mul(96, 118), 198);
    ASSERT_EQ(divvy_gf_mul(118, 96), 198);
}

TEST(GfMul, Test414)
{
    ASSERT_EQ(divvy_gf_mul(238, 172), 93);
    ASSERT_EQ(divvy_gf_mul(172, 238), 93);
}

TEST(GfMul, Test415)
{
    ASSERT_EQ(divvy_gf_mul(51, 231), 63);
    ASSERT_EQ(divvy_gf_mul(231, 51), 63);
}

TEST(GfMul, Test416)
{
    ASSERT_EQ(divvy_gf_mul(186, 103), 238);
    ASSERT_EQ(divvy_gf_mul(103, 186), 238);
}

TEST(GfMul, Test417)
{
    ASSERT_EQ(divvy_gf_mul(128, 124), 100);
    ASSERT_EQ(divvy_gf_mul(124, 128), 100);
}

TEST(GfMul, Test418)
{
    ASSERT_EQ(divvy_gf_mul(75, 10), 248);
    ASSERT_EQ(divvy_gf_mul(10, 75), 248);
}

TEST(GfMul, Test419)
{
    ASSERT_EQ(divvy_gf_mul(201, 36), 65);
    ASSERT_EQ(divvy_gf_mul(36, 201), 65);
}

TEST(GfMul, Test420)
{
    ASSERT_EQ(divvy_gf_mul(93, 31), 241);
    ASSERT_EQ(divvy_gf_mul(31, 93), 241);
}

TEST(GfMul, Test421)
{
    ASSERT_EQ(divvy_gf_mul(158, 225), 87);
    ASSERT_EQ(divvy_gf_mul(225, 158), 87);
}

TEST(GfMul, Test422)
{
    ASSERT_EQ(divvy_gf_mul(114, 32), 194);
    ASSERT_EQ(divvy_gf_mul(32, 114), 194);
}

TEST(GfMul, Test423)
{
    ASSERT_EQ(divvy_gf_mul(221, 20), 38);
    ASSERT_EQ(divvy_gf_mul(20, 221), 38);
}

TEST(GfMul, Test424)
{
    ASSERT_EQ(divvy_gf_mul(162, 145), 70);
    ASSERT_EQ(divvy_gf_mul(145, 162), 70);
}

TEST(GfMul, Test425)
{
    ASSERT_EQ(divvy_gf_mul(111, 189), 95);
    ASSERT_EQ(divvy_gf_mul(189, 111), 95);
}

TEST(GfMul, Test426)
{
    ASSERT_EQ(divvy_gf_mul(83, 11), 91);
    ASSERT_EQ(divvy_gf_mul(11, 83), 91);
}

TEST(GfMul, Test427)
{
    ASSERT_EQ(divvy_gf_mul(192, 94), 190);
    ASSERT_EQ(divvy_gf_mul(94, 192), 190);
}

TEST(GfMul, Test428)
{
    ASSERT_EQ(divvy_gf_mul(154, 76), 117);
    ASSERT_EQ(divvy_gf_mul(76, 154), 117);
}

TEST(GfMul, Test429)
{
    ASSERT_EQ(divvy_gf_mul(158, 188), 180);
    ASSERT_EQ(divvy_gf_mul(188, 158), 180);
}

TEST(GfMul, Test430)
{
    ASSERT_EQ(divvy_gf_mul(248, 59), 185);
    ASSERT_EQ(divvy_gf_mul(59, 248), 185);
}

TEST(GfMul, Test431)
{
    ASSERT_EQ(divvy_gf_mul(123, 53), 132);
    ASSERT_EQ(divvy_gf_mul(53, 123), 132);
}

TEST(GfMul, Test432)
{
    ASSERT_EQ(divvy_gf_mul(109, 38), 122);
    ASSERT_EQ(divvy_gf_mul(38, 109), 122);
}

TEST(GfMul, Test433)
{
    ASSERT_EQ(divvy_gf_mul(82, 236), 146);
    ASSERT_EQ(divvy_gf_mul(236, 82), 146);
}

TEST(GfMul, Test434)
{
    ASSERT_EQ(divvy_gf_mul(91, 27), 196);
    ASSERT_EQ(divvy_gf_mul(27, 91), 196);
}

TEST(GfMul, Test435)
{
    ASSERT_EQ(divvy_gf_mul(240, 117), 255);
    ASSERT_EQ(divvy_gf_mul(117, 240), 255);
}

TEST(GfMul, Test436)
{
    ASSERT_EQ(divvy_gf_mul(28, 203), 7);
    ASSERT_EQ(divvy_gf_mul(203, 28), 7);
}

TEST(GfMul, Test437)
{
    ASSERT_EQ(divvy_gf_mul(212, 91), 227);
    ASSERT_EQ(divvy_gf_mul(91, 212), 227);
}

TEST(GfMul, Test438)
{
    ASSERT_EQ(divvy_gf_mul(95, 199), 248);
    ASSERT_EQ(divvy_gf_mul(199, 95), 248);
}

TEST(GfMul, Test439)
{
    ASSERT_EQ(divvy_gf_mul(130, 224), 167);
    ASSERT_EQ(divvy_gf_mul(224, 130), 167);
}

TEST(GfMul, Test440)
{
    ASSERT_EQ(divvy_gf_mul(97, 71), 15);
    ASSERT_EQ(divvy_gf_mul(71, 97), 15);
}

TEST(GfMul, Test441)
{
    ASSERT_EQ(divvy_gf_mul(219, 101), 216);
    ASSERT_EQ(divvy_gf_mul(101, 219), 216);
}

TEST(GfMul, Test442)
{
    ASSERT_EQ(divvy_gf_mul(141, 204), 102);
    ASSERT_EQ(divvy_gf_mul(204, 141), 102);
}

TEST(GfMul, Test443)
{
    ASSERT_EQ(divvy_gf_mul(244, 30), 54);
    ASSERT_EQ(divvy_gf_mul(30, 244), 54);
}

TEST(GfMul, Test444)
{
    ASSERT_EQ(divvy_gf_mul(42, 196), 26);
    ASSERT_EQ(divvy_gf_mul(196, 42), 26);
}

TEST(GfMul, Test445)
{
    ASSERT_EQ(divvy_gf_mul(151, 109), 174);
    ASSERT_EQ(divvy_gf_mul(109, 151), 174);
}

TEST(GfMul, Test446)
{
    ASSERT_EQ(divvy_gf_mul(2, 40), 80);
    ASSERT_EQ(divvy_gf_mul(40, 2), 80);
}

TEST(GfMul, Test447)
{
    ASSERT_EQ(divvy_gf_mul(168, 118), 204);
    ASSERT_EQ(divvy_gf_mul(118, 168), 204);
}

TEST(GfMul, Test448)
{
    ASSERT_EQ(divvy_gf_mul(173, 73), 74);
    ASSERT_EQ(divvy_gf_mul(73, 173), 74);
}

TEST(GfMul, Test449)
{
    ASSERT_EQ(divvy_gf_mul(209, 143), 92);
    ASSERT_EQ(divvy_gf_mul(143, 209), 92);
}

TEST(GfMul, Test450)
{
    ASSERT_EQ(divvy_gf_mul(48, 194), 167);
    ASSERT_EQ(divvy_gf_mul(194, 48), 167);
}

TEST(GfMul, Test451)
{
    ASSERT_EQ(divvy_gf_mul(19, 28), 255);
    ASSERT_EQ(divvy_gf_mul(28, 19), 255);
}

TEST(GfMul, Test452)
{
    ASSERT_EQ(divvy_gf_mul(46, 31), 119);
    ASSERT_EQ(divvy_gf_mul(31, 46), 119);
}

TEST(GfMul, Test453)
{
    ASSERT_EQ(divvy_gf_mul(167, 59), 4);
    ASSERT_EQ(divvy_gf_mul(59, 167), 4);
}

TEST(GfMul, Test454)
{
    ASSERT_EQ(divvy_gf_mul(182, 31), 125);
    ASSERT_EQ(divvy_gf_mul(31, 182), 125);
}

TEST(GfMul, Test455)
{
    ASSERT_EQ(divvy_gf_mul(87, 208), 35);
    ASSERT_EQ(divvy_gf_mul(208, 87), 35);
}

TEST(GfMul, Test456)
{
    ASSERT_EQ(divvy_gf_mul(69, 20), 51);
    ASSERT_EQ(divvy_gf_mul(20, 69), 51);
}

TEST(GfMul, Test457)
{
    ASSERT_EQ(divvy_gf_mul(96, 37), 79);
    ASSERT_EQ(divvy_gf_mul(37, 96), 79);
}

TEST(GfMul, Test458)
{
    ASSERT_EQ(divvy_gf_mul(98, 102), 80);
    ASSERT_EQ(divvy_gf_mul(102, 98), 80);
}

TEST(GfMul, Test459)
{
    ASSERT_EQ(divvy_gf_mul(216, 6), 230);
    ASSERT_EQ(divvy_gf_mul(6, 216), 230);
}

TEST(GfMul, Test460)
{
    ASSERT_EQ(divvy_gf_mul(226, 44), 171);
    ASSERT_EQ(divvy_gf_mul(44, 226), 171);
}

TEST(GfMul, Test461)
{
    ASSERT_EQ(divvy_gf_mul(209, 190), 87);
    ASSERT_EQ(divvy_gf_mul(190, 209), 87);
}

TEST(GfMul, Test462)
{
    ASSERT_EQ(divvy_gf_mul(82, 153), 45);
    ASSERT_EQ(divvy_gf_mul(153, 82), 45);
}

TEST(GfMul, Test463)
{
    ASSERT_EQ(divvy_gf_mul(67, 5), 84);
    ASSERT_EQ(divvy_gf_mul(5, 67), 84);
}

TEST(GfMul, Test464)
{
    ASSERT_EQ(divvy_gf_mul(253, 81), 139);
    ASSERT_EQ(divvy_gf_mul(81, 253), 139);
}

TEST(GfMul, Test465)
{
    ASSERT_EQ(divvy_gf_mul(101, 132), 223);
    ASSERT_EQ(divvy_gf_mul(132, 101), 223);
}

TEST(GfMul, Test466)
{
    ASSERT_EQ(divvy_gf_mul(135, 21), 5);
    ASSERT_EQ(divvy_gf_mul(21, 135), 5);
}

TEST(GfMul, Test467)
{
    ASSERT_EQ(divvy_gf_mul(219, 128), 248);
    ASSERT_EQ(divvy_gf_mul(128, 219), 248);
}

TEST(GfMul, Test468)
{
    ASSERT_EQ(divvy_gf_mul(12, 61), 7);
    ASSERT_EQ(divvy_gf_mul(61, 12), 7);
}

TEST(GfMul, Test469)
{
    ASSERT_EQ(divvy_gf_mul(17, 167), 57);
    ASSERT_EQ(divvy_gf_mul(167, 17), 57);
}

TEST(GfMul, Test470)
{
    ASSERT_EQ(divvy_gf_mul(192, 189), 167);
    ASSERT_EQ(divvy_gf_mul(189, 192), 167);
}

TEST(GfMul, Test471)
{
    ASSERT_EQ(divvy_gf_mul(4, 252), 221);
    ASSERT_EQ(divvy_gf_mul(252, 4), 221);
}

TEST(GfMul, Test472)
{
    ASSERT_EQ(divvy_gf_mul(158, 238), 60);
    ASSERT_EQ(divvy_gf_mul(238, 158), 60);
}

TEST(GfMul, Test473)
{
    ASSERT_EQ(divvy_gf_mul(202, 189), 89);
    ASSERT_EQ(divvy_gf_mul(189, 202), 89);
}

TEST(GfMul, Test474)
{
    ASSERT_EQ(divvy_gf_mul(234, 22), 104);
    ASSERT_EQ(divvy_gf_mul(22, 234), 104);
}

TEST(GfMul, Test475)
{
    ASSERT_EQ(divvy_gf_mul(88, 132), 130);
    ASSERT_EQ(divvy_gf_mul(132, 88), 130);
}

TEST(GfMul, Test476)
{
    ASSERT_EQ(divvy_gf_mul(81, 137), 250);
    ASSERT_EQ(divvy_gf_mul(137, 81), 250);
}

TEST(GfMul, Test477)
{
    ASSERT_EQ(divvy_gf_mul(248, 11), 146);
    ASSERT_EQ(divvy_gf_mul(11, 248), 146);
}

TEST(GfMul, Test478)
{
    ASSERT_EQ(divvy_gf_mul(31, 65), 158);
    ASSERT_EQ(divvy_gf_mul(65, 31), 158);
}

TEST(GfMul, Test479)
{
    ASSERT_EQ(divvy_gf_mul(217, 164), 212);
    ASSERT_EQ(divvy_gf_mul(164, 217), 212);
}

TEST(GfMul, Test480)
{
    ASSERT_EQ(divvy_gf_mul(172, 52), 244);
    ASSERT_EQ(divvy_gf_mul(52, 172), 244);
}

TEST(GfMul, Test481)
{
    ASSERT_EQ(divvy_gf_mul(214, 71), 5);
    ASSERT_EQ(divvy_gf_mul(71, 214), 5);
}

TEST(GfMul, Test482)
{
    ASSERT_EQ(divvy_gf_mul(159, 150), 223);
    ASSERT_EQ(divvy_gf_mul(150, 159), 223);
}

TEST(GfMul, Test483)
{
    ASSERT_EQ(divvy_gf_mul(83, 195), 252);
    ASSERT_EQ(divvy_gf_mul(195, 83), 252);
}

TEST(GfMul, Test484)
{
    ASSERT_EQ(divvy_gf_mul(25, 191), 53);
    ASSERT_EQ(divvy_gf_mul(191, 25), 53);
}

TEST(GfMul, Test485)
{
    ASSERT_EQ(divvy_gf_mul(125, 145), 8);
    ASSERT_EQ(divvy_gf_mul(145, 125), 8);
}

TEST(GfMul, Test486)
{
    ASSERT_EQ(divvy_gf_mul(145, 130), 251);
    ASSERT_EQ(divvy_gf_mul(130, 145), 251);
}

TEST(GfMul, Test487)
{
    ASSERT_EQ(divvy_gf_mul(56, 83), 103);
    ASSERT_EQ(divvy_gf_mul(83, 56), 103);
}

TEST(GfMul, Test488)
{
    ASSERT_EQ(divvy_gf_mul(51, 69), 139);
    ASSERT_EQ(divvy_gf_mul(69, 51), 139);
}

TEST(GfMul, Test489)
{
    ASSERT_EQ(divvy_gf_mul(156, 61), 83);
    ASSERT_EQ(divvy_gf_mul(61, 156), 83);
}

TEST(GfMul, Test490)
{
    ASSERT_EQ(divvy_gf_mul(137, 98), 162);
    ASSERT_EQ(divvy_gf_mul(98, 137), 162);
}

TEST(GfMul, Test491)
{
    ASSERT_EQ(divvy_gf_mul(81, 80), 224);
    ASSERT_EQ(divvy_gf_mul(80, 81), 224);
}

TEST(GfMul, Test492)
{
    ASSERT_EQ(divvy_gf_mul(38, 199), 55);
    ASSERT_EQ(divvy_gf_mul(199, 38), 55);
}

TEST(GfMul, Test493)
{
    ASSERT_EQ(divvy_gf_mul(176, 255), 222);
    ASSERT_EQ(divvy_gf_mul(255, 176), 222);
}

TEST(GfMul, Test494)
{
    ASSERT_EQ(divvy_gf_mul(200, 115), 207);
    ASSERT_EQ(divvy_gf_mul(115, 200), 207);
}

TEST(GfMul, Test495)
{
    ASSERT_EQ(divvy_gf_mul(219, 129), 35);
    ASSERT_EQ(divvy_gf_mul(129, 219), 35);
}

TEST(GfMul, Test496)
{
    ASSERT_EQ(divvy_gf_mul(11, 161), 135);
    ASSERT_EQ(divvy_gf_mul(161, 11), 135);
}

TEST(GfMul, Test497)
{
    ASSERT_EQ(divvy_gf_mul(77, 153), 56);
    ASSERT_EQ(divvy_gf_mul(153, 77), 56);
}

TEST(GfMul, Test498)
{
    ASSERT_EQ(divvy_gf_mul(236, 145), 136);
    ASSERT_EQ(divvy_gf_mul(145, 236), 136);
}

TEST(GfMul, Test499)
{
    ASSERT_EQ(divvy_gf_mul(181, 161), 187);
    ASSERT_EQ(divvy_gf_mul(161, 181), 187);
}

TEST(GfMul, Test500)
{
    ASSERT_EQ(divvy_gf_mul(37, 252), 147);
    ASSERT_EQ(divvy_gf_mul(252, 37), 147);
}

TEST(GfMul, Test501)
{
    ASSERT_EQ(divvy_gf_mul(135, 58), 162);
    ASSERT_EQ(divvy_gf_mul(58, 135), 162);
}

TEST(GfMul, Test502)
{
    ASSERT_EQ(divvy_gf_mul(76, 24), 250);
    ASSERT_EQ(divvy_gf_mul(24, 76), 250);
}

TEST(GfMul, Test503)
{
    ASSERT_EQ(divvy_gf_mul(213, 194), 217);
    ASSERT_EQ(divvy_gf_mul(194, 213), 217);
}

TEST(GfMul, Test504)
{
    ASSERT_EQ(divvy_gf_mul(252, 34), 81);
    ASSERT_EQ(divvy_gf_mul(34, 252), 81);
}

TEST(GfMul, Test505)
{
    ASSERT_EQ(divvy_gf_mul(203, 233), 241);
    ASSERT_EQ(divvy_gf_mul(233, 203), 241);
}

TEST(GfMul, Test506)
{
    ASSERT_EQ(divvy_gf_mul(160, 184), 111);
    ASSERT_EQ(divvy_gf_mul(184, 160), 111);
}

TEST(GfMul, Test507)
{
    ASSERT_EQ(divvy_gf_mul(3, 32), 96);
    ASSERT_EQ(divvy_gf_mul(32, 3), 96);
}

TEST(GfMul, Test508)
{
    ASSERT_EQ(divvy_gf_mul(152, 139), 49);
    ASSERT_EQ(divvy_gf_mul(139, 152), 49);
}

TEST(GfMul, Test509)
{
    ASSERT_EQ(divvy_gf_mul(110, 95), 40);
    ASSERT_EQ(divvy_gf_mul(95, 110), 40);
}

TEST(GfMul, Test510)
{
    ASSERT_EQ(divvy_gf_mul(241, 226), 198);
    ASSERT_EQ(divvy_gf_mul(226, 241), 198);
}

TEST(GfMul, Test511)
{
    ASSERT_EQ(divvy_gf_mul(255, 160), 183);
    ASSERT_EQ(divvy_gf_mul(160, 255), 183);
}

TEST(GfMul, Test512)
{
    ASSERT_EQ(divvy_gf_mul(36, 137), 130);
    ASSERT_EQ(divvy_gf_mul(137, 36), 130);
}

TEST(GfMul, Test513)
{
    ASSERT_EQ(divvy_gf_mul(220, 175), 19);
    ASSERT_EQ(divvy_gf_mul(175, 220), 19);
}

TEST(GfMul, Test514)
{
    ASSERT_EQ(divvy_gf_mul(169, 35), 28);
    ASSERT_EQ(divvy_gf_mul(35, 169), 28);
}

TEST(GfMul, Test515)
{
    ASSERT_EQ(divvy_gf_mul(24, 214), 37);
    ASSERT_EQ(divvy_gf_mul(214, 24), 37);
}

TEST(GfMul, Test516)
{
    ASSERT_EQ(divvy_gf_mul(148, 130), 71);
    ASSERT_EQ(divvy_gf_mul(130, 148), 71);
}

TEST(GfMul, Test517)
{
    ASSERT_EQ(divvy_gf_mul(104, 110), 236);
    ASSERT_EQ(divvy_gf_mul(110, 104), 236);
}

TEST(GfMul, Test518)
{
    ASSERT_EQ(divvy_gf_mul(155, 144), 198);
    ASSERT_EQ(divvy_gf_mul(144, 155), 198);
}

TEST(GfMul, Test519)
{
    ASSERT_EQ(divvy_gf_mul(255, 212), 98);
    ASSERT_EQ(divvy_gf_mul(212, 255), 98);
}

TEST(GfMul, Test520)
{
    ASSERT_EQ(divvy_gf_mul(113, 113), 221);
    ASSERT_EQ(divvy_gf_mul(113, 113), 221);
}

TEST(GfMul, Test521)
{
    ASSERT_EQ(divvy_gf_mul(157, 70), 47);
    ASSERT_EQ(divvy_gf_mul(70, 157), 47);
}

TEST(GfMul, Test522)
{
    ASSERT_EQ(divvy_gf_mul(127, 6), 25);
    ASSERT_EQ(divvy_gf_mul(6, 127), 25);
}

TEST(GfMul, Test523)
{
    ASSERT_EQ(divvy_gf_mul(202, 107), 55);
    ASSERT_EQ(divvy_gf_mul(107, 202), 55);
}

TEST(GfMul, Test524)
{
    ASSERT_EQ(divvy_gf_mul(53, 161), 10);
    ASSERT_EQ(divvy_gf_mul(161, 53), 10);
}

TEST(GfMul, Test525)
{
    ASSERT_EQ(divvy_gf_mul(53, 166), 129);
    ASSERT_EQ(divvy_gf_mul(166, 53), 129);
}

TEST(GfMul, Test526)
{
    ASSERT_EQ(divvy_gf_mul(44, 63), 190);
    ASSERT_EQ(divvy_gf_mul(63, 44), 190);
}

TEST(GfMul, Test527)
{
    ASSERT_EQ(divvy_gf_mul(140, 79), 229);
    ASSERT_EQ(divvy_gf_mul(79, 140), 229);
}

TEST(GfMul, Test528)
{
    ASSERT_EQ(divvy_gf_mul(180, 42), 213);
    ASSERT_EQ(divvy_gf_mul(42, 180), 213);
}

TEST(GfMul, Test529)
{
    ASSERT_EQ(divvy_gf_mul(113, 175), 245);
    ASSERT_EQ(divvy_gf_mul(175, 113), 245);
}

TEST(GfMul, Test530)
{
    ASSERT_EQ(divvy_gf_mul(72, 59), 129);
    ASSERT_EQ(divvy_gf_mul(59, 72), 129);
}

TEST(GfMul, Test531)
{
    ASSERT_EQ(divvy_gf_mul(131, 10), 105);
    ASSERT_EQ(divvy_gf_mul(10, 131), 105);
}

TEST(GfMul, Test532)
{
    ASSERT_EQ(divvy_gf_mul(204, 208), 50);
    ASSERT_EQ(divvy_gf_mul(208, 204), 50);
}

TEST(GfMul, Test533)
{
    ASSERT_EQ(divvy_gf_mul(239, 123), 86);
    ASSERT_EQ(divvy_gf_mul(123, 239), 86);
}

TEST(GfMul, Test534)
{
    ASSERT_EQ(divvy_gf_mul(248, 202), 198);
    ASSERT_EQ(divvy_gf_mul(202, 248), 198);
}

TEST(GfMul, Test535)
{
    ASSERT_EQ(divvy_gf_mul(37, 30), 139);
    ASSERT_EQ(divvy_gf_mul(30, 37), 139);
}

TEST(GfMul, Test536)
{
    ASSERT_EQ(divvy_gf_mul(80, 105), 207);
    ASSERT_EQ(divvy_gf_mul(105, 80), 207);
}

TEST(GfMul, Test537)
{
    ASSERT_EQ(divvy_gf_mul(45, 66), 239);
    ASSERT_EQ(divvy_gf_mul(66, 45), 239);
}

TEST(GfMul, Test538)
{
    ASSERT_EQ(divvy_gf_mul(183, 249), 138);
    ASSERT_EQ(divvy_gf_mul(249, 183), 138);
}

TEST(GfMul, Test539)
{
    ASSERT_EQ(divvy_gf_mul(182, 244), 236);
    ASSERT_EQ(divvy_gf_mul(244, 182), 236);
}

TEST(GfMul, Test540)
{
    ASSERT_EQ(divvy_gf_mul(136, 8), 44);
    ASSERT_EQ(divvy_gf_mul(8, 136), 44);
}

TEST(GfMul, Test541)
{
    ASSERT_EQ(divvy_gf_mul(236, 163), 141);
    ASSERT_EQ(divvy_gf_mul(163, 236), 141);
}

TEST(GfMul, Test542)
{
    ASSERT_EQ(divvy_gf_mul(203, 102), 148);
    ASSERT_EQ(divvy_gf_mul(102, 203), 148);
}

TEST(GfMul, Test543)
{
    ASSERT_EQ(divvy_gf_mul(141, 155), 192);
    ASSERT_EQ(divvy_gf_mul(155, 141), 192);
}

TEST(GfMul, Test544)
{
    ASSERT_EQ(divvy_gf_mul(36, 1), 36);
    ASSERT_EQ(divvy_gf_mul(1, 36), 36);
}

TEST(GfMul, Test545)
{
    ASSERT_EQ(divvy_gf_mul(166, 103), 86);
    ASSERT_EQ(divvy_gf_mul(103, 166), 86);
}

TEST(GfMul, Test546)
{
    ASSERT_EQ(divvy_gf_mul(36, 49), 190);
    ASSERT_EQ(divvy_gf_mul(49, 36), 190);
}

TEST(GfMul, Test547)
{
    ASSERT_EQ(divvy_gf_mul(111, 107), 53);
    ASSERT_EQ(divvy_gf_mul(107, 111), 53);
}

TEST(GfMul, Test548)
{
    ASSERT_EQ(divvy_gf_mul(107, 111), 53);
    ASSERT_EQ(divvy_gf_mul(111, 107), 53);
}

TEST(GfMul, Test549)
{
    ASSERT_EQ(divvy_gf_mul(200, 222), 195);
    ASSERT_EQ(divvy_gf_mul(222, 200), 195);
}

TEST(GfMul, Test550)
{
    ASSERT_EQ(divvy_gf_mul(56, 143), 108);
    ASSERT_EQ(divvy_gf_mul(143, 56), 108);
}

TEST(GfMul, Test551)
{
    ASSERT_EQ(divvy_gf_mul(170, 12), 185);
    ASSERT_EQ(divvy_gf_mul(12, 170), 185);
}

TEST(GfMul, Test552)
{
    ASSERT_EQ(divvy_gf_mul(116, 165), 181);
    ASSERT_EQ(divvy_gf_mul(165, 116), 181);
}

TEST(GfMul, Test553)
{
    ASSERT_EQ(divvy_gf_mul(197, 149), 121);
    ASSERT_EQ(divvy_gf_mul(149, 197), 121);
}

TEST(GfMul, Test554)
{
    ASSERT_EQ(divvy_gf_mul(47, 195), 46);
    ASSERT_EQ(divvy_gf_mul(195, 47), 46);
}

TEST(GfMul, Test555)
{
    ASSERT_EQ(divvy_gf_mul(225, 140), 28);
    ASSERT_EQ(divvy_gf_mul(140, 225), 28);
}

TEST(GfMul, Test556)
{
    ASSERT_EQ(divvy_gf_mul(192, 160), 164);
    ASSERT_EQ(divvy_gf_mul(160, 192), 164);
}

TEST(GfMul, Test557)
{
    ASSERT_EQ(divvy_gf_mul(133, 181), 8);
    ASSERT_EQ(divvy_gf_mul(181, 133), 8);
}

TEST(GfMul, Test558)
{
    ASSERT_EQ(divvy_gf_mul(91, 83), 27);
    ASSERT_EQ(divvy_gf_mul(83, 91), 27);
}

TEST(GfMul, Test559)
{
    ASSERT_EQ(divvy_gf_mul(52, 63), 128);
    ASSERT_EQ(divvy_gf_mul(63, 52), 128);
}

TEST(GfMul, Test560)
{
    ASSERT_EQ(divvy_gf_mul(159, 226), 12);
    ASSERT_EQ(divvy_gf_mul(226, 159), 12);
}

TEST(GfMul, Test561)
{
    ASSERT_EQ(divvy_gf_mul(232, 83), 41);
    ASSERT_EQ(divvy_gf_mul(83, 232), 41);
}

TEST(GfMul, Test562)
{
    ASSERT_EQ(divvy_gf_mul(49, 252), 23);
    ASSERT_EQ(divvy_gf_mul(252, 49), 23);
}

TEST(GfMul, Test563)
{
    ASSERT_EQ(divvy_gf_mul(170, 38), 77);
    ASSERT_EQ(divvy_gf_mul(38, 170), 77);
}

TEST(GfMul, Test564)
{
    ASSERT_EQ(divvy_gf_mul(141, 97), 189);
    ASSERT_EQ(divvy_gf_mul(97, 141), 189);
}

TEST(GfMul, Test565)
{
    ASSERT_EQ(divvy_gf_mul(204, 128), 141);
    ASSERT_EQ(divvy_gf_mul(128, 204), 141);
}

TEST(GfMul, Test566)
{
    ASSERT_EQ(divvy_gf_mul(48, 90), 98);
    ASSERT_EQ(divvy_gf_mul(90, 48), 98);
}

TEST(GfMul, Test567)
{
    ASSERT_EQ(divvy_gf_mul(47, 52), 237);
    ASSERT_EQ(divvy_gf_mul(52, 47), 237);
}

TEST(GfMul, Test568)
{
    ASSERT_EQ(divvy_gf_mul(212, 193), 124);
    ASSERT_EQ(divvy_gf_mul(193, 212), 124);
}

TEST(GfMul, Test569)
{
    ASSERT_EQ(divvy_gf_mul(138, 50), 135);
    ASSERT_EQ(divvy_gf_mul(50, 138), 135);
}

TEST(GfMul, Test570)
{
    ASSERT_EQ(divvy_gf_mul(91, 36), 226);
    ASSERT_EQ(divvy_gf_mul(36, 91), 226);
}

TEST(GfMul, Test571)
{
    ASSERT_EQ(divvy_gf_mul(32, 188), 106);
    ASSERT_EQ(divvy_gf_mul(188, 32), 106);
}

TEST(GfMul, Test572)
{
    ASSERT_EQ(divvy_gf_mul(129, 175), 95);
    ASSERT_EQ(divvy_gf_mul(175, 129), 95);
}

TEST(GfMul, Test573)
{
    ASSERT_EQ(divvy_gf_mul(224, 136), 61);
    ASSERT_EQ(divvy_gf_mul(136, 224), 61);
}

TEST(GfMul, Test574)
{
    ASSERT_EQ(divvy_gf_mul(145, 201), 214);
    ASSERT_EQ(divvy_gf_mul(201, 145), 214);
}

TEST(GfMul, Test575)
{
    ASSERT_EQ(divvy_gf_mul(79, 255), 205);
    ASSERT_EQ(divvy_gf_mul(255, 79), 205);
}

TEST(GfMul, Test576)
{
    ASSERT_EQ(divvy_gf_mul(46, 187), 146);
    ASSERT_EQ(divvy_gf_mul(187, 46), 146);
}

TEST(GfMul, Test577)
{
    ASSERT_EQ(divvy_gf_mul(131, 40), 191);
    ASSERT_EQ(divvy_gf_mul(40, 131), 191);
}

TEST(GfMul, Test578)
{
    ASSERT_EQ(divvy_gf_mul(18, 198), 67);
    ASSERT_EQ(divvy_gf_mul(198, 18), 67);
}

TEST(GfMul, Test579)
{
    ASSERT_EQ(divvy_gf_mul(75, 39), 73);
    ASSERT_EQ(divvy_gf_mul(39, 75), 73);
}

TEST(GfMul, Test580)
{
    ASSERT_EQ(divvy_gf_mul(74, 8), 102);
    ASSERT_EQ(divvy_gf_mul(8, 74), 102);
}

TEST(GfMul, Test581)
{
    ASSERT_EQ(divvy_gf_mul(98, 62), 228);
    ASSERT_EQ(divvy_gf_mul(62, 98), 228);
}

TEST(GfMul, Test582)
{
    ASSERT_EQ(divvy_gf_mul(202, 26), 145);
    ASSERT_EQ(divvy_gf_mul(26, 202), 145);
}

TEST(GfMul, Test583)
{
    ASSERT_EQ(divvy_gf_mul(39, 17), 97);
    ASSERT_EQ(divvy_gf_mul(17, 39), 97);
}

TEST(GfMul, Test584)
{
    ASSERT_EQ(divvy_gf_mul(112, 76), 105);
    ASSERT_EQ(divvy_gf_mul(76, 112), 105);
}

TEST(GfMul, Test585)
{
    ASSERT_EQ(divvy_gf_mul(103, 227), 30);
    ASSERT_EQ(divvy_gf_mul(227, 103), 30);
}

TEST(GfMul, Test586)
{
    ASSERT_EQ(divvy_gf_mul(60, 252), 151);
    ASSERT_EQ(divvy_gf_mul(252, 60), 151);
}

TEST(GfMul, Test587)
{
    ASSERT_EQ(divvy_gf_mul(155, 71), 59);
    ASSERT_EQ(divvy_gf_mul(71, 155), 59);
}

TEST(GfMul, Test588)
{
    ASSERT_EQ(divvy_gf_mul(221, 169), 68);
    ASSERT_EQ(divvy_gf_mul(169, 221), 68);
}

TEST(GfMul, Test589)
{
    ASSERT_EQ(divvy_gf_mul(128, 77), 151);
    ASSERT_EQ(divvy_gf_mul(77, 128), 151);
}

TEST(GfMul, Test590)
{
    ASSERT_EQ(divvy_gf_mul(240, 130), 95);
    ASSERT_EQ(divvy_gf_mul(130, 240), 95);
}

TEST(GfMul, Test591)
{
    ASSERT_EQ(divvy_gf_mul(166, 96), 9);
    ASSERT_EQ(divvy_gf_mul(96, 166), 9);
}

TEST(GfMul, Test592)
{
    ASSERT_EQ(divvy_gf_mul(139, 219), 12);
    ASSERT_EQ(divvy_gf_mul(219, 139), 12);
}

TEST(GfMul, Test593)
{
    ASSERT_EQ(divvy_gf_mul(139, 139), 223);
    ASSERT_EQ(divvy_gf_mul(139, 139), 223);
}

TEST(GfMul, Test594)
{
    ASSERT_EQ(divvy_gf_mul(102, 90), 3);
    ASSERT_EQ(divvy_gf_mul(90, 102), 3);
}

TEST(GfMul, Test595)
{
    ASSERT_EQ(divvy_gf_mul(110, 9), 51);
    ASSERT_EQ(divvy_gf_mul(9, 110), 51);
}

TEST(GfMul, Test596)
{
    ASSERT_EQ(divvy_gf_mul(107, 201), 138);
    ASSERT_EQ(divvy_gf_mul(201, 107), 138);
}

TEST(GfMul, Test597)
{
    ASSERT_EQ(divvy_gf_mul(45, 1), 45);
    ASSERT_EQ(divvy_gf_mul(1, 45), 45);
}

TEST(GfMul, Test598)
{
    ASSERT_EQ(divvy_gf_mul(140, 147), 87);
    ASSERT_EQ(divvy_gf_mul(147, 140), 87);
}

TEST(GfMul, Test599)
{
    ASSERT_EQ(divvy_gf_mul(124, 43), 80);
    ASSERT_EQ(divvy_gf_mul(43, 124), 80);
}

TEST(GfMul, Test600)
{
    ASSERT_EQ(divvy_gf_mul(87, 55), 183);
    ASSERT_EQ(divvy_gf_mul(55, 87), 183);
}

TEST(GfMul, Test601)
{
    ASSERT_EQ(divvy_gf_mul(85, 26), 19);
    ASSERT_EQ(divvy_gf_mul(26, 85), 19);
}

TEST(GfMul, Test602)
{
    ASSERT_EQ(divvy_gf_mul(131, 241), 44);
    ASSERT_EQ(divvy_gf_mul(241, 131), 44);
}

TEST(GfMul, Test603)
{
    ASSERT_EQ(divvy_gf_mul(202, 58), 185);
    ASSERT_EQ(divvy_gf_mul(58, 202), 185);
}

TEST(GfMul, Test604)
{
    ASSERT_EQ(divvy_gf_mul(215, 203), 115);
    ASSERT_EQ(divvy_gf_mul(203, 215), 115);
}

TEST(GfMul, Test605)
{
    ASSERT_EQ(divvy_gf_mul(76, 134), 164);
    ASSERT_EQ(divvy_gf_mul(134, 76), 164);
}

TEST(GfMul, Test606)
{
    ASSERT_EQ(divvy_gf_mul(82, 172), 213);
    ASSERT_EQ(divvy_gf_mul(172, 82), 213);
}

TEST(GfMul, Test607)
{
    ASSERT_EQ(divvy_gf_mul(212, 128), 57);
    ASSERT_EQ(divvy_gf_mul(128, 212), 57);
}

TEST(GfMul, Test608)
{
    ASSERT_EQ(divvy_gf_mul(111, 176), 194);
    ASSERT_EQ(divvy_gf_mul(176, 111), 194);
}

TEST(GfMul, Test609)
{
    ASSERT_EQ(divvy_gf_mul(155, 163), 229);
    ASSERT_EQ(divvy_gf_mul(163, 155), 229);
}

TEST(GfMul, Test610)
{
    ASSERT_EQ(divvy_gf_mul(176, 86), 129);
    ASSERT_EQ(divvy_gf_mul(86, 176), 129);
}

TEST(GfMul, Test611)
{
    ASSERT_EQ(divvy_gf_mul(2, 55), 110);
    ASSERT_EQ(divvy_gf_mul(55, 2), 110);
}

TEST(GfMul, Test612)
{
    ASSERT_EQ(divvy_gf_mul(34, 28), 149);
    ASSERT_EQ(divvy_gf_mul(28, 34), 149);
}

TEST(GfMul, Test613)
{
    ASSERT_EQ(divvy_gf_mul(9, 200), 210);
    ASSERT_EQ(divvy_gf_mul(200, 9), 210);
}

TEST(GfMul, Test614)
{
    ASSERT_EQ(divvy_gf_mul(64, 0), 0);
    ASSERT_EQ(divvy_gf_mul(0, 64), 0);
}

TEST(GfMul, Test615)
{
    ASSERT_EQ(divvy_gf_mul(248, 82), 150);
    ASSERT_EQ(divvy_gf_mul(82, 248), 150);
}

TEST(GfMul, Test616)
{
    ASSERT_EQ(divvy_gf_mul(9, 184), 15);
    ASSERT_EQ(divvy_gf_mul(184, 9), 15);
}

TEST(GfMul, Test617)
{
    ASSERT_EQ(divvy_gf_mul(102, 187), 50);
    ASSERT_EQ(divvy_gf_mul(187, 102), 50);
}

TEST(GfMul, Test618)
{
    ASSERT_EQ(divvy_gf_mul(6, 204), 158);
    ASSERT_EQ(divvy_gf_mul(204, 6), 158);
}

TEST(GfMul, Test619)
{
    ASSERT_EQ(divvy_gf_mul(199, 85), 15);
    ASSERT_EQ(divvy_gf_mul(85, 199), 15);
}

TEST(GfMul, Test620)
{
    ASSERT_EQ(divvy_gf_mul(252, 133), 223);
    ASSERT_EQ(divvy_gf_mul(133, 252), 223);
}

TEST(GfMul, Test621)
{
    ASSERT_EQ(divvy_gf_mul(161, 100), 128);
    ASSERT_EQ(divvy_gf_mul(100, 161), 128);
}

TEST(GfMul, Test622)
{
    ASSERT_EQ(divvy_gf_mul(242, 245), 170);
    ASSERT_EQ(divvy_gf_mul(245, 242), 170);
}

TEST(GfMul, Test623)
{
    ASSERT_EQ(divvy_gf_mul(206, 165), 229);
    ASSERT_EQ(divvy_gf_mul(165, 206), 229);
}

TEST(GfMul, Test624)
{
    ASSERT_EQ(divvy_gf_mul(184, 113), 232);
    ASSERT_EQ(divvy_gf_mul(113, 184), 232);
}

TEST(GfMul, Test625)
{
    ASSERT_EQ(divvy_gf_mul(84, 107), 216);
    ASSERT_EQ(divvy_gf_mul(107, 84), 216);
}

TEST(GfMul, Test626)
{
    ASSERT_EQ(divvy_gf_mul(139, 45), 117);
    ASSERT_EQ(divvy_gf_mul(45, 139), 117);
}

TEST(GfMul, Test627)
{
    ASSERT_EQ(divvy_gf_mul(58, 45), 24);
    ASSERT_EQ(divvy_gf_mul(45, 58), 24);
}

TEST(GfMul, Test628)
{
    ASSERT_EQ(divvy_gf_mul(68, 226), 27);
    ASSERT_EQ(divvy_gf_mul(226, 68), 27);
}

TEST(GfMul, Test629)
{
    ASSERT_EQ(divvy_gf_mul(230, 218), 176);
    ASSERT_EQ(divvy_gf_mul(218, 230), 176);
}

TEST(GfMul, Test630)
{
    ASSERT_EQ(divvy_gf_mul(160, 173), 151);
    ASSERT_EQ(divvy_gf_mul(173, 160), 151);
}

TEST(GfMul, Test631)
{
    ASSERT_EQ(divvy_gf_mul(70, 38), 151);
    ASSERT_EQ(divvy_gf_mul(38, 70), 151);
}

TEST(GfMul, Test632)
{
    ASSERT_EQ(divvy_gf_mul(191, 13), 250);
    ASSERT_EQ(divvy_gf_mul(13, 191), 250);
}

TEST(GfMul, Test633)
{
    ASSERT_EQ(divvy_gf_mul(251, 23), 254);
    ASSERT_EQ(divvy_gf_mul(23, 251), 254);
}

TEST(GfMul, Test634)
{
    ASSERT_EQ(divvy_gf_mul(0, 126), 0);
    ASSERT_EQ(divvy_gf_mul(126, 0), 0);
}

TEST(GfMul, Test635)
{
    ASSERT_EQ(divvy_gf_mul(0, 157), 0);
    ASSERT_EQ(divvy_gf_mul(157, 0), 0);
}

TEST(GfMul, Test636)
{
    ASSERT_EQ(divvy_gf_mul(76, 232), 132);
    ASSERT_EQ(divvy_gf_mul(232, 76), 132);
}

TEST(GfMul, Test637)
{
    ASSERT_EQ(divvy_gf_mul(188, 186), 24);
    ASSERT_EQ(divvy_gf_mul(186, 188), 24);
}

TEST(GfMul, Test638)
{
    ASSERT_EQ(divvy_gf_mul(207, 207), 100);
    ASSERT_EQ(divvy_gf_mul(207, 207), 100);
}

TEST(GfMul, Test639)
{
    ASSERT_EQ(divvy_gf_mul(172, 70), 125);
    ASSERT_EQ(divvy_gf_mul(70, 172), 125);
}

TEST(GfMul, Test640)
{
    ASSERT_EQ(divvy_gf_mul(9, 46), 69);
    ASSERT_EQ(divvy_gf_mul(46, 9), 69);
}

TEST(GfMul, Test641)
{
    ASSERT_EQ(divvy_gf_mul(211, 194), 99);
    ASSERT_EQ(divvy_gf_mul(194, 211), 99);
}

TEST(GfMul, Test642)
{
    ASSERT_EQ(divvy_gf_mul(237, 153), 48);
    ASSERT_EQ(divvy_gf_mul(153, 237), 48);
}

TEST(GfMul, Test643)
{
    ASSERT_EQ(divvy_gf_mul(16, 155), 115);
    ASSERT_EQ(divvy_gf_mul(155, 16), 115);
}

TEST(GfMul, Test644)
{
    ASSERT_EQ(divvy_gf_mul(241, 66), 235);
    ASSERT_EQ(divvy_gf_mul(66, 241), 235);
}

TEST(GfMul, Test645)
{
    ASSERT_EQ(divvy_gf_mul(30, 130), 165);
    ASSERT_EQ(divvy_gf_mul(130, 30), 165);
}

TEST(GfMul, Test646)
{
    ASSERT_EQ(divvy_gf_mul(64, 203), 16);
    ASSERT_EQ(divvy_gf_mul(203, 64), 16);
}

TEST(GfMul, Test647)
{
    ASSERT_EQ(divvy_gf_mul(63, 223), 104);
    ASSERT_EQ(divvy_gf_mul(223, 63), 104);
}

TEST(GfMul, Test648)
{
    ASSERT_EQ(divvy_gf_mul(182, 252), 43);
    ASSERT_EQ(divvy_gf_mul(252, 182), 43);
}

TEST(GfMul, Test649)
{
    ASSERT_EQ(divvy_gf_mul(113, 90), 73);
    ASSERT_EQ(divvy_gf_mul(90, 113), 73);
}

TEST(GfMul, Test650)
{
    ASSERT_EQ(divvy_gf_mul(9, 188), 43);
    ASSERT_EQ(divvy_gf_mul(188, 9), 43);
}

TEST(GfMul, Test651)
{
    ASSERT_EQ(divvy_gf_mul(255, 164), 102);
    ASSERT_EQ(divvy_gf_mul(164, 255), 102);
}

TEST(GfMul, Test652)
{
    ASSERT_EQ(divvy_gf_mul(42, 220), 199);
    ASSERT_EQ(divvy_gf_mul(220, 42), 199);
}

TEST(GfMul, Test653)
{
    ASSERT_EQ(divvy_gf_mul(9, 24), 216);
    ASSERT_EQ(divvy_gf_mul(24, 9), 216);
}

TEST(GfMul, Test654)
{
    ASSERT_EQ(divvy_gf_mul(193, 127), 114);
    ASSERT_EQ(divvy_gf_mul(127, 193), 114);
}

TEST(GfMul, Test655)
{
    ASSERT_EQ(divvy_gf_mul(193, 77), 28);
    ASSERT_EQ(divvy_gf_mul(77, 193), 28);
}

TEST(GfMul, Test656)
{
    ASSERT_EQ(divvy_gf_mul(209, 245), 39);
    ASSERT_EQ(divvy_gf_mul(245, 209), 39);
}

TEST(GfMul, Test657)
{
    ASSERT_EQ(divvy_gf_mul(74, 186), 135);
    ASSERT_EQ(divvy_gf_mul(186, 74), 135);
}

TEST(GfMul, Test658)
{
    ASSERT_EQ(divvy_gf_mul(161, 119), 134);
    ASSERT_EQ(divvy_gf_mul(119, 161), 134);
}

TEST(GfMul, Test659)
{
    ASSERT_EQ(divvy_gf_mul(179, 36), 107);
    ASSERT_EQ(divvy_gf_mul(36, 179), 107);
}

TEST(GfMul, Test660)
{
    ASSERT_EQ(divvy_gf_mul(46, 255), 95);
    ASSERT_EQ(divvy_gf_mul(255, 46), 95);
}

TEST(GfMul, Test661)
{
    ASSERT_EQ(divvy_gf_mul(61, 36), 21);
    ASSERT_EQ(divvy_gf_mul(36, 61), 21);
}

TEST(GfMul, Test662)
{
    ASSERT_EQ(divvy_gf_mul(60, 27), 82);
    ASSERT_EQ(divvy_gf_mul(27, 60), 82);
}

TEST(GfMul, Test663)
{
    ASSERT_EQ(divvy_gf_mul(38, 168), 1);
    ASSERT_EQ(divvy_gf_mul(168, 38), 1);
}

TEST(GfMul, Test664)
{
    ASSERT_EQ(divvy_gf_mul(121, 251), 189);
    ASSERT_EQ(divvy_gf_mul(251, 121), 189);
}

TEST(GfMul, Test665)
{
    ASSERT_EQ(divvy_gf_mul(244, 152), 170);
    ASSERT_EQ(divvy_gf_mul(152, 244), 170);
}

TEST(GfMul, Test666)
{
    ASSERT_EQ(divvy_gf_mul(78, 59), 27);
    ASSERT_EQ(divvy_gf_mul(59, 78), 27);
}

TEST(GfMul, Test667)
{
    ASSERT_EQ(divvy_gf_mul(229, 115), 60);
    ASSERT_EQ(divvy_gf_mul(115, 229), 60);
}

TEST(GfMul, Test668)
{
    ASSERT_EQ(divvy_gf_mul(40, 100), 57);
    ASSERT_EQ(divvy_gf_mul(100, 40), 57);
}

TEST(GfMul, Test669)
{
    ASSERT_EQ(divvy_gf_mul(4, 45), 180);
    ASSERT_EQ(divvy_gf_mul(45, 4), 180);
}

TEST(GfMul, Test670)
{
    ASSERT_EQ(divvy_gf_mul(30, 107), 254);
    ASSERT_EQ(divvy_gf_mul(107, 30), 254);
}

TEST(GfMul, Test671)
{
    ASSERT_EQ(divvy_gf_mul(1, 211), 211);
    ASSERT_EQ(divvy_gf_mul(211, 1), 211);
}

TEST(GfMul, Test672)
{
    ASSERT_EQ(divvy_gf_mul(184, 28), 20);
    ASSERT_EQ(divvy_gf_mul(28, 184), 20);
}

TEST(GfMul, Test673)
{
    ASSERT_EQ(divvy_gf_mul(176, 62), 126);
    ASSERT_EQ(divvy_gf_mul(62, 176), 126);
}

TEST(GfMul, Test674)
{
    ASSERT_EQ(divvy_gf_mul(30, 64), 193);
    ASSERT_EQ(divvy_gf_mul(64, 30), 193);
}

TEST(GfMul, Test675)
{
    ASSERT_EQ(divvy_gf_mul(164, 66), 221);
    ASSERT_EQ(divvy_gf_mul(66, 164), 221);
}

TEST(GfMul, Test676)
{
    ASSERT_EQ(divvy_gf_mul(220, 83), 183);
    ASSERT_EQ(divvy_gf_mul(83, 220), 183);
}

TEST(GfMul, Test677)
{
    ASSERT_EQ(divvy_gf_mul(202, 230), 82);
    ASSERT_EQ(divvy_gf_mul(230, 202), 82);
}

TEST(GfMul, Test678)
{
    ASSERT_EQ(divvy_gf_mul(219, 216), 25);
    ASSERT_EQ(divvy_gf_mul(216, 219), 25);
}

TEST(GfMul, Test679)
{
    ASSERT_EQ(divvy_gf_mul(128, 180), 223);
    ASSERT_EQ(divvy_gf_mul(180, 128), 223);
}

TEST(GfMul, Test680)
{
    ASSERT_EQ(divvy_gf_mul(49, 173), 239);
    ASSERT_EQ(divvy_gf_mul(173, 49), 239);
}

TEST(GfMul, Test681)
{
    ASSERT_EQ(divvy_gf_mul(18, 188), 86);
    ASSERT_EQ(divvy_gf_mul(188, 18), 86);
}

TEST(GfMul, Test682)
{
    ASSERT_EQ(divvy_gf_mul(175, 212), 28);
    ASSERT_EQ(divvy_gf_mul(212, 175), 28);
}

TEST(GfMul, Test683)
{
    ASSERT_EQ(divvy_gf_mul(113, 167), 80);
    ASSERT_EQ(divvy_gf_mul(167, 113), 80);
}

TEST(GfMul, Test684)
{
    ASSERT_EQ(divvy_gf_mul(62, 184), 149);
    ASSERT_EQ(divvy_gf_mul(184, 62), 149);
}

TEST(GfMul, Test685)
{
    ASSERT_EQ(divvy_gf_mul(100, 231), 171);
    ASSERT_EQ(divvy_gf_mul(231, 100), 171);
}

TEST(GfMul, Test686)
{
    ASSERT_EQ(divvy_gf_mul(203, 34), 133);
    ASSERT_EQ(divvy_gf_mul(34, 203), 133);
}

TEST(GfMul, Test687)
{
    ASSERT_EQ(divvy_gf_mul(6, 118), 47);
    ASSERT_EQ(divvy_gf_mul(118, 6), 47);
}

TEST(GfMul, Test688)
{
    ASSERT_EQ(divvy_gf_mul(73, 160), 66);
    ASSERT_EQ(divvy_gf_mul(160, 73), 66);
}

TEST(GfMul, Test689)
{
    ASSERT_EQ(divvy_gf_mul(196, 57), 185);
    ASSERT_EQ(divvy_gf_mul(57, 196), 185);
}

TEST(GfMul, Test690)
{
    ASSERT_EQ(divvy_gf_mul(134, 255), 81);
    ASSERT_EQ(divvy_gf_mul(255, 134), 81);
}

TEST(GfMul, Test691)
{
    ASSERT_EQ(divvy_gf_mul(35, 27), 96);
    ASSERT_EQ(divvy_gf_mul(27, 35), 96);
}

TEST(GfMul, Test692)
{
    ASSERT_EQ(divvy_gf_mul(186, 91), 104);
    ASSERT_EQ(divvy_gf_mul(91, 186), 104);
}

TEST(GfMul, Test693)
{
    ASSERT_EQ(divvy_gf_mul(31, 126), 29);
    ASSERT_EQ(divvy_gf_mul(126, 31), 29);
}

TEST(GfMul, Test694)
{
    ASSERT_EQ(divvy_gf_mul(45, 230), 253);
    ASSERT_EQ(divvy_gf_mul(230, 45), 253);
}

TEST(GfMul, Test695)
{
    ASSERT_EQ(divvy_gf_mul(67, 89), 90);
    ASSERT_EQ(divvy_gf_mul(89, 67), 90);
}

TEST(GfMul, Test696)
{
    ASSERT_EQ(divvy_gf_mul(241, 87), 122);
    ASSERT_EQ(divvy_gf_mul(87, 241), 122);
}

TEST(GfMul, Test697)
{
    ASSERT_EQ(divvy_gf_mul(127, 192), 13);
    ASSERT_EQ(divvy_gf_mul(192, 127), 13);
}

TEST(GfMul, Test698)
{
    ASSERT_EQ(divvy_gf_mul(224, 111), 246);
    ASSERT_EQ(divvy_gf_mul(111, 224), 246);
}

TEST(GfMul, Test699)
{
    ASSERT_EQ(divvy_gf_mul(244, 8), 225);
    ASSERT_EQ(divvy_gf_mul(8, 244), 225);
}

TEST(GfMul, Test700)
{
    ASSERT_EQ(divvy_gf_mul(207, 14), 182);
    ASSERT_EQ(divvy_gf_mul(14, 207), 182);
}

TEST(GfMul, Test701)
{
    ASSERT_EQ(divvy_gf_mul(161, 246), 150);
    ASSERT_EQ(divvy_gf_mul(246, 161), 150);
}

TEST(GfMul, Test702)
{
    ASSERT_EQ(divvy_gf_mul(101, 135), 112);
    ASSERT_EQ(divvy_gf_mul(135, 101), 112);
}

TEST(GfMul, Test703)
{
    ASSERT_EQ(divvy_gf_mul(57, 232), 239);
    ASSERT_EQ(divvy_gf_mul(232, 57), 239);
}

TEST(GfMul, Test704)
{
    ASSERT_EQ(divvy_gf_mul(182, 147), 144);
    ASSERT_EQ(divvy_gf_mul(147, 182), 144);
}

TEST(GfMul, Test705)
{
    ASSERT_EQ(divvy_gf_mul(243, 97), 40);
    ASSERT_EQ(divvy_gf_mul(97, 243), 40);
}

TEST(GfMul, Test706)
{
    ASSERT_EQ(divvy_gf_mul(167, 221), 14);
    ASSERT_EQ(divvy_gf_mul(221, 167), 14);
}

TEST(GfMul, Test707)
{
    ASSERT_EQ(divvy_gf_mul(228, 27), 148);
    ASSERT_EQ(divvy_gf_mul(27, 228), 148);
}

TEST(GfMul, Test708)
{
    ASSERT_EQ(divvy_gf_mul(113, 118), 145);
    ASSERT_EQ(divvy_gf_mul(118, 113), 145);
}

TEST(GfMul, Test709)
{
    ASSERT_EQ(divvy_gf_mul(246, 206), 179);
    ASSERT_EQ(divvy_gf_mul(206, 246), 179);
}

TEST(GfMul, Test710)
{
    ASSERT_EQ(divvy_gf_mul(180, 137), 188);
    ASSERT_EQ(divvy_gf_mul(137, 180), 188);
}

TEST(GfMul, Test711)
{
    ASSERT_EQ(divvy_gf_mul(133, 194), 43);
    ASSERT_EQ(divvy_gf_mul(194, 133), 43);
}

TEST(GfMul, Test712)
{
    ASSERT_EQ(divvy_gf_mul(48, 62), 76);
    ASSERT_EQ(divvy_gf_mul(62, 48), 76);
}

TEST(GfMul, Test713)
{
    ASSERT_EQ(divvy_gf_mul(107, 144), 251);
    ASSERT_EQ(divvy_gf_mul(144, 107), 251);
}

TEST(GfMul, Test714)
{
    ASSERT_EQ(divvy_gf_mul(123, 124), 227);
    ASSERT_EQ(divvy_gf_mul(124, 123), 227);
}

TEST(GfMul, Test715)
{
    ASSERT_EQ(divvy_gf_mul(70, 79), 255);
    ASSERT_EQ(divvy_gf_mul(79, 70), 255);
}

TEST(GfMul, Test716)
{
    ASSERT_EQ(divvy_gf_mul(122, 126), 107);
    ASSERT_EQ(divvy_gf_mul(126, 122), 107);
}

TEST(GfMul, Test717)
{
    ASSERT_EQ(divvy_gf_mul(87, 41), 215);
    ASSERT_EQ(divvy_gf_mul(41, 87), 215);
}

TEST(GfMul, Test718)
{
    ASSERT_EQ(divvy_gf_mul(212, 191), 243);
    ASSERT_EQ(divvy_gf_mul(191, 212), 243);
}

TEST(GfMul, Test719)
{
    ASSERT_EQ(divvy_gf_mul(8, 58), 203);
    ASSERT_EQ(divvy_gf_mul(58, 8), 203);
}

TEST(GfMul, Test720)
{
    ASSERT_EQ(divvy_gf_mul(131, 196), 182);
    ASSERT_EQ(divvy_gf_mul(196, 131), 182);
}

TEST(GfMul, Test721)
{
    ASSERT_EQ(divvy_gf_mul(60, 176), 5);
    ASSERT_EQ(divvy_gf_mul(176, 60), 5);
}

TEST(GfMul, Test722)
{
    ASSERT_EQ(divvy_gf_mul(223, 12), 243);
    ASSERT_EQ(divvy_gf_mul(12, 223), 243);
}

TEST(GfMul, Test723)
{
    ASSERT_EQ(divvy_gf_mul(45, 97), 79);
    ASSERT_EQ(divvy_gf_mul(97, 45), 79);
}

TEST(GfMul, Test724)
{
    ASSERT_EQ(divvy_gf_mul(66, 20), 95);
    ASSERT_EQ(divvy_gf_mul(20, 66), 95);
}

TEST(GfMul, Test725)
{
    ASSERT_EQ(divvy_gf_mul(7, 222), 44);
    ASSERT_EQ(divvy_gf_mul(222, 7), 44);
}

TEST(GfMul, Test726)
{
    ASSERT_EQ(divvy_gf_mul(1, 49), 49);
    ASSERT_EQ(divvy_gf_mul(49, 1), 49);
}

TEST(GfMul, Test727)
{
    ASSERT_EQ(divvy_gf_mul(22, 195), 56);
    ASSERT_EQ(divvy_gf_mul(195, 22), 56);
}

TEST(GfMul, Test728)
{
    ASSERT_EQ(divvy_gf_mul(180, 140), 238);
    ASSERT_EQ(divvy_gf_mul(140, 180), 238);
}

TEST(GfMul, Test729)
{
    ASSERT_EQ(divvy_gf_mul(37, 55), 81);
    ASSERT_EQ(divvy_gf_mul(55, 37), 81);
}

TEST(GfMul, Test730)
{
    ASSERT_EQ(divvy_gf_mul(84, 61), 208);
    ASSERT_EQ(divvy_gf_mul(61, 84), 208);
}

TEST(GfMul, Test731)
{
    ASSERT_EQ(divvy_gf_mul(245, 155), 54);
    ASSERT_EQ(divvy_gf_mul(155, 245), 54);
}

TEST(GfMul, Test732)
{
    ASSERT_EQ(divvy_gf_mul(52, 35), 134);
    ASSERT_EQ(divvy_gf_mul(35, 52), 134);
}

TEST(GfMul, Test733)
{
    ASSERT_EQ(divvy_gf_mul(51, 177), 252);
    ASSERT_EQ(divvy_gf_mul(177, 51), 252);
}

TEST(GfMul, Test734)
{
    ASSERT_EQ(divvy_gf_mul(87, 97), 69);
    ASSERT_EQ(divvy_gf_mul(97, 87), 69);
}

TEST(GfMul, Test735)
{
    ASSERT_EQ(divvy_gf_mul(54, 252), 213);
    ASSERT_EQ(divvy_gf_mul(252, 54), 213);
}

TEST(GfMul, Test736)
{
    ASSERT_EQ(divvy_gf_mul(98, 8), 61);
    ASSERT_EQ(divvy_gf_mul(8, 98), 61);
}

TEST(GfMul, Test737)
{
    ASSERT_EQ(divvy_gf_mul(7, 78), 241);
    ASSERT_EQ(divvy_gf_mul(78, 7), 241);
}

TEST(GfMul, Test738)
{
    ASSERT_EQ(divvy_gf_mul(12, 4), 48);
    ASSERT_EQ(divvy_gf_mul(4, 12), 48);
}

TEST(GfMul, Test739)
{
    ASSERT_EQ(divvy_gf_mul(156, 200), 152);
    ASSERT_EQ(divvy_gf_mul(200, 156), 152);
}

TEST(GfMul, Test740)
{
    ASSERT_EQ(divvy_gf_mul(51, 128), 232);
    ASSERT_EQ(divvy_gf_mul(128, 51), 232);
}

TEST(GfMul, Test741)
{
    ASSERT_EQ(divvy_gf_mul(47, 102), 64);
    ASSERT_EQ(divvy_gf_mul(102, 47), 64);
}

TEST(GfMul, Test742)
{
    ASSERT_EQ(divvy_gf_mul(154, 248), 187);
    ASSERT_EQ(divvy_gf_mul(248, 154), 187);
}

TEST(GfMul, Test743)
{
    ASSERT_EQ(divvy_gf_mul(65, 43), 5);
    ASSERT_EQ(divvy_gf_mul(43, 65), 5);
}

TEST(GfMul, Test744)
{
    ASSERT_EQ(divvy_gf_mul(241, 138), 20);
    ASSERT_EQ(divvy_gf_mul(138, 241), 20);
}

TEST(GfMul, Test745)
{
    ASSERT_EQ(divvy_gf_mul(158, 115), 80);
    ASSERT_EQ(divvy_gf_mul(115, 158), 80);
}

TEST(GfMul, Test746)
{
    ASSERT_EQ(divvy_gf_mul(151, 18), 134);
    ASSERT_EQ(divvy_gf_mul(18, 151), 134);
}

TEST(GfMul, Test747)
{
    ASSERT_EQ(divvy_gf_mul(80, 77), 122);
    ASSERT_EQ(divvy_gf_mul(77, 80), 122);
}

TEST(GfMul, Test748)
{
    ASSERT_EQ(divvy_gf_mul(176, 173), 169);
    ASSERT_EQ(divvy_gf_mul(173, 176), 169);
}

TEST(GfMul, Test749)
{
    ASSERT_EQ(divvy_gf_mul(168, 239), 96);
    ASSERT_EQ(divvy_gf_mul(239, 168), 96);
}

TEST(GfMul, Test750)
{
    ASSERT_EQ(divvy_gf_mul(39, 79), 213);
    ASSERT_EQ(divvy_gf_mul(79, 39), 213);
}

TEST(GfMul, Test751)
{
    ASSERT_EQ(divvy_gf_mul(162, 12), 217);
    ASSERT_EQ(divvy_gf_mul(12, 162), 217);
}

TEST(GfMul, Test752)
{
    ASSERT_EQ(divvy_gf_mul(209, 33), 180);
    ASSERT_EQ(divvy_gf_mul(33, 209), 180);
}

TEST(GfMul, Test753)
{
    ASSERT_EQ(divvy_gf_mul(80, 33), 190);
    ASSERT_EQ(divvy_gf_mul(33, 80), 190);
}

TEST(GfMul, Test754)
{
    ASSERT_EQ(divvy_gf_mul(78, 123), 29);
    ASSERT_EQ(divvy_gf_mul(123, 78), 29);
}

TEST(GfMul, Test755)
{
    ASSERT_EQ(divvy_gf_mul(81, 124), 207);
    ASSERT_EQ(divvy_gf_mul(124, 81), 207);
}

TEST(GfMul, Test756)
{
    ASSERT_EQ(divvy_gf_mul(82, 224), 103);
    ASSERT_EQ(divvy_gf_mul(224, 82), 103);
}

TEST(GfMul, Test757)
{
    ASSERT_EQ(divvy_gf_mul(186, 181), 5);
    ASSERT_EQ(divvy_gf_mul(181, 186), 5);
}

TEST(GfMul, Test758)
{
    ASSERT_EQ(divvy_gf_mul(91, 88), 24);
    ASSERT_EQ(divvy_gf_mul(88, 91), 24);
}

TEST(GfMul, Test759)
{
    ASSERT_EQ(divvy_gf_mul(23, 171), 34);
    ASSERT_EQ(divvy_gf_mul(171, 23), 34);
}

TEST(GfMul, Test760)
{
    ASSERT_EQ(divvy_gf_mul(117, 211), 66);
    ASSERT_EQ(divvy_gf_mul(211, 117), 66);
}

TEST(GfMul, Test761)
{
    ASSERT_EQ(divvy_gf_mul(218, 68), 121);
    ASSERT_EQ(divvy_gf_mul(68, 218), 121);
}

TEST(GfMul, Test762)
{
    ASSERT_EQ(divvy_gf_mul(242, 152), 215);
    ASSERT_EQ(divvy_gf_mul(152, 242), 215);
}

TEST(GfMul, Test763)
{
    ASSERT_EQ(divvy_gf_mul(227, 228), 199);
    ASSERT_EQ(divvy_gf_mul(228, 227), 199);
}

TEST(GfMul, Test764)
{
    ASSERT_EQ(divvy_gf_mul(190, 93), 182);
    ASSERT_EQ(divvy_gf_mul(93, 190), 182);
}

TEST(GfMul, Test765)
{
    ASSERT_EQ(divvy_gf_mul(194, 19), 201);
    ASSERT_EQ(divvy_gf_mul(19, 194), 201);
}

TEST(GfMul, Test766)
{
    ASSERT_EQ(divvy_gf_mul(125, 246), 43);
    ASSERT_EQ(divvy_gf_mul(246, 125), 43);
}

TEST(GfMul, Test767)
{
    ASSERT_EQ(divvy_gf_mul(6, 40), 240);
    ASSERT_EQ(divvy_gf_mul(40, 6), 240);
}

TEST(GfMul, Test768)
{
    ASSERT_EQ(divvy_gf_mul(176, 225), 81);
    ASSERT_EQ(divvy_gf_mul(225, 176), 81);
}

TEST(GfMul, Test769)
{
    ASSERT_EQ(divvy_gf_mul(68, 255), 110);
    ASSERT_EQ(divvy_gf_mul(255, 68), 110);
}

TEST(GfMul, Test770)
{
    ASSERT_EQ(divvy_gf_mul(230, 49), 219);
    ASSERT_EQ(divvy_gf_mul(49, 230), 219);
}

TEST(GfMul, Test771)
{
    ASSERT_EQ(divvy_gf_mul(171, 66), 46);
    ASSERT_EQ(divvy_gf_mul(66, 171), 46);
}

TEST(GfMul, Test772)
{
    ASSERT_EQ(divvy_gf_mul(93, 164), 117);
    ASSERT_EQ(divvy_gf_mul(164, 93), 117);
}

TEST(GfMul, Test773)
{
    ASSERT_EQ(divvy_gf_mul(41, 107), 209);
    ASSERT_EQ(divvy_gf_mul(107, 41), 209);
}

TEST(GfMul, Test774)
{
    ASSERT_EQ(divvy_gf_mul(95, 209), 166);
    ASSERT_EQ(divvy_gf_mul(209, 95), 166);
}

TEST(GfMul, Test775)
{
    ASSERT_EQ(divvy_gf_mul(118, 133), 166);
    ASSERT_EQ(divvy_gf_mul(133, 118), 166);
}

TEST(GfMul, Test776)
{
    ASSERT_EQ(divvy_gf_mul(102, 104), 129);
    ASSERT_EQ(divvy_gf_mul(104, 102), 129);
}

TEST(GfMul, Test777)
{
    ASSERT_EQ(divvy_gf_mul(173, 101), 171);
    ASSERT_EQ(divvy_gf_mul(101, 173), 171);
}

TEST(GfMul, Test778)
{
    ASSERT_EQ(divvy_gf_mul(87, 249), 244);
    ASSERT_EQ(divvy_gf_mul(249, 87), 244);
}

TEST(GfMul, Test779)
{
    ASSERT_EQ(divvy_gf_mul(142, 250), 104);
    ASSERT_EQ(divvy_gf_mul(250, 142), 104);
}

TEST(GfMul, Test780)
{
    ASSERT_EQ(divvy_gf_mul(59, 210), 45);
    ASSERT_EQ(divvy_gf_mul(210, 59), 45);
}

TEST(GfMul, Test781)
{
    ASSERT_EQ(divvy_gf_mul(144, 4), 118);
    ASSERT_EQ(divvy_gf_mul(4, 144), 118);
}

TEST(GfMul, Test782)
{
    ASSERT_EQ(divvy_gf_mul(138, 68), 229);
    ASSERT_EQ(divvy_gf_mul(68, 138), 229);
}

TEST(GfMul, Test783)
{
    ASSERT_EQ(divvy_gf_mul(34, 132), 56);
    ASSERT_EQ(divvy_gf_mul(132, 34), 56);
}

TEST(GfMul, Test784)
{
    ASSERT_EQ(divvy_gf_mul(193, 98), 108);
    ASSERT_EQ(divvy_gf_mul(98, 193), 108);
}

TEST(GfMul, Test785)
{
    ASSERT_EQ(divvy_gf_mul(129, 123), 178);
    ASSERT_EQ(divvy_gf_mul(123, 129), 178);
}

TEST(GfMul, Test786)
{
    ASSERT_EQ(divvy_gf_mul(192, 85), 191);
    ASSERT_EQ(divvy_gf_mul(85, 192), 191);
}

TEST(GfMul, Test787)
{
    ASSERT_EQ(divvy_gf_mul(174, 110), 234);
    ASSERT_EQ(divvy_gf_mul(110, 174), 234);
}

TEST(GfMul, Test788)
{
    ASSERT_EQ(divvy_gf_mul(239, 90), 93);
    ASSERT_EQ(divvy_gf_mul(90, 239), 93);
}

TEST(GfMul, Test789)
{
    ASSERT_EQ(divvy_gf_mul(187, 196), 203);
    ASSERT_EQ(divvy_gf_mul(196, 187), 203);
}

TEST(GfMul, Test790)
{
    ASSERT_EQ(divvy_gf_mul(135, 106), 156);
    ASSERT_EQ(divvy_gf_mul(106, 135), 156);
}

TEST(GfMul, Test791)
{
    ASSERT_EQ(divvy_gf_mul(246, 188), 157);
    ASSERT_EQ(divvy_gf_mul(188, 246), 157);
}

TEST(GfMul, Test792)
{
    ASSERT_EQ(divvy_gf_mul(151, 67), 88);
    ASSERT_EQ(divvy_gf_mul(67, 151), 88);
}

TEST(GfMul, Test793)
{
    ASSERT_EQ(divvy_gf_mul(89, 109), 188);
    ASSERT_EQ(divvy_gf_mul(109, 89), 188);
}

TEST(GfMul, Test794)
{
    ASSERT_EQ(divvy_gf_mul(179, 160), 227);
    ASSERT_EQ(divvy_gf_mul(160, 179), 227);
}

TEST(GfMul, Test795)
{
    ASSERT_EQ(divvy_gf_mul(66, 142), 231);
    ASSERT_EQ(divvy_gf_mul(142, 66), 231);
}

TEST(GfMul, Test796)
{
    ASSERT_EQ(divvy_gf_mul(9, 165), 250);
    ASSERT_EQ(divvy_gf_mul(165, 9), 250);
}

TEST(GfMul, Test797)
{
    ASSERT_EQ(divvy_gf_mul(142, 233), 217);
    ASSERT_EQ(divvy_gf_mul(233, 142), 217);
}

TEST(GfMul, Test798)
{
    ASSERT_EQ(divvy_gf_mul(65, 148), 174);
    ASSERT_EQ(divvy_gf_mul(148, 65), 174);
}

TEST(GfMul, Test799)
{
    ASSERT_EQ(divvy_gf_mul(28, 41), 81);
    ASSERT_EQ(divvy_gf_mul(41, 28), 81);
}

TEST(GfMul, Test800)
{
    ASSERT_EQ(divvy_gf_mul(211, 161), 98);
    ASSERT_EQ(divvy_gf_mul(161, 211), 98);
}

TEST(GfMul, Test801)
{
    ASSERT_EQ(divvy_gf_mul(9, 96), 77);
    ASSERT_EQ(divvy_gf_mul(96, 9), 77);
}

TEST(GfMul, Test802)
{
    ASSERT_EQ(divvy_gf_mul(57, 227), 119);
    ASSERT_EQ(divvy_gf_mul(227, 57), 119);
}

TEST(GfMul, Test803)
{
    ASSERT_EQ(divvy_gf_mul(35, 215), 199);
    ASSERT_EQ(divvy_gf_mul(215, 35), 199);
}

TEST(GfMul, Test804)
{
    ASSERT_EQ(divvy_gf_mul(204, 65), 7);
    ASSERT_EQ(divvy_gf_mul(65, 204), 7);
}

TEST(GfMul, Test805)
{
    ASSERT_EQ(divvy_gf_mul(81, 164), 132);
    ASSERT_EQ(divvy_gf_mul(164, 81), 132);
}

TEST(GfMul, Test806)
{
    ASSERT_EQ(divvy_gf_mul(40, 11), 35);
    ASSERT_EQ(divvy_gf_mul(11, 40), 35);
}

TEST(GfMul, Test807)
{
    ASSERT_EQ(divvy_gf_mul(11, 101), 170);
    ASSERT_EQ(divvy_gf_mul(101, 11), 170);
}

TEST(GfMul, Test808)
{
    ASSERT_EQ(divvy_gf_mul(93, 111), 169);
    ASSERT_EQ(divvy_gf_mul(111, 93), 169);
}

TEST(GfMul, Test809)
{
    ASSERT_EQ(divvy_gf_mul(219, 234), 149);
    ASSERT_EQ(divvy_gf_mul(234, 219), 149);
}

TEST(GfMul, Test810)
{
    ASSERT_EQ(divvy_gf_mul(219, 153), 190);
    ASSERT_EQ(divvy_gf_mul(153, 219), 190);
}

TEST(GfMul, Test811)
{
    ASSERT_EQ(divvy_gf_mul(16, 42), 150);
    ASSERT_EQ(divvy_gf_mul(42, 16), 150);
}

TEST(GfMul, Test812)
{
    ASSERT_EQ(divvy_gf_mul(155, 175), 11);
    ASSERT_EQ(divvy_gf_mul(175, 155), 11);
}

TEST(GfMul, Test813)
{
    ASSERT_EQ(divvy_gf_mul(221, 129), 8);
    ASSERT_EQ(divvy_gf_mul(129, 221), 8);
}

TEST(GfMul, Test814)
{
    ASSERT_EQ(divvy_gf_mul(145, 135), 24);
    ASSERT_EQ(divvy_gf_mul(135, 145), 24);
}

TEST(GfMul, Test815)
{
    ASSERT_EQ(divvy_gf_mul(165, 47), 110);
    ASSERT_EQ(divvy_gf_mul(47, 165), 110);
}

TEST(GfMul, Test816)
{
    ASSERT_EQ(divvy_gf_mul(168, 232), 21);
    ASSERT_EQ(divvy_gf_mul(232, 168), 21);
}

TEST(GfMul, Test817)
{
    ASSERT_EQ(divvy_gf_mul(84, 52), 18);
    ASSERT_EQ(divvy_gf_mul(52, 84), 18);
}

TEST(GfMul, Test818)
{
    ASSERT_EQ(divvy_gf_mul(162, 202), 7);
    ASSERT_EQ(divvy_gf_mul(202, 162), 7);
}

TEST(GfMul, Test819)
{
    ASSERT_EQ(divvy_gf_mul(198, 222), 155);
    ASSERT_EQ(divvy_gf_mul(222, 198), 155);
}

TEST(GfMul, Test820)
{
    ASSERT_EQ(divvy_gf_mul(77, 252), 255);
    ASSERT_EQ(divvy_gf_mul(252, 77), 255);
}

TEST(GfMul, Test821)
{
    ASSERT_EQ(divvy_gf_mul(18, 181), 212);
    ASSERT_EQ(divvy_gf_mul(181, 18), 212);
}

TEST(GfMul, Test822)
{
    ASSERT_EQ(divvy_gf_mul(61, 132), 93);
    ASSERT_EQ(divvy_gf_mul(132, 61), 93);
}

TEST(GfMul, Test823)
{
    ASSERT_EQ(divvy_gf_mul(89, 67), 90);
    ASSERT_EQ(divvy_gf_mul(67, 89), 90);
}

TEST(GfMul, Test824)
{
    ASSERT_EQ(divvy_gf_mul(104, 135), 137);
    ASSERT_EQ(divvy_gf_mul(135, 104), 137);
}

TEST(GfMul, Test825)
{
    ASSERT_EQ(divvy_gf_mul(94, 24), 81);
    ASSERT_EQ(divvy_gf_mul(24, 94), 81);
}

TEST(GfMul, Test826)
{
    ASSERT_EQ(divvy_gf_mul(107, 160), 222);
    ASSERT_EQ(divvy_gf_mul(160, 107), 222);
}

TEST(GfMul, Test827)
{
    ASSERT_EQ(divvy_gf_mul(1, 222), 222);
    ASSERT_EQ(divvy_gf_mul(222, 1), 222);
}

TEST(GfMul, Test828)
{
    ASSERT_EQ(divvy_gf_mul(162, 32), 135);
    ASSERT_EQ(divvy_gf_mul(32, 162), 135);
}

TEST(GfMul, Test829)
{
    ASSERT_EQ(divvy_gf_mul(37, 48), 170);
    ASSERT_EQ(divvy_gf_mul(48, 37), 170);
}

TEST(GfMul, Test830)
{
    ASSERT_EQ(divvy_gf_mul(167, 188), 192);
    ASSERT_EQ(divvy_gf_mul(188, 167), 192);
}

TEST(GfMul, Test831)
{
    ASSERT_EQ(divvy_gf_mul(97, 220), 165);
    ASSERT_EQ(divvy_gf_mul(220, 97), 165);
}

TEST(GfMul, Test832)
{
    ASSERT_EQ(divvy_gf_mul(26, 28), 3);
    ASSERT_EQ(divvy_gf_mul(28, 26), 3);
}

TEST(GfMul, Test833)
{
    ASSERT_EQ(divvy_gf_mul(132, 198), 207);
    ASSERT_EQ(divvy_gf_mul(198, 132), 207);
}

TEST(GfMul, Test834)
{
    ASSERT_EQ(divvy_gf_mul(125, 196), 121);
    ASSERT_EQ(divvy_gf_mul(196, 125), 121);
}

TEST(GfMul, Test835)
{
    ASSERT_EQ(divvy_gf_mul(1, 217), 217);
    ASSERT_EQ(divvy_gf_mul(217, 1), 217);
}

TEST(GfMul, Test836)
{
    ASSERT_EQ(divvy_gf_mul(92, 98), 39);
    ASSERT_EQ(divvy_gf_mul(98, 92), 39);
}

TEST(GfMul, Test837)
{
    ASSERT_EQ(divvy_gf_mul(148, 248), 28);
    ASSERT_EQ(divvy_gf_mul(248, 148), 28);
}

TEST(GfMul, Test838)
{
    ASSERT_EQ(divvy_gf_mul(97, 229), 63);
    ASSERT_EQ(divvy_gf_mul(229, 97), 63);
}

TEST(GfMul, Test839)
{
    ASSERT_EQ(divvy_gf_mul(110, 225), 120);
    ASSERT_EQ(divvy_gf_mul(225, 110), 120);
}

TEST(GfMul, Test840)
{
    ASSERT_EQ(divvy_gf_mul(10, 166), 16);
    ASSERT_EQ(divvy_gf_mul(166, 10), 16);
}

TEST(GfMul, Test841)
{
    ASSERT_EQ(divvy_gf_mul(194, 207), 152);
    ASSERT_EQ(divvy_gf_mul(207, 194), 152);
}

TEST(GfMul, Test842)
{
    ASSERT_EQ(divvy_gf_mul(173, 89), 116);
    ASSERT_EQ(divvy_gf_mul(89, 173), 116);
}

TEST(GfMul, Test843)
{
    ASSERT_EQ(divvy_gf_mul(114, 117), 157);
    ASSERT_EQ(divvy_gf_mul(117, 114), 157);
}

TEST(GfMul, Test844)
{
    ASSERT_EQ(divvy_gf_mul(65, 73), 148);
    ASSERT_EQ(divvy_gf_mul(73, 65), 148);
}

TEST(GfMul, Test845)
{
    ASSERT_EQ(divvy_gf_mul(246, 104), 209);
    ASSERT_EQ(divvy_gf_mul(104, 246), 209);
}

TEST(GfMul, Test846)
{
    ASSERT_EQ(divvy_gf_mul(158, 113), 119);
    ASSERT_EQ(divvy_gf_mul(113, 158), 119);
}

TEST(GfMul, Test847)
{
    ASSERT_EQ(divvy_gf_mul(31, 69), 226);
    ASSERT_EQ(divvy_gf_mul(69, 31), 226);
}

TEST(GfMul, Test848)
{
    ASSERT_EQ(divvy_gf_mul(204, 106), 154);
    ASSERT_EQ(divvy_gf_mul(106, 204), 154);
}

TEST(GfMul, Test849)
{
    ASSERT_EQ(divvy_gf_mul(49, 47), 126);
    ASSERT_EQ(divvy_gf_mul(47, 49), 126);
}

TEST(GfMul, Test850)
{
    ASSERT_EQ(divvy_gf_mul(76, 197), 246);
    ASSERT_EQ(divvy_gf_mul(197, 76), 246);
}

TEST(GfMul, Test851)
{
    ASSERT_EQ(divvy_gf_mul(40, 77), 61);
    ASSERT_EQ(divvy_gf_mul(77, 40), 61);
}

TEST(GfMul, Test852)
{
    ASSERT_EQ(divvy_gf_mul(133, 108), 123);
    ASSERT_EQ(divvy_gf_mul(108, 133), 123);
}

TEST(GfMul, Test853)
{
    ASSERT_EQ(divvy_gf_mul(55, 214), 94);
    ASSERT_EQ(divvy_gf_mul(214, 55), 94);
}

TEST(GfMul, Test854)
{
    ASSERT_EQ(divvy_gf_mul(113, 98), 31);
    ASSERT_EQ(divvy_gf_mul(98, 113), 31);
}

TEST(GfMul, Test855)
{
    ASSERT_EQ(divvy_gf_mul(125, 130), 30);
    ASSERT_EQ(divvy_gf_mul(130, 125), 30);
}

TEST(GfMul, Test856)
{
    ASSERT_EQ(divvy_gf_mul(79, 98), 251);
    ASSERT_EQ(divvy_gf_mul(98, 79), 251);
}

TEST(GfMul, Test857)
{
    ASSERT_EQ(divvy_gf_mul(196, 242), 136);
    ASSERT_EQ(divvy_gf_mul(242, 196), 136);
}

TEST(GfMul, Test858)
{
    ASSERT_EQ(divvy_gf_mul(62, 1), 62);
    ASSERT_EQ(divvy_gf_mul(1, 62), 62);
}

TEST(GfMul, Test859)
{
    ASSERT_EQ(divvy_gf_mul(60, 24), 22);
    ASSERT_EQ(divvy_gf_mul(24, 60), 22);
}

TEST(GfMul, Test860)
{
    ASSERT_EQ(divvy_gf_mul(237, 226), 144);
    ASSERT_EQ(divvy_gf_mul(226, 237), 144);
}

TEST(GfMul, Test861)
{
    ASSERT_EQ(divvy_gf_mul(142, 240), 115);
    ASSERT_EQ(divvy_gf_mul(240, 142), 115);
}

TEST(GfMul, Test862)
{
    ASSERT_EQ(divvy_gf_mul(18, 38), 26);
    ASSERT_EQ(divvy_gf_mul(38, 18), 26);
}

TEST(GfMul, Test863)
{
    ASSERT_EQ(divvy_gf_mul(69, 217), 108);
    ASSERT_EQ(divvy_gf_mul(217, 69), 108);
}

TEST(GfMul, Test864)
{
    ASSERT_EQ(divvy_gf_mul(113, 187), 123);
    ASSERT_EQ(divvy_gf_mul(187, 113), 123);
}

TEST(GfMul, Test865)
{
    ASSERT_EQ(divvy_gf_mul(35, 247), 203);
    ASSERT_EQ(divvy_gf_mul(247, 35), 203);
}

TEST(GfMul, Test866)
{
    ASSERT_EQ(divvy_gf_mul(70, 55), 221);
    ASSERT_EQ(divvy_gf_mul(55, 70), 221);
}

TEST(GfMul, Test867)
{
    ASSERT_EQ(divvy_gf_mul(6, 130), 33);
    ASSERT_EQ(divvy_gf_mul(130, 6), 33);
}

TEST(GfMul, Test868)
{
    ASSERT_EQ(divvy_gf_mul(26, 141), 13);
    ASSERT_EQ(divvy_gf_mul(141, 26), 13);
}

TEST(GfMul, Test869)
{
    ASSERT_EQ(divvy_gf_mul(8, 201), 18);
    ASSERT_EQ(divvy_gf_mul(201, 8), 18);
}

TEST(GfMul, Test870)
{
    ASSERT_EQ(divvy_gf_mul(82, 90), 18);
    ASSERT_EQ(divvy_gf_mul(90, 82), 18);
}

TEST(GfMul, Test871)
{
    ASSERT_EQ(divvy_gf_mul(44, 215), 54);
    ASSERT_EQ(divvy_gf_mul(215, 44), 54);
}

TEST(GfMul, Test872)
{
    ASSERT_EQ(divvy_gf_mul(195, 234), 166);
    ASSERT_EQ(divvy_gf_mul(234, 195), 166);
}

TEST(GfMul, Test873)
{
    ASSERT_EQ(divvy_gf_mul(240, 122), 216);
    ASSERT_EQ(divvy_gf_mul(122, 240), 216);
}

TEST(GfMul, Test874)
{
    ASSERT_EQ(divvy_gf_mul(127, 6), 25);
    ASSERT_EQ(divvy_gf_mul(6, 127), 25);
}

TEST(GfMul, Test875)
{
    ASSERT_EQ(divvy_gf_mul(49, 9), 162);
    ASSERT_EQ(divvy_gf_mul(9, 49), 162);
}

TEST(GfMul, Test876)
{
    ASSERT_EQ(divvy_gf_mul(21, 73), 138);
    ASSERT_EQ(divvy_gf_mul(73, 21), 138);
}

TEST(GfMul, Test877)
{
    ASSERT_EQ(divvy_gf_mul(227, 34), 162);
    ASSERT_EQ(divvy_gf_mul(34, 227), 162);
}

TEST(GfMul, Test878)
{
    ASSERT_EQ(divvy_gf_mul(29, 249), 176);
    ASSERT_EQ(divvy_gf_mul(249, 29), 176);
}

TEST(GfMul, Test879)
{
    ASSERT_EQ(divvy_gf_mul(59, 21), 74);
    ASSERT_EQ(divvy_gf_mul(21, 59), 74);
}

TEST(GfMul, Test880)
{
    ASSERT_EQ(divvy_gf_mul(254, 177), 144);
    ASSERT_EQ(divvy_gf_mul(177, 254), 144);
}

TEST(GfMul, Test881)
{
    ASSERT_EQ(divvy_gf_mul(192, 136), 141);
    ASSERT_EQ(divvy_gf_mul(136, 192), 141);
}

TEST(GfMul, Test882)
{
    ASSERT_EQ(divvy_gf_mul(99, 25), 60);
    ASSERT_EQ(divvy_gf_mul(25, 99), 60);
}

TEST(GfMul, Test883)
{
    ASSERT_EQ(divvy_gf_mul(187, 189), 31);
    ASSERT_EQ(divvy_gf_mul(189, 187), 31);
}

TEST(GfMul, Test884)
{
    ASSERT_EQ(divvy_gf_mul(117, 229), 84);
    ASSERT_EQ(divvy_gf_mul(229, 117), 84);
}

TEST(GfMul, Test885)
{
    ASSERT_EQ(divvy_gf_mul(27, 37), 58);
    ASSERT_EQ(divvy_gf_mul(37, 27), 58);
}

TEST(GfMul, Test886)
{
    ASSERT_EQ(divvy_gf_mul(223, 75), 191);
    ASSERT_EQ(divvy_gf_mul(75, 223), 191);
}

TEST(GfMul, Test887)
{
    ASSERT_EQ(divvy_gf_mul(46, 44), 100);
    ASSERT_EQ(divvy_gf_mul(44, 46), 100);
}

TEST(GfMul, Test888)
{
    ASSERT_EQ(divvy_gf_mul(87, 11), 119);
    ASSERT_EQ(divvy_gf_mul(11, 87), 119);
}

TEST(GfMul, Test889)
{
    ASSERT_EQ(divvy_gf_mul(204, 114), 212);
    ASSERT_EQ(divvy_gf_mul(114, 204), 212);
}

TEST(GfMul, Test890)
{
    ASSERT_EQ(divvy_gf_mul(251, 102), 218);
    ASSERT_EQ(divvy_gf_mul(102, 251), 218);
}

TEST(GfMul, Test891)
{
    ASSERT_EQ(divvy_gf_mul(205, 239), 41);
    ASSERT_EQ(divvy_gf_mul(239, 205), 41);
}

TEST(GfMul, Test892)
{
    ASSERT_EQ(divvy_gf_mul(41, 87), 215);
    ASSERT_EQ(divvy_gf_mul(87, 41), 215);
}

TEST(GfMul, Test893)
{
    ASSERT_EQ(divvy_gf_mul(142, 16), 56);
    ASSERT_EQ(divvy_gf_mul(16, 142), 56);
}

TEST(GfMul, Test894)
{
    ASSERT_EQ(divvy_gf_mul(145, 100), 174);
    ASSERT_EQ(divvy_gf_mul(100, 145), 174);
}

TEST(GfMul, Test895)
{
    ASSERT_EQ(divvy_gf_mul(242, 193), 159);
    ASSERT_EQ(divvy_gf_mul(193, 242), 159);
}

TEST(GfMul, Test896)
{
    ASSERT_EQ(divvy_gf_mul(9, 70), 64);
    ASSERT_EQ(divvy_gf_mul(70, 9), 64);
}

TEST(GfMul, Test897)
{
    ASSERT_EQ(divvy_gf_mul(133, 104), 89);
    ASSERT_EQ(divvy_gf_mul(104, 133), 89);
}

TEST(GfMul, Test898)
{
    ASSERT_EQ(divvy_gf_mul(3, 153), 176);
    ASSERT_EQ(divvy_gf_mul(153, 3), 176);
}

TEST(GfMul, Test899)
{
    ASSERT_EQ(divvy_gf_mul(215, 157), 57);
    ASSERT_EQ(divvy_gf_mul(157, 215), 57);
}

TEST(GfMul, Test900)
{
    ASSERT_EQ(divvy_gf_mul(14, 3), 18);
    ASSERT_EQ(divvy_gf_mul(3, 14), 18);
}

TEST(GfMul, Test901)
{
    ASSERT_EQ(divvy_gf_mul(227, 113), 208);
    ASSERT_EQ(divvy_gf_mul(113, 227), 208);
}

TEST(GfMul, Test902)
{
    ASSERT_EQ(divvy_gf_mul(223, 70), 147);
    ASSERT_EQ(divvy_gf_mul(70, 223), 147);
}

TEST(GfMul, Test903)
{
    ASSERT_EQ(divvy_gf_mul(14, 9), 126);
    ASSERT_EQ(divvy_gf_mul(9, 14), 126);
}

TEST(GfMul, Test904)
{
    ASSERT_EQ(divvy_gf_mul(250, 243), 105);
    ASSERT_EQ(divvy_gf_mul(243, 250), 105);
}

TEST(GfMul, Test905)
{
    ASSERT_EQ(divvy_gf_mul(182, 83), 54);
    ASSERT_EQ(divvy_gf_mul(83, 182), 54);
}

TEST(GfMul, Test906)
{
    ASSERT_EQ(divvy_gf_mul(16, 207), 68);
    ASSERT_EQ(divvy_gf_mul(207, 16), 68);
}

TEST(GfMul, Test907)
{
    ASSERT_EQ(divvy_gf_mul(108, 166), 224);
    ASSERT_EQ(divvy_gf_mul(166, 108), 224);
}

TEST(GfMul, Test908)
{
    ASSERT_EQ(divvy_gf_mul(9, 214), 60);
    ASSERT_EQ(divvy_gf_mul(214, 9), 60);
}

TEST(GfMul, Test909)
{
    ASSERT_EQ(divvy_gf_mul(174, 133), 80);
    ASSERT_EQ(divvy_gf_mul(133, 174), 80);
}

TEST(GfMul, Test910)
{
    ASSERT_EQ(divvy_gf_mul(191, 72), 155);
    ASSERT_EQ(divvy_gf_mul(72, 191), 155);
}

TEST(GfMul, Test911)
{
    ASSERT_EQ(divvy_gf_mul(216, 7), 62);
    ASSERT_EQ(divvy_gf_mul(7, 216), 62);
}

TEST(GfMul, Test912)
{
    ASSERT_EQ(divvy_gf_mul(75, 40), 205);
    ASSERT_EQ(divvy_gf_mul(40, 75), 205);
}

TEST(GfMul, Test913)
{
    ASSERT_EQ(divvy_gf_mul(47, 215), 84);
    ASSERT_EQ(divvy_gf_mul(215, 47), 84);
}

TEST(GfMul, Test914)
{
    ASSERT_EQ(divvy_gf_mul(174, 193), 230);
    ASSERT_EQ(divvy_gf_mul(193, 174), 230);
}

TEST(GfMul, Test915)
{
    ASSERT_EQ(divvy_gf_mul(91, 155), 166);
    ASSERT_EQ(divvy_gf_mul(155, 91), 166);
}

TEST(GfMul, Test916)
{
    ASSERT_EQ(divvy_gf_mul(90, 140), 119);
    ASSERT_EQ(divvy_gf_mul(140, 90), 119);
}

TEST(GfMul, Test917)
{
    ASSERT_EQ(divvy_gf_mul(135, 101), 112);
    ASSERT_EQ(divvy_gf_mul(101, 135), 112);
}

TEST(GfMul, Test918)
{
    ASSERT_EQ(divvy_gf_mul(247, 156), 232);
    ASSERT_EQ(divvy_gf_mul(156, 247), 232);
}

TEST(GfMul, Test919)
{
    ASSERT_EQ(divvy_gf_mul(250, 186), 230);
    ASSERT_EQ(divvy_gf_mul(186, 250), 230);
}

TEST(GfMul, Test920)
{
    ASSERT_EQ(divvy_gf_mul(154, 159), 1);
    ASSERT_EQ(divvy_gf_mul(159, 154), 1);
}

TEST(GfMul, Test921)
{
    ASSERT_EQ(divvy_gf_mul(109, 255), 250);
    ASSERT_EQ(divvy_gf_mul(255, 109), 250);
}

TEST(GfMul, Test922)
{
    ASSERT_EQ(divvy_gf_mul(189, 98), 191);
    ASSERT_EQ(divvy_gf_mul(98, 189), 191);
}

TEST(GfMul, Test923)
{
    ASSERT_EQ(divvy_gf_mul(254, 238), 107);
    ASSERT_EQ(divvy_gf_mul(238, 254), 107);
}

TEST(GfMul, Test924)
{
    ASSERT_EQ(divvy_gf_mul(79, 76), 47);
    ASSERT_EQ(divvy_gf_mul(76, 79), 47);
}

TEST(GfMul, Test925)
{
    ASSERT_EQ(divvy_gf_mul(230, 203), 180);
    ASSERT_EQ(divvy_gf_mul(203, 230), 180);
}

TEST(GfMul, Test926)
{
    ASSERT_EQ(divvy_gf_mul(65, 96), 19);
    ASSERT_EQ(divvy_gf_mul(96, 65), 19);
}

TEST(GfMul, Test927)
{
    ASSERT_EQ(divvy_gf_mul(43, 77), 234);
    ASSERT_EQ(divvy_gf_mul(77, 43), 234);
}

TEST(GfMul, Test928)
{
    ASSERT_EQ(divvy_gf_mul(232, 27), 32);
    ASSERT_EQ(divvy_gf_mul(27, 232), 32);
}

TEST(GfMul, Test929)
{
    ASSERT_EQ(divvy_gf_mul(220, 133), 212);
    ASSERT_EQ(divvy_gf_mul(133, 220), 212);
}

TEST(GfMul, Test930)
{
    ASSERT_EQ(divvy_gf_mul(26, 206), 249);
    ASSERT_EQ(divvy_gf_mul(206, 26), 249);
}

TEST(GfMul, Test931)
{
    ASSERT_EQ(divvy_gf_mul(205, 219), 156);
    ASSERT_EQ(divvy_gf_mul(219, 205), 156);
}

TEST(GfMul, Test932)
{
    ASSERT_EQ(divvy_gf_mul(253, 174), 125);
    ASSERT_EQ(divvy_gf_mul(174, 253), 125);
}

TEST(GfMul, Test933)
{
    ASSERT_EQ(divvy_gf_mul(60, 56), 215);
    ASSERT_EQ(divvy_gf_mul(56, 60), 215);
}

TEST(GfMul, Test934)
{
    ASSERT_EQ(divvy_gf_mul(212, 3), 103);
    ASSERT_EQ(divvy_gf_mul(3, 212), 103);
}

TEST(GfMul, Test935)
{
    ASSERT_EQ(divvy_gf_mul(10, 98), 249);
    ASSERT_EQ(divvy_gf_mul(98, 10), 249);
}

TEST(GfMul, Test936)
{
    ASSERT_EQ(divvy_gf_mul(83, 212), 25);
    ASSERT_EQ(divvy_gf_mul(212, 83), 25);
}

TEST(GfMul, Test937)
{
    ASSERT_EQ(divvy_gf_mul(18, 27), 157);
    ASSERT_EQ(divvy_gf_mul(27, 18), 157);
}

TEST(GfMul, Test938)
{
    ASSERT_EQ(divvy_gf_mul(228, 100), 7);
    ASSERT_EQ(divvy_gf_mul(100, 228), 7);
}

TEST(GfMul, Test939)
{
    ASSERT_EQ(divvy_gf_mul(79, 40), 109);
    ASSERT_EQ(divvy_gf_mul(40, 79), 109);
}

TEST(GfMul, Test940)
{
    ASSERT_EQ(divvy_gf_mul(8, 104), 109);
    ASSERT_EQ(divvy_gf_mul(104, 8), 109);
}

TEST(GfMul, Test941)
{
    ASSERT_EQ(divvy_gf_mul(254, 37), 217);
    ASSERT_EQ(divvy_gf_mul(37, 254), 217);
}

TEST(GfMul, Test942)
{
    ASSERT_EQ(divvy_gf_mul(171, 215), 135);
    ASSERT_EQ(divvy_gf_mul(215, 171), 135);
}

TEST(GfMul, Test943)
{
    ASSERT_EQ(divvy_gf_mul(87, 221), 189);
    ASSERT_EQ(divvy_gf_mul(221, 87), 189);
}

TEST(GfMul, Test944)
{
    ASSERT_EQ(divvy_gf_mul(142, 73), 114);
    ASSERT_EQ(divvy_gf_mul(73, 142), 114);
}

TEST(GfMul, Test945)
{
    ASSERT_EQ(divvy_gf_mul(214, 29), 134);
    ASSERT_EQ(divvy_gf_mul(29, 214), 134);
}

TEST(GfMul, Test946)
{
    ASSERT_EQ(divvy_gf_mul(156, 113), 149);
    ASSERT_EQ(divvy_gf_mul(113, 156), 149);
}

TEST(GfMul, Test947)
{
    ASSERT_EQ(divvy_gf_mul(135, 250), 3);
    ASSERT_EQ(divvy_gf_mul(250, 135), 3);
}

TEST(GfMul, Test948)
{
    ASSERT_EQ(divvy_gf_mul(109, 238), 29);
    ASSERT_EQ(divvy_gf_mul(238, 109), 29);
}

TEST(GfMul, Test949)
{
    ASSERT_EQ(divvy_gf_mul(133, 116), 183);
    ASSERT_EQ(divvy_gf_mul(116, 133), 183);
}

TEST(GfMul, Test950)
{
    ASSERT_EQ(divvy_gf_mul(175, 235), 81);
    ASSERT_EQ(divvy_gf_mul(235, 175), 81);
}

TEST(GfMul, Test951)
{
    ASSERT_EQ(divvy_gf_mul(226, 212), 222);
    ASSERT_EQ(divvy_gf_mul(212, 226), 222);
}

TEST(GfMul, Test952)
{
    ASSERT_EQ(divvy_gf_mul(114, 36), 17);
    ASSERT_EQ(divvy_gf_mul(36, 114), 17);
}

TEST(GfMul, Test953)
{
    ASSERT_EQ(divvy_gf_mul(146, 137), 55);
    ASSERT_EQ(divvy_gf_mul(137, 146), 55);
}

TEST(GfMul, Test954)
{
    ASSERT_EQ(divvy_gf_mul(240, 28), 181);
    ASSERT_EQ(divvy_gf_mul(28, 240), 181);
}

TEST(GfMul, Test955)
{
    ASSERT_EQ(divvy_gf_mul(160, 174), 108);
    ASSERT_EQ(divvy_gf_mul(174, 160), 108);
}

TEST(GfMul, Test956)
{
    ASSERT_EQ(divvy_gf_mul(20, 213), 134);
    ASSERT_EQ(divvy_gf_mul(213, 20), 134);
}

TEST(GfMul, Test957)
{
    ASSERT_EQ(divvy_gf_mul(27, 142), 173);
    ASSERT_EQ(divvy_gf_mul(142, 27), 173);
}

TEST(GfMul, Test958)
{
    ASSERT_EQ(divvy_gf_mul(170, 29), 93);
    ASSERT_EQ(divvy_gf_mul(29, 170), 93);
}

TEST(GfMul, Test959)
{
    ASSERT_EQ(divvy_gf_mul(253, 194), 160);
    ASSERT_EQ(divvy_gf_mul(194, 253), 160);
}

TEST(GfMul, Test960)
{
    ASSERT_EQ(divvy_gf_mul(183, 202), 220);
    ASSERT_EQ(divvy_gf_mul(202, 183), 220);
}

TEST(GfMul, Test961)
{
    ASSERT_EQ(divvy_gf_mul(37, 20), 242);
    ASSERT_EQ(divvy_gf_mul(20, 37), 242);
}

TEST(GfMul, Test962)
{
    ASSERT_EQ(divvy_gf_mul(58, 188), 171);
    ASSERT_EQ(divvy_gf_mul(188, 58), 171);
}

TEST(GfMul, Test963)
{
    ASSERT_EQ(divvy_gf_mul(21, 90), 254);
    ASSERT_EQ(divvy_gf_mul(90, 21), 254);
}

TEST(GfMul, Test964)
{
    ASSERT_EQ(divvy_gf_mul(198, 245), 19);
    ASSERT_EQ(divvy_gf_mul(245, 198), 19);
}

TEST(GfMul, Test965)
{
    ASSERT_EQ(divvy_gf_mul(184, 213), 81);
    ASSERT_EQ(divvy_gf_mul(213, 184), 81);
}

TEST(GfMul, Test966)
{
    ASSERT_EQ(divvy_gf_mul(167, 157), 64);
    ASSERT_EQ(divvy_gf_mul(157, 167), 64);
}

TEST(GfMul, Test967)
{
    ASSERT_EQ(divvy_gf_mul(84, 252), 251);
    ASSERT_EQ(divvy_gf_mul(252, 84), 251);
}

TEST(GfMul, Test968)
{
    ASSERT_EQ(divvy_gf_mul(4, 77), 47);
    ASSERT_EQ(divvy_gf_mul(77, 4), 47);
}

TEST(GfMul, Test969)
{
    ASSERT_EQ(divvy_gf_mul(123, 99), 157);
    ASSERT_EQ(divvy_gf_mul(99, 123), 157);
}

TEST(GfMul, Test970)
{
    ASSERT_EQ(divvy_gf_mul(68, 223), 54);
    ASSERT_EQ(divvy_gf_mul(223, 68), 54);
}

TEST(GfMul, Test971)
{
    ASSERT_EQ(divvy_gf_mul(199, 57), 242);
    ASSERT_EQ(divvy_gf_mul(57, 199), 242);
}

TEST(GfMul, Test972)
{
    ASSERT_EQ(divvy_gf_mul(122, 91), 59);
    ASSERT_EQ(divvy_gf_mul(91, 122), 59);
}

TEST(GfMul, Test973)
{
    ASSERT_EQ(divvy_gf_mul(63, 52), 128);
    ASSERT_EQ(divvy_gf_mul(52, 63), 128);
}

TEST(GfMul, Test974)
{
    ASSERT_EQ(divvy_gf_mul(13, 226), 22);
    ASSERT_EQ(divvy_gf_mul(226, 13), 22);
}

TEST(GfMul, Test975)
{
    ASSERT_EQ(divvy_gf_mul(158, 34), 97);
    ASSERT_EQ(divvy_gf_mul(34, 158), 97);
}

TEST(GfMul, Test976)
{
    ASSERT_EQ(divvy_gf_mul(29, 138), 208);
    ASSERT_EQ(divvy_gf_mul(138, 29), 208);
}

TEST(GfMul, Test977)
{
    ASSERT_EQ(divvy_gf_mul(180, 187), 11);
    ASSERT_EQ(divvy_gf_mul(187, 180), 11);
}

TEST(GfMul, Test978)
{
    ASSERT_EQ(divvy_gf_mul(71, 114), 218);
    ASSERT_EQ(divvy_gf_mul(114, 71), 218);
}

TEST(GfMul, Test979)
{
    ASSERT_EQ(divvy_gf_mul(51, 135), 113);
    ASSERT_EQ(divvy_gf_mul(135, 51), 113);
}

TEST(GfMul, Test980)
{
    ASSERT_EQ(divvy_gf_mul(149, 82), 216);
    ASSERT_EQ(divvy_gf_mul(82, 149), 216);
}

TEST(GfMul, Test981)
{
    ASSERT_EQ(divvy_gf_mul(155, 143), 237);
    ASSERT_EQ(divvy_gf_mul(143, 155), 237);
}

TEST(GfMul, Test982)
{
    ASSERT_EQ(divvy_gf_mul(218, 57), 65);
    ASSERT_EQ(divvy_gf_mul(57, 218), 65);
}

TEST(GfMul, Test983)
{
    ASSERT_EQ(divvy_gf_mul(141, 36), 18);
    ASSERT_EQ(divvy_gf_mul(36, 141), 18);
}

TEST(GfMul, Test984)
{
    ASSERT_EQ(divvy_gf_mul(99, 72), 134);
    ASSERT_EQ(divvy_gf_mul(72, 99), 134);
}

TEST(GfMul, Test985)
{
    ASSERT_EQ(divvy_gf_mul(214, 20), 186);
    ASSERT_EQ(divvy_gf_mul(20, 214), 186);
}

TEST(GfMul, Test986)
{
    ASSERT_EQ(divvy_gf_mul(98, 68), 96);
    ASSERT_EQ(divvy_gf_mul(68, 98), 96);
}

TEST(GfMul, Test987)
{
    ASSERT_EQ(divvy_gf_mul(250, 236), 17);
    ASSERT_EQ(divvy_gf_mul(236, 250), 17);
}

TEST(GfMul, Test988)
{
    ASSERT_EQ(divvy_gf_mul(147, 145), 185);
    ASSERT_EQ(divvy_gf_mul(145, 147), 185);
}

TEST(GfMul, Test989)
{
    ASSERT_EQ(divvy_gf_mul(22, 211), 67);
    ASSERT_EQ(divvy_gf_mul(211, 22), 67);
}

TEST(GfMul, Test990)
{
    ASSERT_EQ(divvy_gf_mul(162, 111), 182);
    ASSERT_EQ(divvy_gf_mul(111, 162), 182);
}

TEST(GfMul, Test991)
{
    ASSERT_EQ(divvy_gf_mul(117, 89), 165);
    ASSERT_EQ(divvy_gf_mul(89, 117), 165);
}

TEST(GfMul, Test992)
{
    ASSERT_EQ(divvy_gf_mul(250, 213), 49);
    ASSERT_EQ(divvy_gf_mul(213, 250), 49);
}

TEST(GfMul, Test993)
{
    ASSERT_EQ(divvy_gf_mul(182, 14), 94);
    ASSERT_EQ(divvy_gf_mul(14, 182), 94);
}

TEST(GfMul, Test994)
{
    ASSERT_EQ(divvy_gf_mul(96, 212), 84);
    ASSERT_EQ(divvy_gf_mul(212, 96), 84);
}

TEST(GfMul, Test995)
{
    ASSERT_EQ(divvy_gf_mul(71, 57), 109);
    ASSERT_EQ(divvy_gf_mul(57, 71), 109);
}

TEST(GfMul, Test996)
{
    ASSERT_EQ(divvy_gf_mul(17, 237), 191);
    ASSERT_EQ(divvy_gf_mul(237, 17), 191);
}

TEST(GfMul, Test997)
{
    ASSERT_EQ(divvy_gf_mul(136, 105), 111);
    ASSERT_EQ(divvy_gf_mul(105, 136), 111);
}

TEST(GfMul, Test998)
{
    ASSERT_EQ(divvy_gf_mul(99, 126), 105);
    ASSERT_EQ(divvy_gf_mul(126, 99), 105);
}

TEST(GfMul, Test999)
{
    ASSERT_EQ(divvy_gf_mul(16, 190), 21);
    ASSERT_EQ(divvy_gf_mul(190, 16), 21);
}

TEST(GfMul, Test1000)
{
    ASSERT_EQ(divvy_gf_mul(35, 128), 48);
    ASSERT_EQ(divvy_gf_mul(128, 35), 48);
}
