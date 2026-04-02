#include <ansi.h>

int main(object me)
{
        string out;

        /* 勿用 write()：会走 receive_message 的 written/暂存缓冲，登录后再按回车会 write_prompt 把同一段再刷一遍 */
        /* 未注册玩家（多在泥潭注册室）无需每日活动倍率表，避免 MOTD/倒计时后视口仍被大段活动列表占满 */
        out = "";
        if( query("registered", me) )
                out += "\n" + ACTION_D->query_action_string();
        out += "\n" + FESTIVAL_D->query_festival_string();
        /* 单次 telnet 下行，避免 TCP 拆包卡在半截 ANSI 上导致 Web 终端后续输入异常 */
        me->receive_message("telnet", out);
        return 1;
}

