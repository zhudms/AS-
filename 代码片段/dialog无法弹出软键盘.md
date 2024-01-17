 Window window = dialog.getWindow();
window.setContentView(R.layout.dialog_postmsg);
        LayoutParams params = window.getAttributes();
        params.width = LayoutParams.MATCH_PARENT;//如果不设置,可能部分机型出现左右有空隙,也就是产生margin的感觉
        params.height = LayoutParams.WRAP_CONTENT;
        params.softInputMode = LayoutParams.SOFT_INPUT_STATE_ALWAYS_VISIBLE;//显示dialog的时候,就显示软键盘
        params.flags = LayoutParams.FLAG_DIM_BEHIND;//就是这个属性导致不能获取焦点,默认的是FLAG_NOT_FOCUSABLE,故名思义不能获取输入焦点,
        params.dimAmount=0.5f;//设置对话框的透明程度背景(非布局的透明度)
        window.setAttributes(params);
————————————————
版权声明：本文为CSDN博主「王智于」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/wangzhiyu52193/article/details/105406413