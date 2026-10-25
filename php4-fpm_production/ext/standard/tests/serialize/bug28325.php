<?php
class a {
	var $b;
}
class b {
	var $c;
}
class c {
	var $d;
}
$a = new a();
$a->b = new b();
$a->b->c = new c();
$a->b->c->d = $a;
var_dump(unserialize(serialize($a)));
?>
