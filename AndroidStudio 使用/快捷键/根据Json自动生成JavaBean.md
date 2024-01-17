通过AndroidStudio插件GsonFormat:根据Json自动生成JavaBean
此处参考了 源于未知 的博文：http://blog.csdn.net/wenweidev/article/details/51437995 

 在线安装要打开VPN，因为Google在国内被禁 

方法1:


[java]  view plain  copy
1.Android studio    
 File->Settings->Plugins-->Browse repositores -> 搜索GsonFormat ->安装  
2.重启Android Studio.  

方法2:  下载地址
[java]  view plain  copy
1.下载 GsonFormat.jar ,  
2.Android studio  File->Settings..->Plugins -->  
  install plugin from disk..导入下载的 GsonFormat.jar ,  
3.重启 android studio .  
使用方法：
Code - Generate - GsonFormat
快捷键:Alt + Insert
 注意提前新建好一个空的JavaBean类 
————————————————
版权声明：本文为CSDN博主「长江某菜鸟」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/qq_33729889/article/details/65634968