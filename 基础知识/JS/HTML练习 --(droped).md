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


###JS 基础
1. 五种基本数据类型:
	+ Undefined
	+ Null
	+ Boolean
	+ Number
	+ String
2. 一种复杂数据类型:
	+ Object
	+ 本质是一组无序键值对
	+ 由于 ECMAScript 数据类型具有动态性,因此没有再定义其他数据类型的必要了

2. 上溢(overflow)(超过最大值,或超过最小值):infinity,-Infinity

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
	1. 先尝试 valueOf(),若能返回原始值,则 JS 将这个原始值转换为数字(若需要)并返回这个数字
	2. 再尝试toString()方法
	3. 否则抛出类型错误异常
	4. 同样能解释空数组转换到数字时为0(javaScript 权威指南(第六版)3.8章 P54页)

20. '+'和'=='
	 1. 当其中一个运算数是对象,JS 使用特殊的方法将对象转换为原始值,而不是使用其他算术运算符的方法执行对象到数字的转换.别问我什么特殊方法,我也不知道什么特殊方法,这书就是个垃圾,以字典书标榜,然而每页都有一两个概念是含混着就过去了.
	 2. 等号与上述相似,遵照对象到原始值的转换方式进行
	 3. 当包含日期时,请看下两条
	 
20. 对于所有非日期对象来说,对象到**原始值**的转换基本上是对象到数字的转换(先调用 valueOf()),日期则使用对象到字符串的转换模式,且,返回的原始值会被直接使用,不会被强制转换成数字或字符串.
21. 日期类是 JS 语言核心中唯一的预先定义类型,定义了有意义的向字符串和数字类型的转换.
22. 声明提前: JS 函数里声明的所有变量( 不包括赋值),都被提前到函数体的顶部;JS 的函数作用域方式,使定义的变量有效区比 java和 C 都大很多(JavaScript 权威指南 P57页)
23. 外部脚本:
24. `<script><script>`标签的6个属性(全部为可选属性,只对外部脚本文件生效)
	+ asnyc:立即下载脚本,当不应妨碍页面的其他操作
	+ charset:通过 src指定代码字符集,大多数浏览器会忽略其值,很少有人用
	+ defer:脚本可以延迟到文档完全被解析和显示后再执行,早期浏览器版本对这个属性也支持(立即下载但延迟执行,遇到`</html>`标签后才执行,当有多个延迟脚本时,虽然 HTML5规范要求,但实际上并不一定严格按照单线程顺序执行,或先于 DOMContentLoaded 事件执行,所以最好只包含 一个延迟脚本)
	+ language:已废弃,表示编写代码使用的脚本语言(如:J avaScript,JavaScript1.2等),会被大多数浏览器忽略
	+ src:包含要执行代码的外部文件,也可以是外域文件
	+ type: 看成 language的替代属性,表示使用的脚本语言的内容类型(MIME类型)(具体说明见<JavaScript 高级程序设计(第三版)>P10),其值仍然是默认值: text/javascript.
25. 在使用`<script>` 标签嵌入 JavaScript时,不能在代码任何地方出现`</script>`字符串,否则会被认为是结束符,可以使用`"<\/script>"`将字符串分割成两部分解决
26. `<script>`标签,应使用`</script>`闭合,自闭合方式不符合 HTML 规范,也得不到某些(尤其是 IE) 的正确解析.只有在 XHTML 文档中,可以使用自闭合标签.
27. 浏览器不检查包含 JS 的文件的扩展名,但服务器需要看扩展名决定响应为哪种MIME,所以当不使用.js 扩展名时,请确保服务器能返回争取的 MIME 类型.
28. `<script>`标签带有 src 属性时,不应在闭合标签之间再包含其他 JS 代码,否则这些多余的代码将被忽略.
28.  `<script>`标签严格按照单线程顺序执行不同标签的解析和运算
29. `<script>`元素应放在页面的`<body>`元素内容的后面,若放在`<head>`标签中,虽然将所有引用(包扩对.css的引用)都放在一起,但会导致浏览器在加载完全部`<script>`之前都是白屏状态.
30. defer 属性只使用于外部脚本,支持 H5的实现会忽略给嵌入脚本设置的 defer 属性. defer 是 H5中的新属性
31. 有多种执行**外部脚本**的方法：
	+ async="async"：脚本相对于页面的其余部分异步地执行（当页面继续进行解析时，脚本将被执行）,不保证执行先后顺序, 建议使用异步脚本不要在加载期间修改 DMO,异步脚本一定会在页面的 load 时间前执行,但可能会治啊 DOMContextLoaded 时间出发之前或之后执行.
	+ 不使用 async 且 defer="defer"：脚本将在页面完成解析时执行
	+ 既不使用 async 也不使用 defer：在浏览器继续解析页面之前，立即读取并执行脚本
