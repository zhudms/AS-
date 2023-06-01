1.Kotlin中扩展类编译后变成静态方法，不支持多态。下例最后输出Animal。
>open class Animal
>
>class Dog : Animal()
>
fun Animal.name() = "animal"
>
>fun Dog.name() = "dog"
>
>fun Animal.printName(anim: Animal) {
 println(anim.name())
}
>
>fun main(args: Array<String>) {
 Dog().printName(Dog())
}