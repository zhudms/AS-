#android style 中使用自定义的attrs
```
[html] view plain copy
<resources xmlns:android="http://schemas.android.com/apk/res/android">  
    <!-- custom attrs toggle button -->  
    <style name="myTogglebtStyle">  
        <item name="@attr/togglebt_onColor">#f00</item>  
        <item name="@attr/togglebt_offColor">#ddd</item>  
        <item name="@attr/togglebt_spotColor">#ddd</item>  
        <item name="@attr/togglebt_offBorderColor">#000</item>  
        <item name="@attr/togglebt_borderWidth">2dp</item>  
    </style>  
</resources>  
```

有些时候需要在style中添加 自定义的属性， 就按着上面的代码写。

+ 当使用，library reference的方式的时候，可以如上代码。 
+ 当直接使用 jar + attrs.xml文件的时候不能用上面的方法。