32. 关于 XHTML 中的特殊用法
	+ 在 XHTML 中,`<`号将被当作开始一个新标签的开始来解析 ,当用作关系符使用时,会导致语法错误
	+ 可以使用相应的HTML 实体(&lt)代替小于号
	+ 或使用`![CDATA[function a (){}]]`代替,当 在不兼容 XHTML的浏览器中运行时,不支持 CDATA 片段,此时可以将
	```
	//<![CDATA[
	function  a (){}
	//]]>
	```
	注释掉,以实现通过 XHTML 的验证,而对 XHTML 之前的浏览器也平稳退化.
33. 使用外部文件的优势
	+ 可维护性:JS 文件都放在一个文件夹下 ,比较好维护,且在不关心 HTML标记的情况下,集中精力写 JS. 
	+ 可缓存: 浏览器可根据据他设置缓存链接的所有外部 JS,当被多次引用时,只需下载一次,最终结果可以加快网页加载速度
	+ 适应未来:HTML 和 XHTML 包含外部文件的语法是相同的,不需要使用各种标记和注释
34. `<noscript>` 标签,用于当浏览器不支持脚本,或脚本被禁用时显示,可包含能够出现在文档`<body>`中的任何 HTMl 元素.
35. JS 完全区分大小写,推荐驼峰式命名
36. 当不指定浏览器模式时,使用混合模式,指定严格模式使用编译指示`Use strict`
37. 虽然没有分号也能正常执行,但不推荐,加入封号在某些情况下可以增进代码的性能,因为解释器不需要推断应该在哪里加入分号,代码行结尾处没有分号,有时会导致压缩失败.
38. 在严格模式下,给未经声明的变量赋值,会抛出 ReferenceError 错误
39. 不同类型变量的声明,可以写在同一个声明语句中.(var a=1,b="a",c=false)
40. typeof 
	+ 这是一个操作符
	+ 只需要注意当值为 null 时,会返回 object 类型,因为特殊值 null 被认为是一个空的对象引用
	+ 对正则表达式调用在 Safari5及之前的版本,Chrome7之前版本返回"function()",其他浏览器也会返回"Object"
	+ 函数在 ECMAScript 中是对象,不是一种数据类型,函数确实有一些特殊的属性,因此通过 typeof 操作符来区分函数和其他对象是有必要的(如果一个值是函数,则会返回`function`)
41. 对于未声明过的变量,只能执行一项操作,即使用 typeof 检测其数据类型(虽然在非严格模式下调用 delete不会导致错误,但没什么意义)
42. 当定义的变量在将来用来保存对象,最好初始化为 null,这样就可以使用!=null来判断是否已经保存了对象的引用,实际上 undifined 是派生自 null值的 ,ECMA-262规定它们的相等性测试返回 true(null==underfine ==>true)
	+ 转换为true:true,任何非空字符串,任何非零数字值(包括无穷大),任何对象
	+ 转换为 false:false,"",0,NaN,null,undefined
