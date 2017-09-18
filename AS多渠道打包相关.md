#AndroidStudio多渠道打包
+ 1 moudle:android配置debug、release签名文件

```
 signingConfigs {
        release {
            storeFile file("ryl.jks")
            storePassword "rylryl"
            keyAlias "ryl"
            keyPassword "rylryl"

        }
    }


    buildTypes {
        debug {
            signingConfig signingConfigs.release
        }
        release {
            signingConfig signingConfigs.release
        }
    }
```