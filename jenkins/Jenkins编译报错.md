<a href="">lint task执行失败</a>
解决lint task执行失败问题
原创 2016年03月22日 09:59:20 6030
Android Studio 执行 lint task的时候 可能会遇到如下错误。

FAILURE: Build failed with an exception.

* What went wrong:
Execution failed for task ':app:lint'.
> Lint found errors in the project; aborting build.

  Fix the issues identified by lint, or add the following to your build script to proceed with errors:
  ...
  android {
      lintOptions {
          abortOnError false
      }
  }
  ...

* Try:
Run with --stacktrace option to get the stack trace. Run with --info or --debug option to get more log output.

这个是因为代码不符合规范，lint检查时报错，因此中断了整个编译过程。

只要在当前app的app/build.gradle文件内增加如下代码，

android {

    ...

  lintOptions {
      abortOnError false
  }

    ...
}