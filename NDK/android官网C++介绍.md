#C++ 库支持
本页内容
帮助程序运行时
运行时特性
重要注意事项
授权
Android 平台提供很小的 C++ 运行时支持库 (libstdc++)。这种很小的支持不包含如下支持：

标准 C++ 库支持（几个无关紧要的标头除外）。
C++ 异常支持
RTTI 支持
NDK 提供此默认库使用的标头。此外，NDK 还提供大量可提供其他功能的帮助程序运行时。 本页提供这些帮助程序运行时及其特性和使用方式的信息。

帮助程序运行时
表 1 提供 NDK 中可用运行时的名称、简要说明和功能。

表 1. NDK 运行时和功能。
名称	说明>	功能
libstdc++（默认）	默认最小系统 C++ 运行时库。	不适用
gabi++_static	GAbi++ 运行时（静态）。	C++ 异常和 RTTI
gabi++_shared	GAbi++ 运行时（共享）。	C++ 异常和 RTTI
stlport_static	STLport 运行时（静态）。	C++ 异常和 RTTI；标准库
stlport_shared	STLport 运行时（共享）。	C++ 异常和 RTTI；标准库
gnustl_static	GNU STL（静态）。	C++ 异常和 RTTI；标准库
gnustl_shared	GNU STL（共享）。	C++ 异常和 RTTI；标准库
c++_static	LLVM libc++ 运行时（静态）。	C++ 异常和 RTTI；标准库
c++_shared	LLVM libc++ 运行时（共享）。	C++ 异常和 RTTI；标准库
如何设置运行时
使用 Application.mk 文件中的 APP_STL 变量指定要使用的运行时。 使用表 1 中“名称”列中的值作为您的设置。 例如：

APP_STL := gnustl_static
只能为应用选择一个运行时，并且只能在 Application.mk 中选择。

即使不使用 NDK 构建系统，也可使用 STLport、libc++ 或 GNU STL。如需了解有关如何结合您自己的工具链使用这些运行时的详细信息，请参阅独立工具链。

运行时特性
libstdc++（默认系统运行时）
此运行时只提供以下标头，除此之外没有其他任何支持：

cassert
cctype
cerrno
cfloat
climits
cmath
csetjmp
csignal
cstddef
cstdint
cstdio
cstdlib
cstring
ctime
cwchar
new
stl_pair.h
typeinfo
utility
GAbi++ 运行时
此运行时提供与默认运行时相同的标头，但新增了对 RTTI（运行时类型信息）和异常处理的支持。