43. Number:
	+ 八进制:第一位是0,作为前导,当字面值中出现超出[0-7]范围的数,自动解析为十进制,在严格模式下无效,导致 JS 引擎抛出错误
	+ 进行算术计算时,所有八进制十六进制表示的数值最终都被转换成十进制
	+ 浮点数:省略0(.1)的写法不推荐,浮点数值计算会产生严重的舍入误差,所有二进制机器都有这个问题(使用基于 IEEE754数值的浮点计算的通病).
	+ 可以使用 isFinite()函数判断某数值是否发生了溢出现象
	+ Number()函数的转换规则(<JavaScript 高级程序设计(第三版)> P49)(字符串需要注意的):
		+ 只包含数字(包含正负号)或有效浮点数--数字,忽略前导零.
		+ 十六进制--相同大小的十进制整数.
		+ 空字符串--0.
		+ 包含上述格式之外的字符串--NaN 
		+ 对象:调用 valueOf()方法,然后依照前面的规则转换返回的值,当结果是 NaN,调用 toString()方法,再依照前面的规则转换返回的字符串.
	+ **parserInt()**,处理整数的时候更常用,它:
		+ 忽略字符串前面的空格
		+ 第一个非空字符不是数字字符或者负号,直接返回 NaN
		+ 所以空字符串会返回 NaN(Number()方法对空字符返回0)
		+ 当遇到一个非数字字符,转换结束("123blue"会被转换为1234,"22.5"转换为22)
		+ (JS3)可以识别各种进制的前导符,自动转换成十进制
		+ (JS5)不识别八进制,(070,JS3会识别成56,JS5识别成0,即使在严格模式下也如此)
		+ 可传入第二个参数指定使用的进制(parseInt("10",2))
		+ 建议在任何情况下都明确指定基数
	+ **parserFloat()**
		+ 类似 parserInt()
		+ 遇到第一个无效字符位置(第一个小数点是有效的,第二个无效("22.34.5"--22.34))
		+ 始终忽略前导零
		+ 只识别十进制数,十六进制始终被转换成0 
		+ 当字符串包含的是一个可解析为整数的值,返回整数
1. String
	+ 字符串也是不可变对象
	+ 特殊符号
		+ `\n` 换行
		+ `\t` 制表
		+ `\b` 空格
		+ `\r` 回车
		+ `\f` 进纸
		+ `\\` 斜杠
		+ `\'` `\"` 单双引号
		+ `\xaaa` 十六进制字符串(\x41--"A")
		+ `\uaaa` 十六进制 Unicode 字符(\u03a3--希腊字符Σ)
	+ **当字符串中包含双字节字符,length属性可能不会精确地返回字符串中的字符数目**(同一个字符串中还可以字符精度不一样?)
	+ toString()方法
		+ 只有 null 和 undefined 没有这个方法
		+ 字符串的toString 方法返回一个字符串的副本
		+ 默认以十进制返回数值的字符串表示,通过传递基数,可以输出其他进制数(`var num=10 ; num.toString(2)`)
	+ String()(转型函数)
		+ 当不确定要转换的值是不是 null 或 undefined 时,可以使用此函数
		+ 转换规则:若有 toString()方法则调用 toString()方法,没有则对 null 值返回"null",对 underfined 则返回"undefined"
40. Object
	+ 是所有对象的基础
	+ 当不给构造函数传递参数时,省略构造函数的括号不会报错,但不推荐
	+ Object的每个实例都具有以下属性和方法
		+ 构造函数
		+ hasOwnProperty(String name):检查给定的属性在当前对象实例中(而不是实例原型中)是否存在(?判空吗)
		+ isPrototypeOf(object):检查传入的对象是否是另一个对象的原型
		+ propertuyIsEnumerable(Srting propertyName):检查给定的属性是否能使用 for-in 语句枚举
		+ toLocaleString():返回对象的字符串表示,与执行环境的地区对应
		+ toString()
		+ valueOf()
		+ ECMA-262中对象的行为不一定适用于 JS 中其他对象,浏览器环境提供的对像(BOM,DOM 等中的对象),属于宿主对象,由浏览器决定其行为(具体?哪些是相同的,哪些是不同的)
