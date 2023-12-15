Android -- 在xml文件中定义drawable数组
Xml
复制代码
<string-array name="images">  
    <item>@drawable/image1</item>  
    <item>@drawable/image2</item>  
    <item>@drawable/image3</item>  
    <item>@drawable/image4</item>  
    <item>@drawable/image5</item>  
    <item>@drawable/image6</item>  
</string-array>
复制代码
复制代码
<array name="images">
        <item>@drawable/image1</item>
        <item>@drawable/image2</item>
        <item>@drawable/image3</item>
        <item>@drawable/image4</item>
        <item>@drawable/image5</item>
        <item>@drawable/image6</item>
</array>
复制代码
Java
TypedArray ar = context.getResources().obtainTypedArray(R.array.images);  
int len = ar.length();       
int[] resIds = new int[len];       
for (int i = 0; i < len; i++)       
    resIds[i] = ar.getResourceId(i, 0);  
ar.recycle();