STLport 运行时
此运行时是 STLport (http://www.stlport.org) 的 Android 端口。 它提供全套 C++ 标准库标头。 它还通过嵌入自己的 GAbi++ 实例对 RTTI 和异常处理提供支持。

虽然此运行有共享和静态版本可用，但我们建议使用共享版本。 如需了解详细信息，请参阅静态运行时。

共享库文件命名为 libstlport_shared.so，而不是其他平台上常见的 libstdc++.so。

除了静态和共享库选项，您还可以在构建之前将以下行添加到 Application.mk 文件或者在环境中设置它，强制 NDK 从来源构建库：

STLPORT_FORCE_REBUILD := true
GNU STL 运行时
此运行时是 GNU 标准 C++ 库 (libstdc++-v3)。其共享库文件名为 libgnustl_shared.so。

libc++ 运行时：
此运行时是 LLVM libc++ 的 Android 端口。其共享库文件名为 libc++_shared.so。

默认情况下，此运行时使用 -std=c++11 编译。像 GNU libstdc++ 一样，您需要显式开启异常或 RTTI 支持。 如需了解有关如何执行此操作的信息，请参阅 C++ 异常和 RTTI。

NDK 为 libc++ 提供了预建的静态和共享库，但您也可以在构建之前将以下行添加到 Application.mk 文件或者在环境中设置它，强制 NDK 从来源构建 libc++：

LIBCXX_FORCE_REBUILD := true
Atomic 支持
如果包含 <atomic>，您可能还需要 libatomic。如果使用的是 ndk-build，请添加以下行：

LOCAL_LDLIBS += -latomic
如果使用的是自己的工具链，请使用：

-latomic
兼容性
NDK 的 libc++ 不稳定。并非所有测试都能通过，而且测试套件并不全面。一些已知的问题包括：

如果在 ARM 上使用 c++_shared，引发异常时可能会崩溃。
对 wchar_t 和语言区域 API 的支持受到限制。
还应确保检查所用 NDK 版本变更日志的“已知问题”部分。

警告：尝试更改不支持的语言区域不会失败。 操作会成功，但语言区域不会改变，并且 logcat 中出现以下消息。

newlocale() WARNING: Trying to set locale to en_US.UTF-8 other than "", "C" or "POSIX"
重要注意事项
C++ 异常
在高于 NDKr5 的所有 NDK 版本中，NDK 工具链可让您使用支持异常处理的 C++ 运行时。 但为确保与早期版本兼容，默认情况下它会编译所有支持 -fno-exceptions 的 C++ 来源。 您可以为整个应用或个别模块启用 C++ 异常。

要为整个应用启用异常处理支持，请将以下行添加到 Application.mk 文件中。要为个别模块启用异常处理支持，请将以下行添加到其各自的 Android.mk 文件中。

APP_CPPFLAGS += -fexceptions
RTTI
在高于 NDKr5 的所有 NDK 版本中，NDK 工具链可让您使用支持 RTTI 的 C++ 运行时。 但为确保与早期版本兼容，默认情况下它会编译所有支持 -fno-rtti 的 C++ 来源。

要为整个应用启用 RTTI 支持，请将以下行添加到 Application.mk文件中：

APP_CPPFLAGS += -frtti
要为个别模块启用 RTTI 支持，请将以下行添加到其各自的 Android.mk 文件中：
LOCAL_CPP_FEATURES += rtti
或者，您也可以使用：
LOCAL_CPPFLAGS += -frtti
静态运行时
将 C++ 运行时的静态库变体添加到多个二进制文件可能导致意外行为。 例如，您可能会遇到：

内存在一个库中分配，在另一个库中释放，从而导致内存泄漏或堆损坏。
libfoo.so 中引发的异常在 libbar.so 中未被捕获，从而导致您的应用崩溃。
std::cout 的缓冲未正常运行
此外，如果您将两个共享库 – 或者一个共享库和一个可执行文件 – 链接到同一个静态运行时，每个共享库的最终二进制映像包含运行时代码的副本。 运行时代码有多个实例是表明有问题，因为运行时内部使用或提供的某些全局变量会重复。

此问题不适用于只包含一个共享库的项目。例如，您可以链接 stlport_static，并预期您的应用正确运行。 如果您的项目需要多个共享库模块，建议使用 C++ 运行时的共享库变体。

共享运行时
如果您的应用针对早于 Android 4.3（Android API 级别 18）的 Android 版本，并且您使用指定 C++ 运行时的共享库变体，则必须先加载共享库，再加载依赖它的任何其他库。

例如，应用可能具有以下模块：

libfoo.so
libfoo.so 使用的 libbar.so
libfoo 和 libbar 使用的 libstlport_shared.so
必须以相反的依赖顺序加载库：

    static {
      System.loadLibrary("stlport_shared");
      System.loadLibrary("bar");
      System.loadLibrary("foo");
    }
注：调用 System.loadLibrary() 时不要使用 lib 前缀。

授权
STLport 依据 BSD 式开源许可证授权。请参阅 $NDK/sources/cxx-stl/stlport/README，了解有关 STLport 的详细信息。

GNU libstdc++ 由 GPLv3 许可证管辖，而不是由 LGPLv2 或 LGPLv3 管辖。如需了解详细信息，请参阅 GCC 网站上的许可证。

LLVM libc++ 依据伊利诺伊大学“BSD 式”许可证和 MIT 许可证双重授权。