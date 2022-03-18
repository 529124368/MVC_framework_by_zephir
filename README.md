# MVC_framework_by_zephir
通过zephir实现的一个简单地MVC框架

# 安装方法

1. 下载c代码
2. phpize
3. ./configure --with-php-config= your php-config
4. make && make install


# 目录结构

```
├──app
  ├── conf
  ├── controllers
  │   └── user.php
  ├── models
  └── views
├──index.php
```
index.php 入口
```PHP
<?php
$application = dirname(__FILE__);
$d = new \Lsz\Zimuge($application);
$d->run();

```

user.php 控制器

```PHP
<?php
class user extends Lsz\Controller\LszController_Abstract {
    public function __construct() {
    }
    public function init() {
    }
    public function updateAction() {
        $res = array(
            "status"=>"ok",
            "msg"=>"update success",
            "data"=>"nothing",
        );
        echo json_encode($res);
    }
    public function delAction() {
        $res = array(
            "status"=>"ok",
            "msg"=>"delete success",
            "data"=>"nothing",
        );
        echo json_encode($res);
    }
    public function addAction() {
        $res = array(
            "status"=>"ok",
            "msg"=>"add success",
            "data"=>"nothing",
        );
        echo json_encode($res);
    }
    public function indexAction() {
        echo "welcome zimuge framework";
    }
}
```

访问方法
http://xxxxxxxx/控制器名/方法名（不带Action）
