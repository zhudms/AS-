#AndroidStudio引入相关
+ 引入.so文件，需要在src/main/下创建jniLibs目录，然后吧.so拖入即可，不需要额外配置，但是文件夹名称及大小写一定要正确

+ 引入 .aar
在Module.app 文件中添加

	```
	repositories {
	    flatDir {
	        dirs 'libs'
	    }
	}
	
	dependencies {
	 	compile 'com.android.support:recyclerview-v7:26.+'
	   compile(name: 'LFLivenessSDK', ext: 'aar')
	}
	```
+
