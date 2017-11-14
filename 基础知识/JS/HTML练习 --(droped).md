#HTML练习
<a href="http://www.w3school.com.cn/html/html_basic.asp"> W3C</a>

###标签说明
1. 单标签
>例如：</br>
>\</br></br>
>\<img>

2. 双标签不带属性
>```
><h1>标题</h1>
><p>段落</p>
>
>```

3. 双标签带属性
>```
><a href="http://www.w3school.com.cn/html/html_basic.asp"> W3C</a>
><img src="w3school.jpg" width="104" height="142" />
>
>```
4. HTML标签、属性和属性值对大小写不敏感,推荐使用小写，新版本的 (X)HTML 要求使用小写属性。
5. 属性值应该使用双引号标示，不过使用单引号也没有问题；当属性值本身就含有双引号，那么需要使用单引号
6. <a href="http://www.w3school.com.cn/html/html_attributes.asp">HTML 属性参考手册</a>
7. <a href="http://www.w3school.com.cn/tags/html_ref_standardattributes.asp">HTML 标准属性参考手册</a>

###属性说明

1. <h1>标题</h1>
<h2>标题</h2>
<h3>标题</h3>
<h4>标题</h4>
<h5>标题</h5>
<h6>标题</h6>
共6级，浏览器会自动地在标题的前后添加空行，默认情况下，HTML 会自动地在块级元素前后添加一个额外的空行，比如段落、标题元素前后。<br />
确保将 HTML heading 标签只用于标题。不要仅仅是为了产生粗体或大号的文本而使用标题。
搜索引擎使用标题为您的网页的结构和内容编制索引。
因为用户可以通过标题来快速浏览您的网页，所以用标题来呈现文档结构是很重要的。
应该将 h1 用作主标题（最重要的），其后是 h2（次重要的），再其次是 h3，以此类推。
2. 水平分割线:<hr />
3. <body>文档主体</body>
4. <p>段落</p>
5. 当显示页面时，浏览器会移除源代码中多余的空格和空行。所有连续的空格或空行都会被算作一个空格。需要注意的是，HTML 代码中的所有连续的空行（换行）也被显示为一个空格。
6. 应该避免使用下面这些标签和属性,使用样式代替（style标签(颜色故意写错的，为了不显示效果））：</br>
*<center>*定义居中的内容<br />
*<font>*和 *<basefont>*	定义 HTML 字体<br />
*<s></s>* 和*<strike></strike>*	定义删除线文本<br />
*<u></u>	*定义下划线文本
<br />
*align*	定义文本的对齐方式<br />
*bgcolor*	定义背景颜色<br />
*color*定义文本颜色
<body style="background-color:yeellow"></body>
<h1 style="font-family:verdana">A heading</h1>
<p style="font-family:arial;color:red;font-size:20px;">A paragraph.</p>
<h1 style="text-align:center">This is a heading</h1>
<p>The heading above is aligned to the center of this page.</p>


7. 段落标记 <p>WWF 的目标是：<q>构建人与自然和谐共存的世界。</q></p>
8. 请始终向 HTML 文档添加 <!DOCTYPE> 声明，这样浏览器才能获知文档类型。<!DOCTYPE>始终声明在文档第一行
9. 在 HTML 4.01 中有三种 <!DOCTYPE> 声明。在 HTML5 中只有一种：
<!DOCTYPE html>
10. <a href="http://www.w3school.com.cn/tags/html_ref_dtd.asp">HTML 元素和有效的 DTD</a><br />虽然我也记不住这些标签，但是肯定有用
11. <a href="http://www.w3school.com.cn/tags/html_ref_colornames.asp">名称色值对照表</a>
12. <a href="http://www.w3school.com.cn/tags/html_ref_charactersets.asp">字符集说明</a><br />现代浏览器的默认字符集是 ISO-8859-1
13. <a href="http://www.w3school.com.cn/tags/index.asp">标签列表</a>
14. JS最常用标签意思<br />
<img  src="https://thumbnail0.baidupcs.com/thumbnail/60d75ebb6ce71f592dd7b9283afda762?fid=187043171-250528-682751807396828&time=1508400000&rt=sh&sign=FDTAER-DCb740ccc5511e5e8fedcff06b081203-BUjjMiMAYCsKqJ%2BP7xR94ku%2Fbd0%3D&expires=8h&chkv=0&chkbd=0&chkpc=&dp-logid=6764941251284428561&dp-callid=0&size=c710_u400&quality=100&vuk=-&ft=video"></img>

	<img></img>引入图片，具体使用方法见本条

15. 我们通过使用"<a>"标签在 HTML 中创建链接</br> 
有两种使用 <a> 标签的方式：</br> 
通过使用 href 属性 - 创建指向另一个文档的链接</br> 
通过使用 name 属性 - 创建文档内的书签</a>
16. 超链接命名锚</br>
	<img src="https://thumbnail0.baidupcs.com/thumbnail/82bd693d4045357297667630204f4818?fid=187043171-250528-620638959055765&time=1508400000&rt=sh&sign=FDTAER-DCb740ccc5511e5e8fedcff06b081203-q2j%2Bc%2BDuxAOLHwfKn8sTzRf%2BUZo%3D&expires=8h&chkv=0&chkbd=0&chkpc=&dp-logid=6765500808304078410&dp-callid=0&size=c710_u400&quality=100&vuk=-&ft=video"></img>
	
	><a href="http://www.w3school.com.cn/tiy/t.asp?f=html_link_target">在新的浏览器窗口打开链接
</a>

	><a href="http://www.w3school.com.cn/tiy/t.asp?f=html_link_locations">链接到同一个页面的不同位置</a>

	><a href="http://www.w3school.com.cn/tiy/t.asp?f=html_frame_getfree">跳出框架</a>

	><a href="http://www.w3school.com.cn/tiy/t.asp?f=html_mailto">创建电子邮件链接</a>

	><a href="http://www.w3school.com.cn/tiy/t.asp?f=html_mailto2">创建电子邮件链接 2</a>

	
17. 图片相关
	>背景图片： background="";<br />
	>图片尺寸：width="",height=""<br />
	>为图片显示替换文本：alt=""<br />
	><a href="http://www.w3school.com.cn/tiy/t.asp?f=html_image_link">制作图片链接（在A标签体中加入img标签）</a>
	<p>
	<a href="http://www.w3school.com.cn/tiy/t.asp?f=html_image_align">排列图片</a><br />
	<a href="http://www.w3school.com.cn/tiy/t.asp?f=html_image_float">浮动图片</a>
	</p>
	><a href="http://www.w3school.com.cn/tiy/t.asp?f=html_areamap">创建图像映射(创建图片内可点击区域)(**使用map和area属性**)</a><br />
	><a href="http://www.w3school.com.cn/tiy/t.asp?f=html_ismap">把图像转换为图像映射（没看懂什么意思)</a>
	
