/** 
 * 下划线 
 *  
 * @param textView 
 */  
private void addButtomLine(TextView textView) {  
    textView.getPaint().setFlags(Paint.UNDERLINE_TEXT_FLAG);  
}  
  
/** 
 * 移除线 
 *  
 * @param textView 
 */  
private void removeLine(TextView textView) {  
    textView.getPaint().setFlags(0); // 取消设置的的划线  
  
}  
  
/** 
 * 设置中划线并加清晰 
 *  
 * @param textView 
 */  
private void addLine(TextView textView) {  
    textView.getPaint().setFlags(  
            Paint.STRIKE_THRU_TEXT_FLAG | Paint.ANTI_ALIAS_FLAG); // 设置中划线并加清晰  
  
}  
  
/** 
 * 中划线 
 *  
 * @param textView 
 */  
private void addCenterLine(TextView textView) {  
    textView.getPaint().setFlags(Paint.STRIKE_THRU_TEXT_FLAG); // 中划线  
}  
  
/** 
 * 抗锯齿 
 *  
 * @param textView 
 */  
private void addjuchiLine(TextView textView) {  
    textView.getPaint().setAntiAlias(true);// 抗锯齿  
}  