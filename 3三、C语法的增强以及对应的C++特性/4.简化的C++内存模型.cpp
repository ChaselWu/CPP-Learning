//Simplified Memory Model
/*
    1.Stack栈
        编译器自动分配释放

    2.Heap堆
        一般由程序员主动分配释放，若程序员不释放，程序结束时可能有OS回收

    3.Global/Static 全局区/静态区
        全局变量与静态变量存储是在一处的
        可以简单认为：
            程序启动全局/静态变量就在此处
            程序结束释放

    4.Constant常量区
        可以简单理解为所有常量都放在一起
        该区域内容不可修改
*/

/*图示：
                            堆向高地址生长 栈向低地址生长
    常量区     全局/静态区      堆->       <-栈

*/