18. 表格相关：<br />
	表格<table>;行<tr>;行中的列<td>;表头(表头有几列，就写几个)<th>边框：属性border=""；空单元格使用<td>&nbsp;</td>占位（使用空格占位），为了显示出边框，好看。</table><br />
	<img src="https://thumbnail0.baidupcs.com/thumbnail/8c439f3d3dd05c3c0d864da432e145fc?fid=187043171-250528-758379199017401&time=1508464800&rt=sh&sign=FDTAER-DCb740ccc5511e5e8fedcff06b081203-K6PAWvNe8bBMzmLC92LCj5Kx690%3D&expires=8h&chkv=0&chkbd=0&chkpc=&dp-logid=6782817390875114248&dp-callid=0&size=c710_u400&quality=100&vuk=-&ft=video" alt="表格标签"></img><br />
	<img src="https://thumbnail0.baidupcs.com/thumbnail/9e4814d44d5049d1dfc45c8a9b1e7d21?fid=187043171-250528-187684545475152&time=1508464800&rt=sh&sign=FDTAER-DCb740ccc5511e5e8fedcff06b081203-ax8BPgXIZ92GJ4qdgA7yGn6zJeA%3D&expires=8h&chkv=0&chkbd=0&chkpc=&dp-logid=6782933408860961191&dp-callid=0&size=c710_u400&quality=100&vuk=-&ft=video" alt="更多表格样式"></a>

