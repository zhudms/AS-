#HTML练习
<a href="http://www.w3school.com.cn/html/html_basic.asp"> W3C</a>

###标签说明
1. 单标签
>例如：</br>

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
14. <a href="https://thumbnail0.baidupcs.com/thumbnail/60d75ebb6ce71f592dd7b9283afda762?fid=187043171-250528-682751807396828&time=1508400000&rt=sh&sign=FDTAER-DCb740ccc5511e5e8fedcff06b081203-BUjjMiMAYCsKqJ%2BP7xR94ku%2Fbd0%3D&expires=8h&chkv=0&chkbd=0&chkpc=&dp-logid=6764941251284428561&dp-callid=0&size=c710_u400&quality=100&vuk=-&ft=video">常用标签</a>

![alt text][id]
[id]:/Users/rongyile/Desktop/JS截图/JS最常用标签意思.png




