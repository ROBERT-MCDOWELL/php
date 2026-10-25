<?php
$document = domxml_new_doc('1.0');
$test = $document->create_element('test');
$j = 0;
for($i=0;$i<10;$i++)
{
	if( $j < 5 )
		$j = $i;
	$test->append_child($document->create_attribute("key$j", $i));
}
$document->append_child($test);
echo $document->dump_mem(1);
?>
