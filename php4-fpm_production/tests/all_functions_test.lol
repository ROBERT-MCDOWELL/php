<?php
echo "PHP 4.4.9 Built-in and Extension Function Test\n";
echo "==============================================\n";

$functions = get_defined_functions();
$all = $functions['internal'];
sort($all);

$total  = 0;
$passed = 0;
$failed = 0;

foreach ($all as $func) {
	$total++;
	echo str_pad($func, 40, ' ');

	if (!function_exists($func)) {
		echo "MISSING\n";
		$failed++;
		continue;
	}

	// Basic safe default args for common functions
	$args = array();
	switch ($func) {
		case 'strlen':
		case 'strtolower':
		case 'strtoupper':
		case 'trim':
			$args = array("abc");
			break;

		case 'strpos':
		case 'strstr':
		case 'strrpos':
			$args = array("hello", "e");
			break;

		case 'round':
		case 'floor':
		case 'ceil':
			$args = array(1.5);
			break;

		case 'in_array':
			$args = array("a", array("a", "b"));
			break;

		case 'array_key_exists':
			$args = array("x", array("x" => 123));
			break;

		case 'fopen':
			$args = array(__FILE__, "r");
			break;

		case 'fread':
			$args = array(@fopen(__FILE__, "r"), 10);
			break;

		case 'file_exists':
		case 'is_file':
		case 'is_dir':
			$args = array(__FILE__);
			break;

		case 'date':
			$args = array("Y-m-d");
			break;

		case 'microtime':
			$args = array(1);
			break;

		default:
			$args = array(); // no args
			break;
	}

	// Run test using output buffering to suppress any output
	ob_start();
	$ok = false;
	@call_user_func_array($func, $args);
	$error = ob_get_clean();

	if ($error === false || $error === '') {
		echo "OK\n";
		$passed++;
	} else {
		echo "FAILED\n";
		$failed++;
	}
}

echo "\nSummary:\n";
echo "Total  : $total\n";
echo "OK     : $passed\n";
echo "FAILED : $failed\n";
?>
