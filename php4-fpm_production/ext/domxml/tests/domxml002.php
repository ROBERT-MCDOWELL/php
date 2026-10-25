<?php
require_once("domxml_test.inc");

$dom = xmldoc($xmlstr);
if(!$dom) {
  die('Error while parsing the document');
}

$children = $dom->children();
print_node_list($children);

?>
