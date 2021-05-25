# DesignPatterns

各个设计模式的详细介绍都已经完成，但是不经常用总会忘，所以我想用 `一句话` 总结设计模式，思考模式的真正意图，再用 `一点提示` 来思考代码如何实现

详细总结的可以搜索公众号：会偷懒的程序猿

## 编译环境

QT 版本： 5.7.1  MinGW 32bit

## 写在前面

我整理的设计模式这一个系列，主要是结合了以下几本书 :

- `《设计模式：可复用面向对象软件的基础》` ： 个人觉得如果想系统学习设计模式必须看的一本书，阅读是有一定难度的，但是它有很多其他书没有涉及到细节介绍
- `《大话设计模式》` ： 设计模式入门必看的书籍，用对话的形式以及很多形象的例子很生动的介绍各个设计模式，就一句话，看着不累的书就很厉害
- `《head first 设计模式》` 和 `《设计模式之禅》` 等： 个人是将这些做补充的来看的，在阅读前 2 本书出现一些疑惑的时候，这些书会以一些其他巧妙的角度带我加深理解

这些书怎么找 pdf 版本呢? 之前分享过 [私货](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247484488&idx=1&sn=bd685ee6a740794404f6533632d3b995&chksm=fdb132f9cac6bbef3d7abcb1eddc2f8b152df41065a87dd9dc6b8464b0a620b8d0de848b596e&scene=21#wechat_redirect) ，我也是在上面直接搜索下载的~

接下来将按设计模式目的分类，逐个`一句话` 和 `一点提示` 总结设计模式，如果发现对某种设计模式记忆不清晰或者说有什么疑惑，可以直接跳转到该设计模式的详细介绍中再回味一下~

> 注意：我整理的设计模式代码实现部分使用的语言是 `C++`

## 创建型模式

- [简单工厂模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247483787&idx=1&sn=7b0973157ed92acad41519f016f88113&chksm=fdb1373acac6be2c3f8a0fa0036269a05264d9466a00d434c84d7840a7ee2a0acdba20d617bd&scene=21#wechat_redirect) (`SimpleFactory`)  
  提供创建对象的接口  
  通过专门定义一个类来负责创建其他类的实例，被创建的实例通常都具有共同的父类
  
- [工厂方法模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247483787&idx=2&sn=68aad90b00c9008db9cf1ee75c9ad6d0&chksm=fdb1373acac6be2cc3db0b0ac0841763d402a143c909d8e30ace5d0c99a61727c72cebcd23dc&scene=21#wechat_redirect) (`FactoryMethod`)  
  定义一个用于创建对象的接口，让子类决定实例化哪一个类  
  继承抽象工厂的具体工厂重载父类创建产品的接口，返回它自己对应具体产品

- [抽象工厂模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247483796&idx=1&sn=7f0201f3815947fb59c6a07e5a904067&chksm=fdb13725cac6be33a8d93a0126f2b2273d34079fd0d12753ab265a2c8ca13f9e4c99c0ffc61c&scene=21#wechat_redirect) (`AbstractFactory`)  
  提供一个创建一系列或相关依赖对象的接口，而无需指定它们具体的类  
  `A` 风格的具体工厂重载抽象工厂提供创建继承基类的 `widget` 的 `awidget` 和继承基类的 `label` 的 `alabel` 等等对象接口  
  `B` 风格的具体工厂重载返回 `bwidget` 和 `blabel` 等等对象

- [单例模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247483773&idx=1&sn=aa02ced8c25aac6eeea9d9dd44572463&chksm=fdb137cccac6bedad35eb1527cbb462013cebfe8790b0aef7d5c518c9e97234d53d4587d70d7&scene=21#wechat_redirect)  (`Singleton`)  
  保证一个类仅有一个实例，并提供一个访问它的全局访问点。  
  需要统一管理资源或者资源共享的时候都可以使用单例模式  
  (饿汉模式，懒汉模式)

  ```c++
  // C++ 11 推荐方式，局部静态变量
  static Singleton& getInstance()
  {
    static Singleton value;
    return value;
  }
  ```

- [建造者模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247483808&idx=1&sn=122486fd98b66187da1513c17685835f&chksm=fdb13711cac6be07645672e9dac917623f8e77af6f40184ac7e0e0e23f54726887753b7d0eae&scene=21#wechat_redirect)  (`Builder`)  
  将一个复杂对象的构建与它的表示分离，使得同样的构建过程可以创建不同的表示  
  指挥者在收到一个待构建对象后，由指挥者决定具体构建过程，当然指挥者可以根据实际情况扩展不同的子类

- [原型模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247483848&idx=1&sn=d9afbb9b93479d5aaaa9b2ab554bbecc&chksm=fdb13779cac6be6f1c048593bee824952f2e48d2bbaa8bb8aa740b97bcd265b82761e31fe600&scene=21#wechat_redirect)  (`Prototype`)  
  用原型实例指定创建对象的种类，并且通过拷贝这些原型创建新的对象  
  原对象提供类似 `clone()` 接口，直接获取一个克隆对象

## 结构型

- [适配器模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247483858&idx=1&sn=6aab6bf49e0c9b48bb728bd1d9f91ee5&chksm=fdb13763cac6be75f2003bc4c578d8169dc759da22d6071b59ce045fff567dbaf078dcf62385&scene=21#wechat_redirect)  (`Adapter`)  
  将一个类的接口转换成客户希望的另一个接口  
  适配器模式使得原本由于接口不兼容而不能一起工作的那些类可以一起工作

- [代理模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247483895&idx=1&sn=00e35b3a3f49198e89b8f7e4a516ed87&chksm=fdb13746cac6be50540b941b2fad575c3e02e1c77d2c8a4f5a04e119d808711fb765fc8be742&scene=21#wechat_redirect) (`Proxy`)  
  为其他对象提供一种代理以控制对这个对象的访问  
  通过增加中间层(代理层)，代理类和真正的对象都继承自相同的基类，客户调用代理类，代理类根据实际情况来操纵真正的对象

- [桥接模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247483904&idx=1&sn=d8db289daad9dc7868dcf227b1cc1b49&chksm=fdb134b1cac6bda744a288a46a58abf5d8f55dbfc3dc7cc8d4cb5d2db18a579628948b7b9432&scene=21#wechat_redirect)  (`Bridge`)  
  将抽象部分与它的实现部分分离，使它们都可以独立地变化。  
  需要跨越多个平台的图形和窗口系统上， 例如: 封装好 `绘图` 的基类， 基于 `windows` 或者 `linux` 等等实现自己的 `绘图` 子类， `图形` 的基类使用 `绘图` 基类提供的接口绘制， 在此基础上可以实现 `三角形` 和 `正方形` 等等基于 `图形` 的子类

- [外观模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247484050&idx=1&sn=abbdd49ec4dfd6c6d43e8f315ee4aa0e&chksm=fdb13423cac6bd355fe9240c06c7b111aca0cebea188ebcb0ef0dc3e2959d7b7d3902b20c710&scene=21#wechat_redirect)  (`Facade`)  
  为子系统中的一组接口提供一个一致的界面，外观模式定义了一个高层接口，这个接口使得这一子系统更加容易使用  
  将一些复杂模块的代码进行封装从而对客户隐藏具体细节，并且提供给客户更简洁的接口

- [装饰模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247484031&idx=1&sn=8b84e60e9416b01cf69179fe2acdbd52&chksm=fdb134cecac6bdd8385edd790a1f179fae4d886b778895c2545b972b879b7a3c60b737a0f40e&scene=21#wechat_redirect)  (`Decorator`)  
  动态地给一个对象添加一些额外的职责  
  小姐姐: 我的奶茶加冰加奶盖

- [组成模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247483928&idx=1&sn=fb4f4c96c337a5cd910067a2c56cd025&chksm=fdb134a9cac6bdbf5811bc61ae622d2c664c3c298be5601165cb4bb7c7a540ddb6e4821415ae&scene=21#wechat_redirect)  (`Composite`)  
  将对象组合成树形结构以表示 “部分-整体” 的层次结构。组成模式使得用户对单个对象和组合对象的使用具有一致性  
  文件系统下文件管理系统

- [享元模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247484187&idx=1&sn=307eab23e6ddda1ffec3bd698c0ef974&chksm=fdb135aacac6bcbcc099a13a8bfeb287609c455489addbe50e3c3418048326f9617ea88d6d52&scene=21#wechat_redirect)  (`Flyweight`)  
  运用共享技术有效地支持大量细粒度的对象  
  `享元池`，用户需要对象时，首先从 `享元池` 中获取，如果享元池中不存在，则创建一个新的享元对象返回给用户，并在享元池中保存该新增对象。

## 行为型

- [策略模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247484098&idx=1&sn=0fe4325c4e62bb3f88f6d930b07326af&chksm=fdb13473cac6bd65d71d5103e3e2ea469ed1c4ce1fce3395fbd873519e21a9d37745a8aa714b&scene=21#wechat_redirect)  (`Strategy`)  
  将可以互换的行为封装起来，然后使用 “委托” 的方法，决定使用哪一种行为  
  新用户立减 10 元， 老用户 9 折， 会员 8 折

- [命令模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247484202&idx=1&sn=d8b1d2845c4cfc4e121ce50cfe5309ef&chksm=fdb1359bcac6bc8dc8cce8b481dd52a88bf51b1f03be45283e1c378b264189dfc6f6a55b24b9&scene=21#wechat_redirect)  (`Command`)  
  将一个请求封装为一个对象，从而使你可以用不同的请求对客户进行参数化；对请求排队或记录请求日志，以及支持可撤销的操作  
  小明妈妈让小张给小明带句话少玩会儿， 早点回家吃饭， 小张刚转身准备去喊，小明妈妈说算了算了，你们玩的开心就好

- [模板方法](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247484152&idx=1&sn=fc3dd239c6c486fa0c619d6e6e57dbeb&chksm=fdb13449cac6bd5f37664635435e720b47cf64e7c730e9fbb432aa626820c7a54fb4ace752fd&scene=21#wechat_redirect)  (`Template`)  
  由子类决定如何实现算法的某些步骤  
  出题人把题目出好了， 写答案的位置也留白出来了， 轮到你们答一答了

- [观察者模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247483725&idx=1&sn=87bc1371e4c431711b9105aeebef9123&chksm=fdb137fccac6beea5680daa8150d960102d99c25cebad8b50b2092462f5297818984ecf34511&scene=21#wechat_redirect)  (`Observer`)  
  当对象间存在一对多的依赖关系时，让多个观察者对象同时监听某一个主题对象，这个主题对象在状态发生改变时，会通知所有的观察者对象，使它们能够自动更新自己  
  前台漂亮的小姐姐， 我把手机号码给你了，老板来了，你可要给我打电话啊!

- [发布订阅模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247483735&idx=1&sn=7ea7831aefb12cfbd8a0b6a15173e6b9&chksm=fdb137e6cac6bef0f97e4705494a30e3a8d80663d7f4572068c2eba352fc064f1f300a17e40b&scene=21#wechat_redirect) (`Publish/Subscribe`)  
  在观察者模式的基础上进一步解耦合，引入中间件管理复杂的消息分发的规则， 并将状态的改变抽象成任务的发布  
  `rabbitmq` 等消息中间件

- [解释器模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247484251&idx=1&sn=48c251bfcd06434a3a206f2f78c31d2e&chksm=fdb135eacac6bcfc9407372d7f487c45f41c8d4858a72addc0687232d42d89a07d8c63ec2e27&scene=21#wechat_redirect)  (`Interpreter`)  
  给定一个语言，定义它的文法的一种表示，并定义一个解释器，这个解释器使用该表示来解释语言中的句子  
  数字的乐谱转换成标准乐谱

- [职责链模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247484295&idx=1&sn=9cf77800adc36dd8762572f030b4dec0&chksm=fdb13536cac6bc206bd38522dd7f424cd2347cb3024b5b2de4980e7bd30a863abcafea58d0b9&scene=21#wechat_redirect)  (`Chain Of Responsibility`)  
  使多个对象都有机会处理请求，从而避免请求的发送者和接收者之间的耦合关系。将这些对象连成一条链，并沿着这条链传递该请求，直到有一个对象处理它为止  
  -- [组长，我想请5天假? -- [我没权利批准，我去帮你问问我上级~

- [备忘录模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247484334&idx=1&sn=e90ef60682731a81e6e120bd6f155f2a&chksm=fdb1351fcac6bc096ec9ca442d9b6391bc29494cccd6f100d2d7f04e0abf4b9d8234abf10233&scene=21#wechat_redirect)  (`Memento`)  
  在不破坏封装性的前提下，捕获一个对象的内部状态，并在该对象之外保存这个状态，这样以后就可将该对象恢复到原先保存的状态  
  从需要备份的对象中生成一个保存关键数据的备忘录对象，需要恢复的时候，传入这个备忘录对象来还原状态
  
- [中介者模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247484395&idx=1&sn=f164a907dc7e20e80e10a2506db73c80&chksm=fdb1355acac6bc4cd625cf8cfc6aef43bbd32a5e3cc4c6e1bbbc29611b241a1af461a09f17df&scene=21#wechat_redirect)  (`Mediator`)  
  控制和协调一组对象间的交互，中介者充当一个中介以使组中的对象不再相互显式引用，这些对象仅知道中介者，从而减少相互连接的数目  
  图像化界面一个按键的点击会出现弹窗等等行为

- [状态模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247484428&idx=1&sn=8627720969effe6ed36a8763e601c1f3&chksm=fdb132bdcac6bbab7aa19300ab1779702f08523774aa046a3927e6962b00d888577493ca72ff&scene=21#wechat_redirect)  (`State`)  
  封装基于状态的行为，并将行为委托到当前状态  
  红绿灯切换

- [迭代器模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247484483&idx=1&sn=011a552c752b87cbc1bb4d439b740ad9&chksm=fdb132f2cac6bbe4f37d58d981e592df4c34caacc3f73565e0aa821a14896af87c72c673a8d9&scene=21#wechat_redirect)  (`Iterator`)  
  提供一种方法顺序访问一个聚合对象中各个元素， 而又不需暴露该对象的内部表示  
  想想 `std::list` 等标准库中的源码实现

- [访问者模式](http://mp.weixin.qq.com/s?__biz=MzU4Mjk1MTkwMg==&mid=2247484466&idx=1&sn=89d2496a641b899f44767b8cd8e68c70&chksm=fdb13283cac6bb95d168fdae3ec4eca4c8de7d8754225eff886f7f36dae32bad0705a0c043d2&scene=21#wechat_redirect)  (`Visitor`)  
  表示一个作用于某对象结构中的各元素的操作。它使你可以在不改变各元素的类的前提下定义作用于这些元素的新操作  
  将基于共同基类的不同子类元素提供的各种功能抽象成 `accept(Visitor *)` 接口， `Visitor` 来封装这些真正的行为

## 小结

如果可以从这么简单的提醒就能完整的想象出具体的代码实现，那么我的目的就实现了  
最后希望大家都能在实际项目灵活的使用这些设计模式，提高代码的可读性和扩展性，当然切记不要硬套~

所以，所以要个 `赞`，要个 `再看` 不过分吧~
