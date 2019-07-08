###java中需要转义的字符

(    [     {    /    ^    -    $     |    }    ]    )    ?    *    +    .



转义方法为字符前面加上"\\"，这样在split、replaceAll时就不会报错了；

但是有一点需要注意，String.contains()方法是不需要转义的。 


服务器下发的String 如果包含\n需要显示成换行符时，需要使用bean.getData().getContent().replace("\\n","\n"); 替换字符串

<br>请不要使用replaceAll 方法！！！！！</br>