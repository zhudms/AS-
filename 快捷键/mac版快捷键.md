#Mac下快捷键的符号所对应的按键
特殊符号 :

1. Command () : ⌘ ; 
2. Control : ⌃ ; 
3. Option (alt) : ⌥ ; 
4. Shift : ⇧ ; 
5.  Caps Lock : ⇪ ;
6. ⌥—> option|alt
+ ⇧—>shift
+ ⌃—>control
+ ⌘—>command
+ ⎋—>esc

+ 注: 与F6/F7/F12等F功能键开头的组合的快捷键需要按住fn开启功能键
如：快捷键⌘F12的按键组合为：fn + command + F12
+ 注：MAC 中的AS快捷键（alt 多半是option键）

##私货

格式化代码 ：option+command+L
control+option+i

Shift+⌘+”+” 展开全部 
Shift+⌘+”-“ 折叠全部 
cmd+”+” 展开当前 
cmd+”-“ 折叠当前

shift+⌘+L 展开文档注释 
ctrl+shift+⌘+L 收起文档注释

⌘+/ 当行注释 
⌘+alt+/ 多行注释

alt+F7 查找使用的位置 
Ctrl+Shift+F FindInPath

shift+f6 重命名

Ctrl+Enter 生成set/get（或者Ctrl+N） 
Ctrl+J 查看文档说明（同windows中的ctrl+Q） 
Ctrl+O/⌘+O 重写父类方法 
Ctrl+i 实现方法

Ctrl+shift+Q 查看当前光标所在的类 
alt+回车 查看当前元素可以做的操作

+ 自动导包 <br />
 + win Ctrl+Alt+O 
 + mac control+option+o

Ctrl+Alt+I 自动缩进行

⌘+Alt+M 抽取方法 
⌘+Alt+V 提取变量（还没尝试） 
⌘+Alt+F 提取成员变量 
⌘+Alt+C 提取为常量 
⌘+Alt+P 提取参数

⌘+E 最近操作的文件

⌘+F12 查看当前类的结构 
⌘+B / ⌘+左键单击 查看元素的源码（或者自定义元素的初始化） 
Shift+left/right 从光标位置开始，向左/右逐个选中字母
option+删除 删除整个单词
Ctrl+cmd+”+” 窗口最大化（或者恢复窗口模式） 
Ctrl+shift+向上箭头 类似win中的win+P(切换窗口)

##Android Studio 常用快捷键 for mac
###查找／查看相关

⌘O: 全局查找class类名<使用率非常高>

⌘F: 在当前编辑文件中查找<使用率非常高> ｜ 对应window中的Ctrl + F

⌘F12：当前编辑的文件中结构快速导航 | 对应window中的 Ctrl + F12

⌘E: 打开最近访问的文件列表 | 对应window中的Ctrl + E

⌥⌘O: 输入类名／方法名／字段名来查找任何匹配的类／方法／字段<使用率非常高>

⇧⌘O: 全局项目查找文件（类／资源文件／布局文件都通过该快捷键查找）<使用率非常高>

⌃H: 查看当前编辑class类的hierarchy结构 | 对应window中的Ctrl + H

⌥F7: 列出全局项目中该类／方法 被引用／调用的情况<使用率非常高>[比⌥⌘F7显示效果好] | 对应window中的Alt + F7

⌥⌘F7: 列出全局项目中该类／方法 被引用／调用的情况 | 对应window中的Ctrl + Alt + F7

⌃⌥H: 方法被调用结构［method’s Call Hierarchy］| 对应window中的ctrl + alt + h

⌘P: 列出函数方法一系列的有效参数，如果光标是一个方法调用的括号之间 | 对应window中的Ctrl + P

⇧⌘F7: 快速，高亮显示变量在当前文件中的引用情况,使用⌘G和⇧⌘G快捷键 可以前往跳到下一个/上一个高亮的变量，按⎋移除高亮显示 | 对应window中的Ctrl + Shift + F7

F1: 查看类／方法的注释文档

 

###控制操作相关

⌘/: 注释与取消注释，注释效果 //... | 对应window中的Ctrl + /

⌥⌘/: 注释与取消注释，注释效果 /*...*/ | 对应window中的Ctrl+Shift+/

⇧⌥up/down: 移动行上下移动 | 对应window中的alt + shift + up/down

⌘delete: 删除行 ｜ 对应window中的ctrl + y

⌘d: 复制行 ｜ 对应window中的 ctrl + d

⌘J: 快速生成模版代码块，如if,while,return等<使用频率非常高，高效率编写代码> | 对应window中的Ctrl + J

+ ⌘N: 快速生成getter／setter方法，构造方法，toString()方法等 <使用率非常高> | 对应window中的Alt + Insert

+ ⌥⌘T: Surround with快速调出if,for,try...catch,while等环绕代码 ｜ 对应window中的ctrl + alt + t

+ ⌃O: 引入重写父类的方法［Override Methods］<使用率非常高>

+ ⌃I: 引入实现接口或抽象类方法［Implement Methods］<使用率非常高>