19. 使用 iframe 作为链接的目标<br />
iframe 可用作链接的目标（target）(链接会在iframe中打开)。<br />
链接的 target 属性必须引用 iframe 的 name 属性

20. body设置背景的属性：bgcolor，background在最新的W3C推荐标准中已经被废弃，应该使用层叠样式表（CSS）来定义 HTML 元素的布局和显示属性

21. head<br />
<head> 元素是所有头部元素的容器。<head> 内的元素可包含脚本，指示浏览器在何处可以找到样式表，提供元信息，等等。
以下标签都可以添加到 head 部分：title、base、link、meta、script 以及 style。

22. title <br />
title标签定义文档的标题。
title 元素在所有 HTML/XHTML 文档中都是必需的。
title 元素能够：<br />
定义浏览器工具栏中的标题<br />
提供页面被添加到收藏夹时显示的标题<br />
显示在搜索引擎结果中的页面标题<br />

23. <a href="http://www.w3school.com.cn/html/html_head.asp">其他头标签说明</a>
24. <a href="http://www.w3school.com.cn/tags/html_ref_entities.html">实体字符集表（多种编码都有）</a>
25. <a href="http://www.w3school.com.cn/html/html_colors.asp">另一块色板</a>
26. <a href="http://www.w3school.com.cn/html/html_quick.asp">各种格式集锦</a>

27. autocomplete（自动提示）<br />

	<form action="action_page.php" autocomplete="on">
   	First name:<input type="text" name="fname"><br>
   Last name: <input type="text" name="lname"><br>
   E-mail: <input type="email" name="email" autocomplete="off"><br>
   <input type="submit">
	</form>

28. novalidate 属性属于form属性<br />
在提交表单时不对表单数据进行验证<br />
用法：
```
<form action="action_page.php" novalidate>
   E-mail: <input type="email" name="user_email">
   <input type="submit">
</form> 
```

29. <a href="http://www.w3school.com.cn/html/html_form_attributes.asp" name="form属性">表单的引用</a>
30. **formaction**:当提交表单时处理该输入控件的文件的 URL,覆盖form元素的 action 属性<br />
**formenctype**:当把表单数据（form-data）提交至服务器时如何对其进行编码（仅针对 method="post" 的表单),覆盖 form 元素的 enctype 属性<br />
**formmethod**:定义用以向 action URL 发送表单数据（form-data）的 HTTP 方法,覆盖 form 元素的 method 属性<br />
**formtarget**:指示提交表单后在何处显示接收到的响应,覆盖 form 元素的 target 属性<br />
**以上属性均适用于type="submit" 以及 type="image"**
**formnovalidate**:如果设置，则规定在提交表单时不对 input 元素进行验证，覆盖 form 元素的 novalidate 属性，可用于 type="submit"<br />

33. height 和 width 属性<br />
请始终规定图像的尺寸。如果浏览器不清楚图像尺寸，则页面会在图像加载时闪烁。

32. list<br />

	```
	<input list="browsers">
	<datalist id="browsers"><--!option选项是预定义可选项-->
   <option value="Internet Explorer">
   <option value="Firefox">
   <option value="Chrome">
   <option value="Opera">
   <option value="Safari">
</datalist> 
	```

33. multiple<br />
布尔属性,如果设置，则规定允许用户在 input 元素中输入一个以上的值,适用于以下输入类型：email 和 file.
```
Select images: <input type="file" name="img" multiple>
```

34. pattern<br />
	用于检查 input 元素值的正则表达式
	
35. <a href="http://www.w3school.com.cn/html/html_form_attributes.asp">更多属性及特性参见</a>
<br />

36. 条件注释：只有特定浏览器才会识别的代码（为了兼容），IE10+已经不支持条件注释
```
<!--[if IE 8]>
    .... some HTML here ....
<![endif]-->
```
<br /><br /><br />

###JS 部分
 
