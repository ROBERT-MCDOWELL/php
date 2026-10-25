<?php
error_reporting(E_ALL);
ini_set('display_errors', 1);

// Create a blank image
$im = imagecreate(100, 100);

// Allocate some colors
$white = imagecolorallocate($im, 255, 255, 255);
$red   = imagecolorallocate($im, 255, 0, 0);
$green = imagecolorallocate($im, 0, 255, 0);
$blue  = imagecolorallocate($im, 0, 0, 255);

// Draw a rectangle
imagerectangle($im, 10, 10, 90, 90, $red);

// Now output to files
echo "Testing output to files:\n";
// Output PNG to memory (using output buffering)
echo "Testing PNG memory output:\n";
ob_start();
$ok = imagepng($im);
$data_png = ob_get_clean();
if ($ok && $data_png !== false) {
        echo "PNG memory output OK. Size: " . strlen($data_png) . " bytes\n";
} else {
        echo "Failed to output PNG to memory.\n";
}
if(imagepng($im, 'test_output.png')) {
	echo "PNG saved to test_output.png\n";
}else{
	echo "PNGS not saved!\n";
}

// Output GIF to memory
echo "Testing GIF memory output:\n";
ob_start();
imagegif($im);
$data_gif = ob_get_clean();
if ($ok && $data_gif !== false) {
        echo "GIF memory output OK. Size: " . strlen($data_png) . " bytes\n";
} else {
        echo "Failed to output JPEG to memory.\n";
}
if(imagegif($im, 'test_output.gif')) {
        echo "GIF saved to test_output.gif\n";
}else{
        echo "GIF not saved!\n";
}

// Output JPEG to memory (using output buffering)
echo "Testing JPEG memory output:\n";
ob_start();
$ok = imagejpeg($im, NULL, 90);
$data_jpeg = ob_get_clean();
if ($ok && $data_jpeg !== false) {
        echo "JPEG memory output OK. Size: " . strlen($data_jpeg) . " bytes\n";
} else {
        echo "Failed to output JPEG to memory.\n";
}
if(imagejpeg($im, 'test_output.jpg', 90)) {
	echo "JPEG saved to test_output.jpg\n";
}else{
	echo "JPEG not saved\n";
}

imagedestroy($im);
?>

