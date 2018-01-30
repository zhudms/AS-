#RecycleView

### 显示
1. 添加 Adapter 前必须先添加 Layoutmanager ,不然不显示
	
	```  
		view.setLayoutManager(new LinearLayoutManager(MainActivity.this));   
	```

###Adapter
1. extends RecyclerView.Adapter*<*ImagePicAdapter.MyHolder*>*,这里的泛型必须写对
2. ImagePicAdapter.MyHolder 是自定义类型, extends RecyclerView.ViewHolder,用法和以前一致
3. 相当于以前的 getView()

	```
	 @Override
	    public MyHolder onCreateViewHolder(ViewGroup parent, int viewType) {
	        View v = LayoutInflater.from(mContext).inflate(R.layout.pic_item, parent, false);
	        MyHolder holder = new MyHolder(v);
	        return holder;
	    }
	```
	
	```
	//布局
	    @Override
	    public void onBindViewHolder(MyHolder holder, int position) {
	
	            Glide.with(mContext)
	                    .load(picPaths.get(position))
	                                       .into(holder.getmPic());
	
	    }
	```
4. 获取数量

 ```
 @Override
    public int getItemCount() {
        return picPaths.size();
    }
```

### 配合 Gldle 使用
2. 直接使用会有滑动卡顿的问题(无法划到底部,惯性效果)
2. 优化卡顿

	+ 指定尺寸会流畅很多
	+ 不使用缓存也会有一定程度优化
	+ 在 View 不再显示在页面上时,停止对应的加载任务
	
			```
			@Override
			    public void onViewRecycled(MyHolder holder) {
			        super.onViewRecycled(holder);
			        Glide.with(mContext).clear(holder.itemView);
			//        ToastU.ht(mContext, "OnRecycled");}
			```

3. 处理滑动图片串位问题
	+  在 holder 中添加Tag字段,存储唯一标识(或使用 setTag(id,tag)方法也可以),并在 onBindViewHolder()方法中配合代码使用
	+  ```
//tag + 尺寸指定 + 占位符  解决图片串位问题(使用不修改尺寸属性无效),-->必须确定内存中缓存的是原始图片还是屏幕上显示的图片大小

            if (holder.getmTag() != null && holder.getmTag().equals(picPaths.get(position))) {//解决图片错位问题
                //此处判断必须和下面设置占位图一起使用才有效(只使用占位图而不指定图片大小时,在复用中会出现图片大小错位,持续滑动,最终会使所又能图片都变成占位图的大小)
                return;
            }
            holder.setmTag(picPaths.get(position));

            RequestOptions cropOptions = new RequestOptions();	
            		            cropOptions=cropOptions.placeholder(R.drawable.ic_launcher_foreground);  
            		            Glide.with(mContext)
                    .load(picPaths.get(position))
                    .apply(cropOptions)

                    .into(holder.getmPic());
                    }
                    ```
            
### Glide 用法
1.要在 RecycleView中显示占满宽度,需要在 item 的 ImageView 中添加属性**android:adjustViewBounds="true"**和**android:scaleType="fitCenter"**

```
            RequestOptions cropOptions = new RequestOptions();
//            cropOptions= cropOptions.fitCenter();//在 xml 中指定也可生效
            cropOptions= cropOptions.placeholder(R.drawable.ic_launcher_foreground);
            cropOptions=  cropOptions.dontAnimate();
            cropOptions=   cropOptions.dontTransform();
            cropOptions=   cropOptions.error(R.drawable.ic_launcher_background);

            cropOptions=    cropOptions.override(Target.SIZE_ORIGINAL);//(加上尺寸指定,滑动顺畅很多)只使用占位图而不指定图片大小时,在复用中会出现图片大小错位,持续滑动,最终会使所又能图片都变成占位图的大小

            Glide.with(mContext)
                    .load(picPaths.get(position))
                    .apply(cropOptions)

                    .into(holder.getmPic());
                    ```
                    
            		            


