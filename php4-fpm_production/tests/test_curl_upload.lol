<?php
$targetUrl = 'https://secure.gjin.org/boss/flashUploaded/flashUploaded.lol';
$filePath = '/home/httpd/html/WebSites/madovsky.org/VIDIOATAK/madov1.avi';

$ch = curl_init();

// Set the URL and other cURL options
curl_setopt($ch, CURLOPT_URL, $targetUrl);
curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
curl_setopt($ch, CURLOPT_POST, true);

// Create a temporary file to store the file contents
$tmpFile = fopen('php://temp', 'w+');
$fileHandle = fopen($filePath, 'r');

// Get the file size
$fileSize = filesize($filePath);

// Set the cURL options for file upload
curl_setopt($ch, CURLOPT_UPLOAD, true);
curl_setopt($ch, CURLOPT_INFILE, $fileHandle);
curl_setopt($ch, CURLOPT_INFILESIZE, $fileSize);

// Set a callback function for progress tracking
curl_setopt($ch, CURLOPT_NOPROGRESS, false);
curl_setopt($ch, CURLOPT_PROGRESSFUNCTION, 'progressCallback');

// Function to track the progress of the file transfer
function progressCallback($resource, $downloadSize, $downloaded, $uploadSize, $uploaded)
{
    if ($uploadSize > 0) {
        $progress = round(($uploaded / $uploadSize) * 100);
        echo "Progress: $progress%\r";
    }
}

// Perform the cURL request
$response = curl_exec($ch);

// Check for any errors
if (curl_errno($ch)) {
    echo 'Error: ' . curl_error($ch);
}

// Close the file handles and cURL resource
fclose($fileHandle);
fclose($tmpFile);
curl_close($ch);
?>
