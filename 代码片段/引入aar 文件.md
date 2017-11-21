引入 .aar
在Module.app 文件中添加
```
repositories {
    flatDir {
        dirs 'libs'
    }
}

dependencies {
    compile(name: 'LFLivenessSDK', ext: 'aar')
}
```