## 驱动说明

FluffOS v2019 版

### fluffos v2019 驱动文件说明

驱动文件解压后包含的文件比较多，但最核心的只有bin目录下的`driver.exe`，其它的是可能有用的辅助文件，具体说明如下：

* bin\include － 驱动提供的头文件，请直接放到自己LIB的 include 中使用
* bin\std - 驱动提供的一些模拟外部函数，可以选择使用，如有需求请在 SIMUL_EFUN_OB 中载入
* bin\www - 驱动提供的 websocket http dir，直接放在你的LIB中，可以使用网页连接游戏
* bin\driver.exe - fluffos v2019 驱动文件，需要配合运行时配置文件使用，基础配置可参考 `fluffos.ini`
* bin\lpcc.exe - lpc代码调试工具，使用方式：lpcc <config> lpc_file

* xMud - 测试LIB，可以直接双击 driver.cmd 运行，可以做LPC测试
* driver.cmd - 方便驱动游戏的批处理文件(先修改配置)，可直接运行驱动`xMud`
* fluffos.cfg - 测试用基础配置文件

### 游戏运行方式

你可以双击`driver.cmd`体验启动游戏

如有任何问题，请在此留言交流：https://bbs.mud.ren/threads/4

### 关于xMud

这是雪风@mud.ren写的非常基础的LPC代码测试LIB，只提供了基础的测试指令，双击`driver.cmd`运行后，可以直接网页访问：http://127.0.0.1:8019 连接游戏。
