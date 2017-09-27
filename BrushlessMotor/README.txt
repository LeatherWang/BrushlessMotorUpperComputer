日   期：2017-09-26
作   者：LeatherWang
增加功能：1、


日   期：2017-09-26
作   者：LeatherWang
增加功能：1、新建QWizard类，新建项目->Qt->Qt设计师界面类->窗口部件类
        2、捕捉QTreeWidgetItem编辑完成，itemChanged这个信号是可以，但是双击进去编辑的时候，也会产生这个信号。。遂放弃！
           使用connect()与disconnect()解决双击进入编辑的bug，但要求槽函数必须被调用，即必须要重命名，否则bug复现，卒！
        3、加入配置文件，保存

日   期：2017-09-25
作   者：LeatherWang
思   路：1、切换驱动器,显示连接状态
        2、只使用一组闭环按钮,点击每个按钮弹出窗口中的参数根据index及xx.config设置
        3、单击切换，双击修改名称（右击亦可）
        4、新建模型，创建一个初始名字，进入可编辑模式
增加功能：1、QTreeWidget
        2、items前面添加离线在线的显示，第二列考虑加入创建时间等信息？
        3、TreeWidget加入右击显示

修改功能：1、弃用QListWidget,改用QTreeWidget
        2、弃用QstackedWidget堆栈窗体,改用索引号区分


日   期：2017-09-24
作   者：LeatherWang
增加功能：1、主窗口状态栏,底部状态栏
        2、QListWidget实现可视化切换
        3、多语言动静态切换，tr()函数的使用
        4、QListWidget+QstackedWidget堆栈窗体实现切换分页
        5、配置文件.inc
        6、QWizardPage 实现向导程序（上一步下一步）
修改功能：无
问题记录：路径问题 "../BrushlessMotor/BlessM_en_CN.qm"
