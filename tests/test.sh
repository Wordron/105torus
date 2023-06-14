#!/bin/bash

make
clear

echo -e "\033[92mSimple test bisection:\033[00m"
echo -e "\033[95mWanted :\033[00m"
echo -e "x = 0.5"; echo -e "x = 0.75"; echo -e "x = 0.625"; echo -e "x = 0.5625"
echo -e "x = 0.53125"; echo -e "x = 0.515625"; echo -e "x = 0.523438"; echo -e "x = 0.519531"
echo -e "x = 0.521484"; echo -e "x = 0.522461"; echo -e "x = 0.522949"; echo -e "x = 0.522705"
echo -e "x = 0.522827"; echo -e "x = 0.522766"; echo -e "x = 0.522736"; echo -e "x = 0.522751"
echo -e "x = 0.522743"; echo -e "x = 0.522739"; echo -e "x = 0.522741"; echo -e "x = 0.522740"
echo -e "\033[31mGot :\033[00m"
./105torus 1 -1 0 6 -5 1 6
echo -e $?
echo -e

echo -e "\033[92mSimple test Newton:\033[00m"
echo -e "\033[95mWanted :\033[00m"
echo -e "x = 0.5"; echo -e "x = 0.522727272727"; echo -e "x = 0.522740003514"; echo -e "x = 0.522740003526"
echo -e "\033[31mGot :\033[00m"
./105torus 2 -1 0 6 -5 1 12
echo -e $?
echo -e

echo -e "\033[92mSimple test secant:\033[00m"
echo -e "\033[95mWanted :\033[00m"
echo -e "x = 0.5"; echo -e "x = 0.52941176"; echo -e "x = 0.52274853"
echo -e "x = 0.52274000"; echo -e "x = 0.52274000"
echo -e "\033[31mGot :\033[00m"
./105torus 3 -1 0 6 -5 1 8
echo -e $?
echo -e

echo -e "\033[92mSimple test error option:\033[00m"
echo -e "\033[95mWanted :\033[00m"
echo -e "84"
echo -e "\033[31mGot :\033[00m"
./105torus 4 -1 0 6 -5 1 8
echo -e $?
echo -e

echo -e "\033[92mSimple test error option2:\033[00m"
echo -e "\033[95mWanted :\033[00m"
echo -e "84"
echo -e "\033[31mGot :\033[00m"
./105torus 3 -1 0 a -5 1 8
echo -e $?
echo -e

echo -e "\033[92mSimple test error option3 not good nb of args:\033[00m"
echo -e "\033[95mWanted :\033[00m"
echo -e "84"
echo -e "\033[31mGot :\033[00m"
./105torus 3 -1 0 6 -5 1
echo -e $?
echo -e

echo -e "\033[92mSimple simple test:\033[00m"
echo -e "\033[95mWanted :\033[00m"
echo -e "x = 0.5"
echo -e "\033[31mGot :\033[00m"
./105torus 2 -1 2 0 0 0 5
echo -e $?
echo -e