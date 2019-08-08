给iterator添加默认方法，需要在目标方法前加default关键字，就可以添加方法体了，否责则为抽象方法

interface Iterator<T>{
    boolean hasNext();
    T next();
    default void remove(){
        throw new UnsupportedOerationException();
    }
}