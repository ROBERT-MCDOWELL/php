<?php
require_once("domxml_test.inc");

echo "Test 1: accessing single nodes from php\n";
$dom = xmldoc($xmlstr);
if(!$dom) {
  echo "Error while parsing the document\n";
  exit;
}

// children() of of document would result in a memleak
//$children = $dom->children();
//print_node_list($children);

echo "--------- root\n";
$rootnode = $dom->root();
print_node($rootnode);

echo "--------- children of root\n";
$children = $rootnode->children();
print_node_list($children);

// The last node should be identical with the last entry in the children array
echo "--------- last\n";
$last = $rootnode->last_child();
print_node($last);

// The parent of this last node is the root again
echo "--------- parent\n";
$parent = $last->parent();
print_node($parent);

// The children of this parent are the same children as one above
echo "--------- children of parent\n";
$children = $parent->children();
print_node_list($children);

echo "--------- creating a new attribute\n";
//This is worthless
//$attr = $dom->create_attribute("src", "picture.gif");
//print_r($attr);

//$rootnode->set_attribute_node($attr); /* Not implemented */
$attr = $rootnode->set_attribute("src", "picture.gif");
$attr = $rootnode->get_attribute("src");
print_r($attr);
print "\n";

echo "--------- Get Attribute Node\n";
$attr = $rootnode->get_attribute_node("src");
print_node($attr);

echo "--------- Remove Attribute Node\n";
$attr = $rootnode->remove_attribute("src");
print "Removed " . $attr . " attributes.\n";

echo "--------- attributes of rootnode\n";
$attrs = $rootnode->attributes();
print_node_list($attrs);

echo "--------- children of an attribute\n";
$children = $attrs[0]->children();
print_node_list($children);

echo "--------- Add child to root\n";
$newchild = $rootnode->new_child("Silly", "Symphony");
print_node($newchild);
print $dom->dumpmem();
print "\n";

echo "--------- Find element by tagname\n";
echo "    Using dom\n";
$children = $dom->get_elements_by_tagname("Silly");
print_node_list($children);
echo "    Using elem\n";
$children = $rootnode->get_elements_by_tagname("Silly");
print_node_list($children);

echo "--------- Unlink Node\n";
print_node($children[0]);
//domxml_node_unlink_node($children[0]);
$children[0]->unlink_node();
print_node_list($rootnode->children());
print $dom->dumpmem();

echo "--------- Find element by id\n";
print ("Not implemented\n");

echo "--------- Check various node_name return values\n";
print ("Not needed\n");

?>
