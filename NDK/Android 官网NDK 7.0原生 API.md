#Android NDK 7.0原生 API

主要的原生 API 更新
Android API 级别 3
Android API 级别 4
Android API 级别 5
Android API 级别 8
Android API 级别 9
Android API 级别 14
Android API 级别 18
Android NDK 提供一组随新的 Android API 级别后续发布而逐渐增加的原生标头和共享库文件。 本页介绍这些标头和文件，并将它们与特定的 Android API 级别进行对应。

概览
以下两个基本步骤让您的应用能够使用 NDK 提供的库：

在您的代码中添加与您想使用的库关联的标头。
通知构建系统您的原生模块需要在加载时链接库。例如，如需链接 /system/lib/libfoo.so，则向 Android.mk 文件添加以下行：
LOCAL_LDLIBS := -lfoo
如需列出多个库，请使用空格作为分隔符。如需了解有关使用 LOCAL_LDLIBS 变量的详细信息，请参阅 Android.mk。

对于所有 API 级别，构建系统自动链接标准的 C 库、标准的 C++ 库、实时扩展程序以及 pthread；在定义 LOCAL_LDLIBS 变量时，您不需要添加它们。 如需了解有关 C 和 C++ 库的详细信息，请参阅 Android API 级别 3。

NDK 通常为新的 Android 版本提供新的标头和库。这些文件位于 $NDK/platforms/android-<level>/<abi>/usr/include 下。 当 NDK 没有适用于 Android API 级别的一组特定的新标头和库时，这意味着面向该级别的应用应使用最新发布的 NDK 资源。 例如，没有适用于 Android API 级别 6 和 7 的新的 NDK 标头或库版本。因此，当开发面向 Android API 级别 7 的应用时，您应使用位于 android-5/ 下的标头和库。

表示 1 显示 NDK 支持的 API 级别和 Android 版本之间的对应关系。

表 1. NDK 支持的 API 级别和对应的 Android 版本。
NDK 支持的 API 级别	Android 版本
3	1.5
4	1.6
5	2.0
8	2.2
9	2.3 到 3.0.x
12	3.1.x
13	3.2
14	4.0 到 4.0.2
15	4.0.3 和 4.0.4
16	4.1 和 4.1.1
17	4.2 和 4.2.2
18	4.3
19	4.4
21	4.4W 和 5.0
对于既定 Android API 级别，每个新的 NDK 标头和库版本都是累计的；构建您的应用时，如果您使用最新发布的标头，那么，您几乎始终是安全的。 例如，对于面向 API 级别 16 的应用，您可以使用适用于 Android API 级别 21 的 NDK 标头。 不过，这样做 APK 占用的空间会增加。

如需了解有关 Android API 级别的详细信息，请参阅什么是 API 级别？。

主要的原生 API 更新
Android API 级别 3
NDK 为开发在 Android 1.5 系统映像及更高版本上运行的原生代码提供下列 API。

C 库
适用于 Android 1.5 的 C 库标头可通过其标准名称获取，如 stdlib.h 和 stdio.h。 如果标头在生成时缺失，那是因为标头在 1.5 系统映像上不可用。

C++ 库
可提供最低程度的 C++ 支持 API。如需了解有关 C++ 库支持的详细信息，请参阅 C++ 库支持。

Android 特有的日志支持
<android/log.h> 包含各种不同的定义，应用可用这些定义从原生代码向内核发送日志消息。 如需了解有关这些定义的详细信息，请参阅 $NDK/platforms/android-3/arch-arm/usr/include/android/log.h 中的注释，其中 $NDK 是您的 NDK 安装的根目录。

您可以编写您自己的包装器宏以访问此功能。如果您希望执行日志记录，则您的原生模块应链接到 /system/lib/liblog.so。 通过在 Android.mk 文件中添加以下行来实现此链接：