50. 操作符
	+ 当操作符运用于对象时,相应的操作符通常会调用对象的 valueOf()或 toString()方法,以取得可以操作的值 
	+ **"+"** 与数字相连时不会有任何作用,与非数字相连时,会企图将这些值转换成数字,string 仍转换成 NaN,boolean 被转换成 0 ,1,对象则调用 valueOf()或 toString()方法.
	+ **"-"** 与其他数字相连时,表示负数,与其他值相连时,会先转换成数字,再变成负数
	+ **"&&","||"** 当有一个操作数不是 boolean值的时候,逻辑操作不一定返回 boolean 值,遵循:
		+ (&&)当第一个操作数是对象,返回第二个操作数;(||)当第一个操作数是对象,返回第一个操作数
		+ (&&)第二个操作数是对象,只有当第一个操作数的结果为 TRUE 时,才返回该对象;(||)当第一个操作数的求值结果是 false,返回第二个操作数
		+ (&&)两个操作数都是对象,返回第二个对象;(||)两个操作数都是对象,返回第一个操作数
		+ 有一个操作数是 null,NaN,undefined,则返回对应值
		+ 都是短路操作
		+ 不能在逻辑操作符中使用未定义的值,会导致错误
		+ var myObj=preferedObject||backupOptions:此时 preferedObject是优先赋值给 myObj的值,不为 null则赋值给 myObject, backupOption 是后备值,如果第一个参数是 null,则后备值被赋值给myObject,赋值语句经常使用这种模式
	+ 乘性操作符
		+ **"乘号"**
			+ 有一个操作数是 NaN,则结果是 NaN
			+ Infinity 与0相乘,结果是 NaN
			+ 当有一个操作数不是数值,则调用 Number()将其转换为数值再计算 
		+ **"/"**
			+ 商超过数值表示范围,使用 正负Infinity表示
			+ 有一个操作数是 NaN,则结果是 NaN
			+ 零被零除,Infinity 被 Infinity 除,结果是 NaN
			+ 非零的有限数被零除,Infinity 被任何非零数值除结果为正负 Infinity.
			+ 当有一个操作数不是数值,则调用 Number()将其转换为数值再计算 
		+ **"%"**
			+ 被除数是无穷大,除数是有限大,结果是 NaN
			+ 被除数是有限大,除数是 0,结果是 NaN
			+ 被除数,除数都是 Infinity,结果是 NaN
			+ 被除数有限大,除数无穷大,结果是被除数
			+ 被除数是零,结果是0 
			+ 当有一个操作数不是数值,则调用 Number()将其转换为数值再计算 
		+ 加性操作符
			+ **+**
				+ 有一个操作数是 NaN,结果是 NaN
				+ Infinity加-Infinity ,结果是 NaN
				+ Infinity+Infinity=Infinity;-Infinity+(-Infinity)=-Infinity
				+ 0+(-0)=+0
				+ 当有一个操作数是非数字,则拼接字符串,undefined和 null使用 String()方法取得字符串
			+ **-**
				+ Infinity-Infinity,-Infinity 减-Infinity,结果都是 NaN
				+ +0 减+0 ,结果是+0
				+ +0 减-0 ,结果是-0
				+ -0 减-0 ,结果是+0
				+ 其他规则遵守正常加减法法则,特殊值处理与加法类似(具体见<JavaScript 高级程序设计(第三版)>P69)
			+ 关系操作符
				+ 都是字符串时,比较对象字符编码值
				+ 当一个是数字,一个是字符串时,不会比较字符串的编码值,而是将字符串转换成数字,而,不能转换成数字的字符串,会转换成"NaN",会出现 "a"<3--false "a">=3--false 的现象
				+ 其他比较过程倾向于转换成数值进行比较
				+ 对象先调用 valueOf() 方法,若没有再调用 toString() 方法
				+ 当一个操作符是 boolean,先转换成数值,再比较
			+ 相等和不等
				+ **"==","!="**
					+ 先转换再比较 (会真实改变变量的值吗???)
					+ boolean被转换成数字进行比较(0 ,1,true 只能是1)
					+ 当一个操作数是对象时,转换成基本类型(多使用 valueOf())后进行比较
					+ null和 undefined 是相等的
					+ NaN 不和任何相等
					+ 两个对象比较,比较是否指向同一个对象(这是地址比较吗?还是内容比较???)
				+ **"===","!=="**
					+ 未经转换就相等(会检测数据类型)
