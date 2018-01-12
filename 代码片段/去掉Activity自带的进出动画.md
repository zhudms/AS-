#去掉Activity自带的进出动画
原创 2018年01月04日 09:49:41 64
原页面跳转到MessageActivity:

   

Intent intent = new Intent(mContext, MessageActivity.class);
startActivity(intent);
getActivity().overridePendingTransition(0, 0);


从MessageActivity返回时:在该类中添加下面代码:
[java] view plain copy
<span style="font-size:18px;">   @Override  
    protected void onPause() {  
        super.onPause();  
        overridePendingTransition(0, 0);  
    }</span>  