// Copyright (C) 2003-2004, by Lonely. All rights reserved.
// This software can not be used, copied, or modified
// in any form without the written permission from authors.
//
//        File        :  /include/ansi.h
//
//        The standard set of ANSI codes for mudlib use.
/*
155 6D m*SGR-设置图形格式副本（影响字符属性）
       *[0m=清除所有特殊属性
       *[1m=粗体或增加的强度
       *[2m=GIGI上的暗色或次色（XXXXXX上的上标）
       [3m=斜体（XXXXXX上的下标）
       *[4m=下划线，[0；4m=清除，然后仅设置下划线
       *[5m=慢速闪烁
       [6m=快速闪烁（XXXXXX上的覆盖）
       *[7m=负片图像，[0；1；7m=粗体+反转
       [8m=隐藏（不显示本地回显的字符）
       [9m=保留用于未来标准化
       *[10m=选择主字体（LA100）
       *[11m-[19m=选择替代字体（LA100具有11到14）
       [20m=FRAKTUR（无论是什么意思）
       *[22m=仅取消粗体或暗淡属性（VT220）
       *[24m=仅取消下划线属性（VT220）
       *[25m=仅取消快速或慢速闪烁属性（VT220）
       *[27m=仅取消负片图像属性（VT220）
       *[30m=用黑色写入，[40m=将背景设置为黑色（GIGI）
       *[31m=用红色写入，[41m=将背景设置为红色
       *[32m=用绿色写入，[42m=将背景设置为绿色
       *[33m=用黄色写入，[43m=将背景设置为黄色
       *[34m=用蓝色书写，[44m=将背景设置为蓝色
       *[35m=用洋红色写入，[45m=将背景设置为洋红色
       *[36m=用青色写入，[46m=将背景设置为青色
       *[37m=用白色写入，[47m=将背景设置为白色

VT100模拟的最低要求：
       [A通过向上光标键发送（交替ESC O A）
       [B通过向下光标键发送（交替ESC O B）
       [C通过右光标键发送（交替ESC O C）
       [D由左光标键发送（交替ESC O D）
       OP PF1键发送ESC O P
       OQ PF2键发送ESC O Q
       OR PF3键发送ESC O R
       OS PF3键发送ESC O S
       [c请求终端识别自己
       [？1；0c VT100，具有24 x 80的内存，反向视频字符属性
       [？1；2c VT100支持132列模式，粗体+闪烁+下划线+反转
       [0J从当前位置到屏幕底部（包括屏幕底部）擦除
       [1J从屏幕顶部擦除到当前位置（包括当前位置）
       [2J擦除整个屏幕（不移动光标）
       [0K从当前位置到行尾（包括行尾）删除
       [1K从行首到当前位置（包括首尾）擦除
       [2K删除整行（不移动光标）
       [12；24r将滚动区域设置为第12行到第24行。如果换行或
       在第24行接收INDex时，删除前一行12
       第13-24行向上移动。如果收到RI（反向索引），而
       在第12行上，当行12-13向下移动时，在那里插入空行。
       所有VT100兼容终端（GIGI除外）都具有此功能。
*/

#ifndef ANSI_H
#define ANSI_H

#define ESC     ""
#define CSI        ESC + "["
#define SGR(x)     CSI + x + "m"    /* Set Graphics Rendition */
#define BEL        ESC + "[s"
                /*  Foreground Colors  */

#define BLK     ESC+"[30m"          /* Black    */
#define RED     ESC+"[31m"          /* Red      */
#define GRN     ESC+"[32m"          /* Green    */
#define YEL     ESC+"[33m"          /* Yellow   */
#define BLU     ESC+"[34m"          /* Blue     */
#define MAG     ESC+"[35m"          /* Magenta  */
#define CYN     ESC+"[36m"          /* Cyan     */
#define WHT     ESC+"[37m"          /* White    */
                /*   Hi Intensity Foreground Colors   */

