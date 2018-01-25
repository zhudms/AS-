#ButterKnife
#### Activity
#### Fragment
```
    @Override
    public void onViewCreated(View view, @Nullable Bundle savedInstanceState) {
        super.onViewCreated(view, savedInstanceState);
        mUnbinder = ButterKnife.bind(this, view);

    }

    @Override
    public void onDestroyView() {
        super.onDestroyView();
        mUnbinder.unbind();

    }

```


#### RecycleView.Holoder
```
   public RecycleHolder(View itemView) {
        super(itemView);
        ButterKnife.bind(this, itemView);
    }
```





