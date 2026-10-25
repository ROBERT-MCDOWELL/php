<?php

$ch = curl_init();
$fp = fopen("log.txt", "w");

curl_setopt($ch, CURLOPT_URL, "https://secure.boophone.com/test.lol");
curl_setopt($ch, CURLOPT_FILE, $fp);
curl_setopt($ch, CURLOPT_HEADER, 0);

curl_exec($ch);
if(curl_error($ch)) {
    fwrite($fp, curl_error($ch));
}
curl_close($ch);
fclose($fp);
?>