+ ⌃Space: 当申明一个变量时，根据变量类型提示给出建议的变量名称，等还有其他很多智能提示作用<使用率非常高>

+  代码格式化 <使用率非常高> 
 + mac (option+ command+L) ⌥⌘L
 + win Ctrl+Alt+L

 

代码重构相关

⇧F6:代码重构时，类名／方法名／变量名 重命名操作 | 对应window中的Shift + F6

⌘R: 代码重构时，可以用来批量重命名变量

⌥⌘M: 方法重构，方法抽离 ｜对应window中的Ctrl+Alt+M

⌥⌘P: 参数重构，将方法内变量抽离成方法参数 ｜对应window中的Ctrl+Alt+P

⌥⌘V: 变量抽离，<使用率非常高> | 对应window中的Ctrl+Alt+V

new StringBuffer()
1
使用快捷键后效果如下：

StringBuffer stringBuffer = new StringBuffer();
1
⌥⌘F: 字段抽离，将方法内的变量抽离成类字段申明,简单说就是把变量的申明从方法内重构抽离到方法外 ｜ 对应window中的Ctrl+Alt+F

 

###其他

⇧⌘A: 你可以调用任何菜单或动作的名称在Android studio中 ｜ 对应window中的ctrl + shift + a

 

####下面我就是个人觉得有用的快捷(虽然有些可能也没用到过)：

 

+ CTRL + R Build and run
+ OPTION + CMD + O	
+ 查找工程内的文件或方法或字段 CMD+0
+ 查找工程内的类文件 CMD + P	Show parameters for selected method
OPTION + CMD + L	Reformat code
CMD + N	Generate method
CMD + R	相当于搜索替换
CMD + ,	打开Preferences
CMD + ;	打开Project Structure
CMD + X	删除行
CMD + D	复制行
CTRL + J	显示该方法或类的api
CMD + [ 返回上一次编辑位置
CMD + ]	前进到上一次编辑位置
CTRL + P	鼠标移动到上一行
CTRL + N	鼠标移动到下一行
ALT + ENTER	导入包，自动修正（未验证）
SHIFT + CMD + [	previous tab
SHIFT + CMD + ]	next tab 
ALT + 向上键	选择当前光标处所在单词或行
CTRL + ALT + H	查找调用的位置
ALT + SHIFT + UP/DOWN	上下移动代码
CTRL + O	快捷覆写方法
ALT + CTRL + O	清除无效引用
ALT + ENTER	提示错误解决方案(在抽取局部变量时，调出对话框后选第二个)
CMD + SHIFT + F	相当于 Eclipse 的 Ctrl + h
CTRL + T	调出Refactor选项框，可以抽取方法、成员变量等
CMD + ALT + V	相当于Eclipse的Ctrl + 2 ,L  自动生成变量
CMD + ALT + F	抽取成成员变量

CMD + SPACE 相当于 Eclipse 的ALT + /，不过与系统的切换输入法冲突，修改快捷键搜索 Basic
ALT + /	自动补全最后一个方法名(原)

keymap —>Reformat Code 添加ALT + F


Editor —>Code Completion —>Case sensitive completion 调成 none ，使大小写不敏感
Editor —>Show quick doc on mouse move 打勾，鼠标移动到方法上显示api
Editor —>Auto Import —>Optimize imports on fly 打勾，把不用的声明移除掉，相当于Ctrl + Alt + O


Android_Studio 导入项目
1、修改buid.gradle文件的classpath 为自带最新：eg.
	dependencies { 
		 classpath 'com.android.tools.build:gradle:1.0.0-rc1’ 
	 }
2、修改gradle/wrapper/gradle-wrapper.properties文件的distributionUrl(看需要)：eg.
	distributionUrl=https\://services.gradle.org/distributions/gradle-2.2.1-all.zip

CTRL + CMD + F	全屏切换，期间导致过一次工具栏消失#


1. 上下行移动： alt＋shift ＋up／down
2. 上下移动整个方法： cmd＋shift + up/down
3. 删除行：cmd＋delete
+ 向下复制行：cmd+d
3. 扩大缩小选中范围：option＋up/down
6. 生成结构体：cmd＋option＋t（比如生成if，try...catch，synchronized等）
6. 快捷覆写方法：ctrl+o
6. 快捷生成setget等：cmd＋n
6. 快捷定位到行首／尾：cmd＋left/right
6. 注释代码：cmd＋／（／／）cmd＋option＋／（／＊＊／）
6. 快捷最近打开：cmd+e
6. 查找＋替换：cmd＋r
6. 查找：cmd＋f
6. 来回你刚刚看的地方：cmd+option+left/right
6. 点进去看的：cmd+down
6. 查找调用的位置：ctrl+option+h
6. 全局查找：cmd+shift+f
6. 提示错误解决方案：option+enter
6. 智能补全代码：ctrl+shift+space
6. 补全代码（basic）：option＋space（原始为ctrl＋space 与系统快速搜索快捷键冲突，然后就自己改了键，我是仔setting里搜到basic然后remove掉再加上）。

6. 快速出现简写提示:command+j  (快速出现 logd psdf 等)
7. 生成 doc 注释:control+command+j(自己设置的)