LOCAL_LDLIBS := -llog
ZLib 压缩库
通过添加 zlib.h 和 zconf.h，您可以使用 Zlib 压缩库。 您还必须通过在 Android.mk 文件中添加以下行将您的原生模块链接到 /system/lib/libz.so：

LOCAL_LDLIBS := -lz
动态链接器库
通过添加 dlfcn.h，您可以访问 Android 动态链接器的 dlopen()、dlsym() 和 dlclose() 函数。 您还必须通过在 Android.mk 文件中添加以下行链接 /system/lib/libdl.so：

LOCAL_LDLIBS := -ldl
Android API 级别 4
NDK 为开发在 Android 1.6 系统映像及更高版本上运行的原生代码提供下列 API。

OpenGL ES 1.x Library
标准 OpenGL ES 标头 gl.h 和 glext.h 包含从原生代码执行 OpenGL ES 1.x 渲染调用所需的声明。

如需使用这些标头，通过在 Android.mk 文件中添加以下行将您的原生模块链接到 /system/lib/libGLESv1_CM.so：

LOCAL_LDLIBS := -lGLESv1_CM
所有基于 Android 的设备均支持 OpenGL ES 1.0，因为 Android 提供一个启用 Open GL 1.0 的软件渲染器，可在没有 GPU 的设备上使用。

仅具有所需 GPU 的 Android 设备才完全支持 OpenGL ES 1.1。应用可以查询 OpenGL ES 版本字符串和扩展字符串，以确定当前设备是否支持其需要的功能。 如需了解有关如何执行此查询的信息，请参阅 OpenGL 规范中的 glGetString() 的说明。

此外，您必须在您的清单文件中放置一个 <uses-feature> 标签，以指明您的应用所需的 OpenGL ES 版本。

从 API 级别 9 才开始提供 EGL API。不过，您可以使用 VM 执行您从这些 API 获取的部分操作。 这些操作包括表面创建和翻页。 有关如何使用 GLSurfaceView 的示例，请参阅 GLSurfaceView 简介。

san-angeles 示例应用提供一个示例，展示如何执行这些操作，从而在原生代码中渲染每个帧。 此示例是出色的 San Angeles Observation 演示程序的小型 Android 移植。

Android API 级别 5
NDK 为开发在 Android 2.0 系统映像及更高版本上运行的原生代码提供下列 API。

OpenGL ES 2.0 库：
标准 OpenGL ES 2.0 标头 <GLES2/gl2.h> 和 <GLES2/gl2ext.h> 包含从原生代码执行 OpenGL ES 2.0 渲染调用所需的声明。这些渲染调用提供利用 GLSL 语言定义并使用顶点和片段着色器的功能。

如需使用 OpenGL ES 2.0，通过在 Android.mk 文件中添加以下行将您的原生模块链接到 /system/lib/libGLESv2.so：

LOCAL_LDLIBS := -lGLESv2
并非所有设备均支持 OpenGL ES 2.0。应用可以查询 OpenGL ES 版本字符串和扩展字符串，以确定当前设备是否支持其需要的功能。 如需了解有关如何执行此查询的信息，请参阅 OpenGL 规范中的 glGetString() 的说明。

此外，您必须在您的清单文件中放置一个 <uses-feature> 标签，以指明您的应用所需的 OpenGL ES 版本。 如需了解有关针对 <uses-feature> 的 OpenGL ES 设置的详细信息，请参阅 OpenGL ES。

hello-gl2 示例应用提供一个基本示例，展示如何将 OpenGL ES 2.0 与 NDK 结合使用。

从 API 级别 9 才开始提供 EGL API。不过，您可以使用 VM 执行您从这些 API 获取的部分操作。 这些操作包括表面创建和翻页。 有关如何使用 GLSurfaceView 的示例，请参阅 GLSurfaceView 简介。

注：Android 模拟器不支持 OpenGL ES 2.0 硬件模拟。 运行和测试使用此 API 的代码需要一个其硬件可支持 OpenGL ES 2.0 的真实设备。