#define HIK        ESC+"[1;30m"            /* Black    */
#define HIR     ESC+"[1;31m"        /* Red      */
#define HIG     ESC+"[1;32m"        /* Green    */
#define HIY     ESC+"[1;33m"        /* Yellow   */
#define HIB     ESC+"[1;34m"        /* Blue     */
#define HIM     ESC+"[1;35m"        /* Magenta  */
#define HIC     ESC+"[1;36m"        /* Cyan     */
#define HIW     ESC+"[1;37m"        /* White    */

                /* High Intensity Background Colors  */

#define HBBLK   ESC+"[40;1m"        /* 淡黑     */
#define HBRED   ESC+"[41;1m"        /* Red      */
#define HBGRN   ESC+"[42;1m"        /* Green    */
#define HBYEL   ESC+"[43;1m"        /* Yellow   */
#define HBBLU   ESC+"[44;1m"        /* Blue     */
#define HBMAG   ESC+"[45;1m"        /* Magenta  */
#define HBCYN   ESC+"[46;1m"        /* Cyan     */
#define HBWHT   ESC+"[47;1m"        /* White    */

#define REDGRN ESC+"[1;31;42m"        /* Magenta  */
#define REDYEL ESC+"[1;31;43m"
#define REDBLU ESC+"[1;31;44m"
#define REDMAG ESC+"[1;31;45m"
#define REDCYN ESC+"[1;31;46m"
#define REDWHI ESC+"[1;31;47m"
#define GRNRED ESC+"[1;32;41m"
#define GRNYEL ESC+"[1;32;43m"
#define GRNBLU ESC+"[1;32;44m"
#define GRNMAG ESC+"[1;32;45m"
#define GRNCYN ESC+"[1;32;46m"
#define GRNWHI ESC+"[1;32;47m"
#define YELRED ESC+"[1;33;41m"
#define YELGRN ESC+"[1;33;42m"
#define YELBLU ESC+"[1;33;43m"
#define YELMAG ESC+"[1;33;45m"
#define YELCYN ESC+"[1;33;46m"
#define YELWHI ESC+"[1;33;47m"
#define BLURED ESC+"[1;34;41m"
#define BLUGRN ESC+"[1;34;42m"
#define BLUYEL ESC+"[1;34;43m"
#define BLUMAG ESC+"[1;34;45m"
#define BLUCYN ESC+"[1;34;46m"
#define BLUWHI ESC+"[1;34;47m"
#define MAGRED ESC+"[1;35;41m"
#define MAGGRN ESC+"[1;35;42m"
#define MAGYEL ESC+"[1;35;43m"
#define MAGBLU ESC+"[1;35;44m"
#define MAGCYN ESC+"[1;35;46m"
#define MAGWHI ESC+"[1;35;47m"
#define CYNRED ESC+"[1;36;41m"
#define CYNGRN ESC+"[1;36;42m"
#define CYNYEL ESC+"[1;36;43m"
#define CYNBLU ESC+"[1;36;44m"
#define CYNMAG ESC+"[1;36;45m"
#define CYNWHI ESC+"[1;36;47m"
#define WHIRED ESC+"[1;37;41m"
#define WHIGRN ESC+"[1;37;42m"
#define WHIYEL ESC+"[1;37;43m"
#define WHIBLU ESC+"[1;37;44m"
#define WHIMAG ESC+"[1;37;45m"
#define WHICYN ESC+"[1;37;46m"

                /*  Background Colors  */

#define BBLK    ESC+"[40m"          /* Black    */
#define BRED    ESC+"[41m"          /* Red      */
#define BGRN    ESC+"[42m"          /* Green    */
#define BYEL    ESC+"[43m"          /* Yellow   */
#define BBLU    ESC+"[44m"          /* Blue     */
#define BMAG    ESC+"[45m"          /* Magenta  */
#define BCYN    ESC+"[46m"          /* Cyan     */
#define BWHT    ESC+"[47m"          /* White    */

