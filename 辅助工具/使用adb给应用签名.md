使用adb签名指令
cd 到D:\AS2\jbr\bin下（因为java环境变量没配置好 不知道差哪里）
jarsigner -verbose --keystore D:\demo\MyApplication6\app\aaa.jks -storepass 123123 -signedjar C:\Users\Administrator\Downloads\bbb.apk(签名后的) C:\Users\Administrator\Downloads\aaa.apk（未签名的） key0