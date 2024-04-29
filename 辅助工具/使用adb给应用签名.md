使用adb签名指令
cd 到D:\AS2\jbr\bin下（因为java环境变量没配置好 不知道差哪里）
jarsigner -verbose --keystore D:\demo\MyApplication6\app\aaa.jks -storepass 123123 -signedjar C:\Users\Administrator\Downloads\bbb.apk(签名后的) C:\Users\Administrator\Downloads\aaa.apk（未签名的） key0

这种签名方式使用的是默认RA1的签名方式 ，已经被认为不安全，签名后的应用已经无法安装  需要使用特别长的那个256签名方式


查看签名文件
jarsigner --keystore c:\users\administrator\downloads\hhh.jks -storepass 123123 -verify C:\Users\Administrator\Downloads\hhh.apk