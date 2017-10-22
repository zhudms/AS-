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
	



	