Android API 级别 8
NDK 为开发在 Android 2.2 系统映像及更高版本上运行的原生代码提供下列 API。

jnigraphics
jnigraphics 库显示一个基于 C 的接口，其允许原生代码以可靠方式访问 Java 位图对象的像素缓冲区。 使用 jnigraphics 的工作流如下：

使用 AndroidBitmap_getInfo() 从 JNI 检索信息，如既定位图句柄的宽度和高度。
使用 AndroidBitmap_lockPixels() 锁定像素缓冲区并检索指向它的指针。这样做可确保像素在应用调用 AndroidBitmap_unlockPixels() 前不会移动。
在原生代码中，修改像素缓冲区使其符合相应像素格式、宽度和其他特性。
调用 AndroidBitmap_unlockPixels() 以解锁缓冲区。
如需使用 jnigraphics，在您的源代码中添加 <bitmap.h> 标头，并通过在 Android.mk 文件中添加以下行链接 jnigraphics：

LOCAL_LDLIBS += -ljnigraphics
有关此功能的其他详细信息，请参阅 bitmap.h 文件的注释。

Android API 级别 9
NDK 为开发在 Android 2.3 系统映像及更高版本上运行的原生代码提供下列 API。

EGL
EGL 为分配和管理 OpenGLES 表面提供原生平台接口。如需了解有关其功能的详细信息，请参阅 EGL 原生平台接口。

EGL 允许您从原生代码执行以下操作：

列出支持的 EGL 配置。
分配和释放 OpenGLES 表面。
切换或翻转表面。
以下标头提供 EGL 功能：

EGL/egl.h：主要的 EGL API 定义。
EGL/eglext.h：EGL 扩展相关的定义。
如需链接系统的 EGL 库，将以下行添加到 Android.mk 文件：

LOCAL_LDLIBS += -lEGL
OpenSL ES
Android 原生音频处理基于 Khronos Group OpenSL ES 1.0.1 API。

标准 OpenSL ES 标头 OpenSLES.h 和 OpenSLES_Platform.h 包含从 Android 原生端执行音频输入和输出所需的声明。OpenSL ES 的 NDK 分发还提供 Android 特有的扩展。 如需了解有关这些扩展的信息，请参阅 OpenSLES_Android.h 和 OpenSLES_AndroidConfiguration.h 中的注释。

系统库 libOpenSLES.so 实现公共原生音频功能。通过向 Android.mk 文件添加以下行来链接它：

LOCAL_LDLIBS += -lOpenSLES
如需了解有关 OpenSL ES API 的详细信息，请参阅 $NDK/docs/Additional_library_docs/opensles/index.html，其中 $NDK 是您的 NDK 安装根目录。

Android 本机应用 API
从 API 级别 9 开始，您可以使用原生代码编写整个 Android 应用，无需使用任何 Java。

注：在原生代码中编写您的应用本身并不能让您的应用在 VM 中运行。 此外，您的应用仍必须通过 JNI 访问 Android 平台的大部分功能

此版本提供下列原生标头：

<native_activity.h>
<looper.h>
<input.h>
<keycodes.h>
<sensor.h>
<rect.h>
<window.h>
<native_window.h>
<native_window_jni.h>
<configuration.h>
<asset_manager.h>
<storage_manager.h>
<obb.h>
如需了解有关这些标头的详细信息，请参阅 NDK API 参考文档以及标头本身的注释。 另外，如需了解有关编写原生应用这一较大主题的详细信息，请参阅原生 Activity 和应用。

当您添加其中一个或多个标头时，您也必须要链接 libandroid.so 库。 如需链接 libandroid.so，在 Android.mk 文件中添加以下行：

LOCAL_LDLIBS += -landroid
Android API 级别 14
NDK 为开发在 Android 4.0 系统映像及更高版本上运行的原生代码提供下列 API。

OpenMAX AL
Android 原生多媒体处理基于 Khronos Group OpenMAX AL 1.0.1 API。