36. HTML 中的脚本必须位于 <script> 与 </script> 标签之间。
脚本可被放置在 HTML 页面的 <body> 和 <head> 部分中。

37. 将JS代码前后加注释符号，可以兼容不支持JS的浏览器 ，在"<!--" 这一行和 "-->" 这一行上的 才会被注释，其他的 就是只是隐藏了，而且，JavaScript解释器会忽略HTML注释的结束字符（-->），注释结束行前面的双斜线 (//) 是JavaScript 的注释符。这样写可以防止JavaScript 编译器把这一行当作JS脚本进行编译。
那些不支持 JavaScript 的浏览器会把脚本作为页面的内容来显示。为了防止这种情况发生才加了这些注释，现在已经不怎么用个。
特别是XHTML中，被注释起来的JS代码会全部失效。

38. 只能在 HTML 输出流中使用 document.write。 如果您在文档已加载后使用它（比如在函数中），会覆盖整个文档。
39.  可以在 HTML 文档中放入不限数量的脚本。可位于 HTML 的 body 或 head 部分中，或者同时存在于两个部分中。通常的做法是把函数放入 head 部分中，或者放在页面底部。这样就可以把它们安置到同一处位置，不会干扰页面的内容。把 JavaScript 放到页面代码的底部，这样就可以确保在 \<p> 元素创建之后再执行脚本。
40. 外部的 JavaScript
也可以把脚本保存到外部文件中。外部文件通常包含被多个网页使用的代码。
外部 JavaScript 文件的文件扩展名是 .js。
如需使用外部文件，请在 script 标签的 "src" 属性中设置该 .js 文件,外部脚本不能包含 \<script> 标签。

	```
	<!DOCTYPE html>
<html>
<body>
<script src="myScript.js"></script>
</body>
</html>
```

41. JavaScript 对大小写敏感

42. JavaScript 会忽略多余的空格。可以向脚本添加空格，来提高其可读性
43. 对代码行进行折行<br />
您可以在文本字符串中使用反斜杠对代码行进行换行:<br />document.write("Hello \
World!");
不过，您不能像这样折行：
document.write \
("Hello World!");

44. JavaScript 是脚本语言。浏览器会在读取代码时，逐行地执行脚本代码。而对于传统编程来说，会在执行前对所有代码进行编译。
45. 数据类型：<br />
	 + **String，char**都被当做文本类型<br />
	 
	+ **数字类型**仍为数字类型，且只有一种数字类型，支持科学计数法<br /> 
	
	+ **如果把数字与字符串相加，结果将成为字符串**
	
	+ **布尔**： var x =true;var y=false;
	+ **数组**： var cars= new Array(); cars[0]="a";<br />
	var cars=new Array("a");<br />
	var cars=["a"];
	+ **对象**：var person={firstname:"Bill", lastname:"Gates", id:5566};空格和折行无关紧要
	+ **对象寻址（查找）**：name=person.lastname;
	name=person["lastname"];
	+ **未赋初值的变量，其值为undefined**
	+ **赋值后的变量，重新声明，其之前被赋的值不会丢失**
	+ **Undefined和Null**:Undefined 这个值表示变量不含有值。
可以通过将变量的值设置为 null 来清空变量。
   + **声明变量类型**:
```
var carname=new String;
var x=      new Number;
var y=      new Boolean;
var cars=   new Array;
var person= new Object;
```
	+ **JavaScript 变量均为对象。当声明一个变量时，就创建了一个新的对象。**
	+ **把值赋给尚未声明的变量，该变量将被自动作为全局变量声明,即使它在函数内执行**
	+ **通过标签名查找 HTML 元素**<br />
实例
本例查找 id="main" 的元素，然后查找 "main"中的所有 `<p>`元素：
<h5>
var x=document.getElementById("main");<br />
var y=x.getElementsByTagName("p");</h5>

	+ <a href="http://www.w3school.com.cn/jsref/prop_style_display.asp">标签元素级别<a/>
	+ <a href="http://www.w3school.com.cn/jsref/prop_style_liststyletype.asp">列表标记修改</a>
	+ <a href="http://www.w3school.com.cn/jsref/dom_obj_style.asp#background">HTML DOM Style 对象(ToRead)</a>
11. onload 和 onunload 事件<br />
会在用户进入或离开页面时被触发。
onload 事件可用于检测访问者的浏览器类型和浏览器版本，并基于这些信息来加载网页的正确版本。<br />
onload 和 onunload 事件可用于处理 cookie。
12. onmouseover 和 onmouseout 事件<br />
鼠标移至 HTML 元素上方或移出元素时触发函数。

13. onmousedown 和 onmouseup<br />
--按下状态和抬起状态

14. <a href="http://www.w3school.com.cn/jsref/dom_obj_event.asp">DOM Event事件对照表(ToRead)</a>
15. <a href="http://www.w3school.com.cn/jsref/jsref_events.asp">JavaScript 事件参考手册</a>
15. <a href="http://www.w3school.com.cn/jsref/index.asp">JavaScript 参考手册(ToRead)</a>
16. <a href="http://www.w3school.com.cn/jsref/jsref_obj_number.asp">数字常量及方法说明</a>
17. <a href="http://www.w3school.com.cn/jsref/jsref_obj_string.asp">String方法说明</a>
18. <a href="http://www.w3school.com.cn/jsref/dom_obj_anchor.aspc">HTML其他标签（ToRead）</a>

##### JS Window

1. Window Location<br />
window.location 在编写时可不使用 window 这个前缀。<br />
一些例子：<br />
location.hostname 返回 web 主机的域名<br />
location.pathname 返回当前页面的路径和文件名<br />
location.port 返回 web 主机的端口 （80 或 443）<br />
location.protocol 返回所使用的 web 协议（http:// 或 https://）<br />
location.pathname 属性返回 URL 的路径名(相对路径)。<br />
location.assign() 方法加载新的文档。<br />

2. window.history <br />
对象在编写时可不使用 window 这个前缀。<br />
为了保护用户隐私，对 JavaScript 访问该对象的方法做出了限制。
一些方法：<br />
history.back() - 与在浏览器点击后退按钮相同<br />
history.forward() - 与在浏览器中点击按钮向前相同<br />

3. <a href="http://www.w3school.com.cn/js/js_window_navigator.asp"> Window Navigator(嗅探器)</a>
4. <a href="http://www.w3school.com.cn/js/js_popup.asp">消息框</a>
 + 警告框(确保用户可以得到某些信息,需要点击确定按钮才能继续)<br />
 `alert("文本")`
 + 确认框(需要点击确定或者取消按钮才能继续,返回true，或false)<br />
  `confirm("文本")`
  + 提示框(需要输入某个值，然后点击确认或取消按钮才能继续,返回值为输入的值,或null（用户点击取消））)
  `prompt("文本","默认值")`
  
5. <a href="http://www.w3school.com.cn/js/js_timing.asp">JS 计时器</a>
6. <a href="http://www.w3school.com.cn/js/js_cookies.asp">JS Cookies</a>
7. 引用 jQuery<br />
`<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.8.3/jquery.min.js">
</script>`

8. <a href="http://www.w3school.com.cn/cssref/css_selectors.asp">CSS选择器参考手册(JQ元素选择器 使用 css 元素选择器)</a>
9. <a href="http://www.w3school.com.cn/cssref/index.asp">CSS参考手册</a>
10. 在 CSS 定义中，这四种属性必须按照这样的排列顺序生效
`<style type="text/css">
a:link {color: #FF0000}
a:visited {color: #00FF00}
a:hover {color: #FF00FF}
a:active {color: #0000FF}
</style>`

####JS视频<http://www.imooc.com/video/5674>
1. 原始类型：
 + number
 + string
 + boolean
 + null
 + undefined
2. Object (对象)
 + Function
 + Array
 + Date
 + ...
3. instance of 在跨ifream的对象间的判断不能使用


###CSS
1.  <a href="http://www.w3school.com.cn/css/css_pseudo_classes.asp">CSS 中的伪类(看文档最后的伪类列表)</a>
1. p:first-child i{background:yellow;}<br />
	意义：**P标签的父元素下的第一个P标签的所有i标签设置背景色黄色。**
1. <a href="http://www.cnblogs.com/polk6/archive/2013/05/28/3101571.html">id,name,class 的区别</a>

3. first-line只能用于块元素
4. <a href="http://www.w3school.com.cn/css/css_pseudo_elements.asp">其他伪元素（ToRead）</a>
5. <a href="http://www.w3school.com.cn/css/css_dimension.asp">CSS尺寸（ToRead）</a>
6. <a href="http://www.w3school.com.cn/css/css_classification.asp">布局属性（CSS分类）</a>
7. <a href="http://www.w3school.com.cn/css/css_navbar.asp">创建导航栏</a>
8. <a href="http://www.w3school.com.cn/css/css_image_gallery.asp">gridlayout布局</a>
9. <a href="http://www.w3school.com.cn/cssref/index.asp">CSS 参考手册</a>
10. <a href="http://www.w3school.com.cn/cssref/css_selectors.asp"></a>
11. <a href="http://www.w3school.com.cn/cssref/css_units.asp">单位</a>
12. "#" id 选择器 
`#red {color:red;} <p id="red">这个段落是红色。</p>`
13. <a href="http://www.w3school.com.cn/css/css_syntax_descendant_selector.asp">派生选择器</a>
14. <a href="http://www.w3school.com.cn/css/css_syntax_class_selector.asp">类选择器</a>
`<h1 class="center">
This heading will be center-aligned
</h1> h1.center {text-align: center}`

16. <a href="http://www.w3school.com.cn/css/css_syntax_attribute_selector.asp">属性选择器</a>
17.  id class 标记的都可用于派生选择器



###AngularJS
1. ng-model 相当于声明输入对象（将输入保存到哪个对象中）
2. ng-bind 将输出（显示）绑定数据源（类似{{}}？）
3. ng-init 初始化




###块元素与行元素列表

```<address>	定义地址
<caption>	定义表格标题
<dd>	定义列表中定义条目
<div>	定义文档中的分区或节
<dl>	定义列表
<dt>	定义列表中的项目
<fieldset>	定义一个框架集
<form>	创建 HTML 表单
<h1>	定义最大的标题
<h2>	定义副标题
<h3>	定义标题
<h4>	定义标题
<h5>	定义标题
<h6>	定义最小的标题
<hr>	创建一条水平线
<legend>	元素为 fieldset 元素定义标题
<li>	标签定义列表项目
<noframes>	为那些不支持框架的浏览器显示文本，于 frameset 元素内部
<noscript>	定义在脚本未被执行时的替代内容
<ol>	定义有序列表
<ul>	定义无序列表
<p>	标签定义段落
<pre>	定义预格式化的文本
<table>	标签定义 HTML 表格
<tbody>	标签表格主体（正文）
<td>	表格中的标准单元格
<tfoot>	定义表格的页脚（脚注或表注）
<th>	定义表头单元格
<thead>	标签定义表格的表头
<tr>	定义表格中的行

行内元素列表
<a>	标签可定义锚
<abbr>	表示一个缩写形式
<acronym>	定义只取首字母缩写
<b>	字体加粗
<bdo>	可覆盖默认的文本方向
<big>	大号字体加粗
<br>	换行
<cite>	引用进行定义
<code>	定义计算机代码文本
<dfn>	定义一个定义项目
<em>	定义为强调的内容
<i>	斜体文本效果
<img>	向网页中嵌入一幅图像
<input>	输入框
<kbd>	定义键盘文本
<label>	标签为 input 元素定义标注（标记）
<q>	定义短的引用
<samp>	定义样本文本
<select>	创建单选或多选菜单
<small>	呈现小号字体效果
<span>	组合文档中的行内元素
<strong>	语气更强的强调的内容
<sub>	定义下标文本
<sup>	定义上标文本
<textarea>	多行的文本输入控件
<tt>	打字机或者等宽的文本效果
<var>	定义变量
```


####表达式类型
 + 接 boolean :
	 + 	ng-show="" 可以直接写表达式
	 + ng-

	 
	 
####依赖注入

+ 可被依赖注入对象:
	+ value
	+ factory
	+ service
<li>provider</li>
<li>constant </li>
</ul>
+ <a href="http://www.cnblogs.com/lyy-2016/p/5841246.html">依赖注入方式</a>
+ <a href="http://www.jb51.net/article/92624.htm">依赖注入</a>


###JS 中数字边界值
1. 上溢(overflow)(超过最大值,或超过最小值):infinity,-Infinity

3. 基于正负 infinity 的运算结果为本身
4.  下溢(underflow):结果无限接近零而无法表示时,直接返回0;当负数发生下溢时,返回负零,这个值几乎和正常零一致,程序员很少使用到
5. 被零除并不报错,返回 无穷大 或 负无穷大.
6. 零除以零无意义,无穷大除以无穷大,给任意负数做开方运算,算数运算符与不是数字或无法转换为数字的操作数一起使用,结果为非数字值,均用 NaN表示.
7. NaN 的特殊性:与任何值(包括自身)都不相等,应使用 x!=x 来判断,当且仅当 x=NaN 时,参数才为 true;isNaN(),当参数是 NaN 或非数字值(比如字符串和对象)时返回 true;JS 中的 isFinite() 在参数不是 NaN,Infinity 或-Infinity 的时候返回 true;
8. 负零:
	+ 和正零相等
	+ 只在作为除数时有区别:
	```
	var zero=0;
	var negz=-0;
	zero===negz   (true)
	1/zero===1/negz  (false)(正无穷和负无穷不相等)
	```
9. js中任意值转换成 bool
   + underfined,null,0,-0,NaN,""会被转换成 false
   + 其他所有值,包括对象和数组都被转换成 true
10. null 和 undefined 都表示值的空缺
	+ 往往可以互换
	+ 使用==判断为真值,需要使用===区分
	+ 都不包含任何属性或方法
	+ 对变量或属性赋值,或作为参数传入函数,应使用 null
11. 两个对象的比较与 java 的规则一致
12. 基础类型中,数字更偏基础类型,不同类型之间运算会偏向转换成数字
13. 一元'+'运算符,只有一个操作数时,会将数字转换成字符串
14. 使用 Number()方法需要严格数字字符串,只能基于十进制进行转换,不能出现非法尾随字符;parseInt()和 parseFloat()是全局函数,可忽略前面的空格前导,和后面的非法字符,若第一个非空格字符是非法数字直接量,则返回 NaN,当字符串以'0X'或'0x'开头时,自动解释成十六进制数,
15. 所有对象均转换为 true,**new Boolean(false) 是对象,而不是原始值,所以将转换为 true**
16. 对象到原始值的转换,通过调用待转换对象的方法完成的,且此规则只适用于本地对象,宿主对象(例如由 Web浏览器定义的对象)根据各自的算法可以转换成字符串和数字
17. toString()方法
	+ 数组类<br/>将每个数组元素转换为一个字符串,并使用逗号拼接后返回此字符串.
	+ 函数<br />方法返回这个函数的实现定义的表示方式(几乎就是返回函数体的实现)(实际上,这里的实现方式是将用户定义的还书转换为JS 源代码字符串)
	+ Date<br />返回一个可读的(可被 JS 解析的 )日期和时间字符串
	+ RegExp<br />将 RegExp对象转换为表示正则表达式直接量的字符串
17. valueOf() 这个方法未详细定义.默认只返回这个对象本身,(数组,函数,正则表达式,简单地继承了这个默认方法)
	+ Date 类会返回1970年一类的毫秒数
	
18. 对象到字符串的转换步骤:
	1. 当 toString() 方法能返回一个原始值,则,JS 将这个值(若不是字符串)转换为字符串,并返回这个字符串.
	2. 否则,当 valueOf()方法能返回一个原始值,则,JS 将这个值转换为字符串并返回.
	3. 否则,JS 无法从 toString()或 valueOf() 方法中获得一个原始值,则抛出类型错误异常
19. 对象到数字的转换:
	1. 先尝试 valueOf()
	2. 再尝试toString()方法
	3. 否则抛出类型错误异常




	








