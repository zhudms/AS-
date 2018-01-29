#AndroidStudio 插件集锦

1. **Json->javaBean**
	+ 名称:GsonFormat
	+ 安装:Android studio File->Settings..->Plugins–>Browse repositores..搜索GsonFormat 
	+ 使用:command+N ->GsonFormat
	+ <a href="http://blog.csdn.net/garfielder007/article/details/53617360">参考</a>
2. **代码->UML**
	1. SimpleUML
		+ 安装:(本地安装,需先下载 jar)<br /><a href="https://plugins.jetbrains.com/plugin/4946?pr=">jar</a>
		+ 使用:在需要生成 UML 的包上直接右键,选择 Add to simpleUML Diagram,选择保存位置,生成后各种控件都堆叠在一起,需要自己拖拽,可导出 Image
	2. CodeIris
		+ 安装:在线安装,直接在 plugin中搜索
	3. 区别:  SimpleUML,可以导出图片;CodeIris,可以导入JSON格式，以google map的形式呈现依赖
	4. <a href="http://blog.csdn.net/jiankeufo/article/details/67632692">参考</a>
3. **ScreenMatch**
	+  安装:在线安装方式,直接在 plugin 中搜索
	+  使用:在项目任意文件上右键,选择此插件,选择执行的 module
	+ <a href="http://blog.csdn.net/fesdgasdgasdg/article/details/78108169?utm_source=tuicool&utm_medium=referral">参考</a>
4. **ButterKnife** 自动生成代码工具
	+ 安装:在线安装方式,在 Plugins 中搜索 Android ButterKnife Zelezny,直接安装使用,并重启
	+ 使用:在当前页面布局的 layout id 上右键,选择此插件,可以修改控件名称,但无权限控制,注意,手动初始化 ButterKnife 不能忘
	+ <a href="https://www.cnblogs.com/zhengjunfei/p/5910497.html">参考</a>

