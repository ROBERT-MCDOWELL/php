<?php
$private_key = openssl_pkey_new();
$public_key_array = openssl_pkey_get_details($private_key);
echo $public_key_array['key'];
$public_key = openssl_pkey_get_public($public_key_array['key']);
var_dump($public_key);
?>