51. 语句 
	+ if:当表达式不是 boolean 类型时,会自动使用 Boolean()方法转换成 boolean 值
	+ for-in :当要迭代的对象的变量值为 null或 undefined,会抛出异常,JS5更正了这一行为,不再抛出异常,只是跳出循环,所以使用之前需要确认对象值.
	+ with:简化多次编写同一个对象
		+ ```
			var qs=location.search.substring(1);
			var hostName=location.hostname;
			与下列代码结果相同
			with(locationg){
			var qs=search.substring(1);
			var hostName=hostname;
			}
			```	
		+ 每个变量首先被认为是一个局部变量,若在局部环境中找不到该变量的定义,则查询 location 对象中是否有同名属性(在 with 代码块中定义的变量,不是局部变量吗?????还是依赖父级层级????)
		+ 严格模式下不允许使用 with 语句,视为语法错误
		+ 大量使用会导致性能下降,大型应用程序中不建议使用
	+ switch:JS 中的  case 语句可以使用任何数据 类型,也可以是变量,表达式.**比较时使用全等操作符,不会发生类型转换.**(只要数据类型和对应变量相等就可以吗?对象比较的时候是比较各字段吗????)
	+ 函数:
		+ 不需要在定义时指定是否返回值,任何函数在任何时候都可以通过 return 语句加要返回的值实现返回值
		+ 当只使用 return 而不加返回值时,返回 undefined 
		+ 严格模式下,函数名和参数名不能命名为 eval 或 arguments,不能出现两个命名参数同名的情况(我也不知道这到底什么意思?),否则将出现语法错误.
		+ 理解参数:
			+ 实际传递的参数不必与定义的参数的个数相同
			+ JS 参数在内部是用是一个类似数组的对象表示的(只是类似,不是数组的实例,可以使用角标的方式访问对应顺序的传递进来的参数,也可以访问 length 属性) 
			+ 命名的参数只提供便利,不是必需的.解析器不会验证命名参数
			+ 利用解析器对传入参数个数不校验的特点,可以实现类似重载的功能(通过判断参数个数)
			+ arguments 角标对参数的访问方式可以与形参混合使用
			+ arguments 的参数内存空间与形参并不相同,但修改 arguments 中的值,会同步到形参,而修改形参却不会同步修改 arguments 中的值.
			+ 没有传值的命名参数将自动被赋值 undefined,手动修改arguments 中的值也不能同步到形参
			+ 严格模式下,重写 arguments 的值会导致语法错误(不执行)
			+ JS 中所有参数传递的都是值,不可能通过引用传递参数(<JavaScript 高级程序设计(第三版)> P66)(那对象传递的过程是什么样的???)
			+ 当 JS 中定义了两个同名函数,则只有后定义的生效,没有重载一说.
1. JS 不允许直接访问内存中的空间,基本类型按值访问,可以操作保存在变量中的实际值,操作对象时,实际是在操作对象的引用而不是实际的对象,引用类型是按引用访问的
2. 只能给引用类型添加属性,方法等,给基本类型(按值引用的值)添加属性和方法时,虽然不会报错,但再次引用时,仍为 undefined.
3. 基本类型赋值时,是真实赋值,给引用对象赋值时,只是修改指针,跟 Java貌似一样
4. JS 在 IE9以下 与原生COM(组件对象模型)的对象混用会有循环引用的问题.需要在方法循环完之后,手动置空(断开循环引用) <JavaScript 高级程序设计第三版 P79>
5. 不建议手动触发垃圾回收
6. 建议将不再使用的全局变量手动置为 null ,以便下次垃圾回收时能够回收
7. <JavaScript 高级程序设计第三版,第四章小结写的不错>
7. 


			
		