标准 OpenMAX AL 标头 <OMXAL/OpenMAXAL.h> 和　<OMXAL/OpenMAXAL_Platform.h> 包含从 Android 原生端执行多媒体输出所需的声明。

OpenMAX AL 的 NDK 分发还提供了 Android 特有的扩展。如需有关这些扩展的信息，请参阅 OpenMAXAL_Android.h 中的注释。

系统库 libOpenMAXAL.so 实现公共原生多媒体功能。如需链接此库，在 Android.mk 文件中添加以下行：

    LOCAL_LDLIBS += -lOpenMAXAL
如需了解有关此主题的详细信息，请参阅 $NDK/docs/openmaxal/index.html，其中 $NDK 是您的 NDK 安装的根目录。

OpenSL ES
针对此 Android API 级别的 OpenSL ES 支持增加了 PCM 支持。如需了解有关在 NDK 中支持 OpenSL ES 的详细信息，请参阅 OpenSL ES。

Android API 级别 18
NDK 为开发在 Android 4.3 系统映像及更高版本上运行的原生代码提供下列 API。

OpenGL ES 3.0
标准 OpenGL ES 3.0 标头 gl3.h 和 gl3ext.h 包含从原生代码执行 OpenGL ES 3.0 渲染调用所需的声明。 这些渲染调用提供利用 GLSL 语言定义并使用顶点和片段着色器的功能。

如需使用 OpenGL ES 3.0，通过在 Android.mk文件中添加以下行将您的原生模块链接到 /system/lib/libGLESv3.so：

LOCAL_LDLIBS := -lGLESv3
并非所有设备均支持 OpenGL ES 3.0。应用可以查询 OpenGL ES 版本字符串和扩展字符串，以确定当前设备是否支持其需要的功能。 如需了解有关如何执行此查询的信息，请参阅 OpenGL 规范中的 glGetString() 的说明。

此外，您必须在您的清单文件中放置一个 <uses-feature> 标签，以指明您的应用所需的 OpenGL ES 版本。 如需了解有关针对 <uses-feature> 的 OpenGL ES 设置的详细信息，请参阅 OpenGL ES。

gles3jni 示例应用提供一个基本示例，展示如何将 OpenGL ES 3.0 与 NDK 结合使用。

注：Android 模拟器不支持 OpenGL ES 3.0 硬件模拟。 运行和测试使用此 API 的代码需要一个其硬件可支持 OpenGL ES 3.0 的真实设备。

Android API 级别 21
NDK 为开发在 Android 4.3 系统映像及更高版本上运行的原生代码提供下列 API。

OpenGL ES 3.1
标准 OpenGL ES 3.1 标头 gl31.h 和 gl3ext.h 包含从原生代码执行 OpenGL ES 3.1 渲染调用所需的声明。 这些渲染调用提供利用 GLSL 语言定义并使用顶点和片段着色器的功能。

如需使用 OpenGL ES 3.1，通过在 Android.mk 文件中添加以下行将您的原生模块链接到 /system/lib/libGLESv3.so：

LOCAL_LDLIBS := -lGLESv3
并非所有设备均支持 OpenGL ES 3.1。应用可以查询 OpenGL ES 版本字符串和扩展字符串，以确定当前设备是否支持其需要的功能。 如需了解有关如何执行此查询的信息，请参阅 OpenGL 规范中的 glGetString() 的说明。

此外，您必须在您的清单文件中放置一个 <uses-feature> 标签，以指明您的应用所需的 OpenGL ES 版本。 如需了解有关针对 <uses-feature> 的 OpenGL ES 设置的详细信息，请参阅 OpenGL ES。

gles3jni 示例应用提供一个基本示例，展示如何将 OpenGL ES 3.1 与 NDK 结合使用。

注：Android 模拟器不支持 OpenGL ES 3.1 硬件模拟。 运行和测试使用此 API 的代码需要一个其硬件可支持 OpenGL ES 3.1 的真实设备