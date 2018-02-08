android 自动打发布包

build.gradle(moudle:app)文件中

```
android {

//签名配置
    signingConfigs {
        debug {
            storeFile file('/Users/rongyile/ryl.jks')//签名文件路径
            storePassword "rylryl"
            keyAlias "ryl"
            keyPassword "rylryl"  //签名密码
            println("====== signingConfigs.debug ======")
        }
        release {
            storeFile file('/Users/rongyile/rl.jks')//签名文件路径
            storePassword "rylryl"
            keyAlias "ryl"
            keyPassword "rylryl"  //签名密码
            println("====== signingConfigs.release ======")
        }
    }


    buildTypes {
        release {
            signingConfig signingConfigs.release//这句不写 build 出来的是 unsigned 文件
            minifyEnabled false
            proguardFiles getDefaultProguardFile('proguard-android.txt'), 'proguard-rules.pro'
        }
    }
}

```


+ **./gradlew build**  **./** mac 中表示指定当前目录
+ **./gradlew assembleRelease** 打发布包
+ **./gradlew assemble** 全包
+ **./gradlew build** build


<a href="https://www.zhihu.com/question/45403949">gradlew是gradle Wrapper，Wrapper的意思就是包装因为不是每个人的电脑中都安装了gradle，也不一定安装的版本是要编译项目需要的版本，那么gradlew里面就配置要需要的gradle版本，然后用户只需要运行gradlew就可以按照配置下载对应的gradle到项目的目录中，仅仅给项目本身用，然后就是clean、build等操作，但是如果执行gradle clean 这样的命令的话，系统使用的是电脑环境变量中配置的gradle，或者是找不到命令。此时我们就用gradlew clean这个命令，其实内部调用的是本项目中的gradle来执行的，所以就相当于进行了一次包装。
</a>





${JENKINS_HOME}/workspace/${ITEM_FULLNAME}


plist--/Users/Shared/Jenkins/Home

Build File:${WORKSPACE}/app/build.gradle

