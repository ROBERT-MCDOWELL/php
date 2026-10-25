<?php
require_once("domxml_test.inc");

$dom = xmldoc($xmlstr);
if(!$dom) {
  die('Error while parsing the document');
}
var_dump($dom);
?>
