@echo off
color 02
title X@Mud.Ren
::环境配置
set MUDLIB="%cd%\xMud"
set DRIVER="%cd%\bin\driver.exe"
set CONFIG="%cd%\fluffos.cfg"
::运行游戏
:START
cd %MUDLIB%
%DRIVER% %CONFIG% %*
::goto START
pause