#define NOR     ESC+"[2;37;0m"      /* Puts everything back to normal */

/* Additional ansi Esc codes added to ansi.h by Gothic  april 23,1993 */
/* Note, these are Esc codes for VT100 terminals, and emmulators */
/*       and they may not all work within the mud               */

#define BOLD    ESC+"[1m"           /* Turn on bold mode */
#define CLR     ESC+"[2J"           /* Clear the screen  */
#define HOME    ESC+"[H"            /* Send cursor to home position */
#define REF     CLR+HOME            /* Clear screen and home cursor */
#define BIGTOP  ESC+"#3"            /* Dbl height characters, top half */
#define BIGBOT  ESC+"#4"            /* Dbl height characters, bottem half */
#define SAVEC   ESC+"[s"            /* Save cursor position */
#define REST    ESC+"[u"            /* Restore cursor to saved position */
#define REVINDEX ESC+"M"            /* Scroll screen in opposite direction */
#define SINGW   ESC+"#5"            /* Normal, single-width characters */
#define DBL     ESC+"#6"            /* Creates double-width characters */
#define FRTOP   ESC+"[2;25r"        /* Freeze top line */
#define FRBOT   ESC+"[1;24r"        /* Freeze bottom line */
#define UNFR    ESC+"[r"            /* Unfreeze top and bottom lines */
#define BLINK   ESC+"[5m"           /* Initialize blink mode */
#define U       ESC+"[4m"           /* Initialize underscore mode */
#define ITALIC  ESC+"[3m"           /* 斜体 */
#define REV     ESC+"[7m"           /* Turns reverse video mode on */
#define HIREV   ESC+"[1;7m"         /* Hi intensity reverse video  */

#define FLASH   ESC+"[5m"           // flash
                /*关于行控制 */
                /*1.移动 */
#define TOTOP(x)        (ESC+"["+x+"A")         /*向上跳转x行*/
#define TOBOT(x)        (ESC+"["+x+"B")         /*向下跳转x行*/
                                                /*当 游标已经在萤幕的最下一列时, 此一命令没有作用*/
#define TORIGHT(x)      (ESC+"["+x+"C")         /*向右移动x行*/
                                                /*当游标已经在萤幕的最右一栏时, 此一命令没有作用。*/
#define TOLEFT(x)       (ESC+"["+x+"D")         /*向左移动x行*/
                                                /*当游标已经在萤幕的最左一栏时, 此一命令没有作用。*/
#define TOPOINT(x,y)    (ESC+"["+x+";"+y+"f")   /*移动到点坐标为(x,y) x:行，y:列*/
#define TOPOINTA(x,y)   (ESC+"["+x+";"+y+"H")
                /*2.清除屏幕*/
#define CLR_LINE        ESC+"[K"                /*清除到行尾*/
#define SETDISPLAY(x,y) (ESC+"["+x+";"+y+"f")
// #define DELLINE      ESC+"[K"
                /*3.冻结屏幕指定行*/
/* 冻结屏幕指定行，x 是行号，从上往下数，分辨率为 800 x 600，y = 35，
 * 分辨率为 1024 x 768，y = 40。  */
#define FRELINE(x,y)    (ESC+"["+x+";"+y+"r")

#define CUP(n)                sprintf(ESC+"[%dA",n)        /* Cursor Up n lines */
#define CDOWN(n)        sprintf(ESC+"[%dB",n)        /* Cursor Down n lines */
#define CFW(n)                sprinff(ESC+"[%dC",n)        /* Cursor Forward n characters */
#define CBK(n)                sprintf(ESC+"[%dD",n)        /* Cursor Backward n characters */
#define DELLINE                sprintf(ESC+"[K\n"+CUP(1))
                                                /* Erase to end of line and move Cursor to home of the line */
#define CMOVE(y,x)        sprintf(ESC+"[%d;%dH",y,x)
                                                /* Move Cursor to (y,x) position */
#define BEEP ""

#endif
