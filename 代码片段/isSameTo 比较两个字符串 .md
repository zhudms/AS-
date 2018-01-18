 # isSameTo 比较两个字符串,避免 null 的问题
  
   /*将B 与A比较，返回是否与A相等（当A为空时，B 也要为空，区分Null，及""）(复写是因为String的equlas方法有b=null抛出异常的问题)*/
   ```
    private boolean isSameTo(String a,String b){
        if (a==null){
            if (b==null){
                return true;
            }else{
                return  false;
            }
        }else{
            if (b==null){
                return false;
            }else{
//                if (a.length()==b.length()){//String的equals方法有这步
                if (a.equals(b)){
                    return true;
                }else {
                    return false;
                }
//                }else{
//                    return false;
//                }
            }
        }
    }
    ```
