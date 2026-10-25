<?php

$data = '{"data":{"resource":{"id":53176838,"profile_id":16266737,"account_id":700042005,"type":"transfer"},"current_state":"waiting_recipient_input_to_proceed","previous_state":"incoming_payment_waiting","occurred_at":"2024-03-28T22:47:06Z"},"subscription_id":"ae79c82b-0802-422b-82fe-3b27eb12f32e","event_type":"transfers#state-change","schema_version":"2.0.0","sent_at":"2024-03-28T22:47:06Z"}';

$signature = 'fiUfQSIp6YKc7qdDv+OgFVB4peOFjKgx0Hj5UmHEGmJUBfR26XEBYZ+tFFPJJMob8DRwfMUNAgISJN7LheG0MnSSUNW3Maq2bAliGtx3vd7yMiS6SlnGlfuY8bzX7+5FF65t/TXq2eDLbdaLVG09LvaI2h6Ou/Mqp7eynbP5Yw1XUzeleDDuajt6egnr9SwH2K2+NoFmZjMxf4dsfyN+vS1eJi4ESFJ1us0mxQgRiJCcyBu4s+TNp2jQnu8vdGrygfC1adD5zNtFnbrcQo6wReOkTnOG3Ojw2yazmF/JxL42/H9au2k1/3k5YPYIk7DKwbH7F26ymoGGz8zDVuDM0Q=='; 

$signature = base64_decode($signature);

// Public Key (This is just for demonstration, you need to replace it with a valid public key)
$publicKey = <<<EOD
-----BEGIN PUBLIC KEY-----
MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAwpb91cEYuyJNQepZAVfP
ZIlPZfNUefH+n6w9SW3fykqKu938cR7WadQv87oF2VuT+fDt7kqeRziTmPSUhqPU
ys/V2Q1rlfJuXbE+Gga37t7zwd0egQ+KyOEHQOpcTwKmtZ81ieGHynAQzsn1We3j
wt760MsCPJ7GMT141ByQM+yW1Bx+4SG3IGjXWyqOWrcXsxAvIXkpUD/jK/L958Cg
nZEgz0BSEh0QxYLITnW1lLokSx/dTianWPFEhMC9BgijempgNXHNfcVirg1lPSyg
z7KqoKUN0oHqWLr2U1A+7kqrl6O2nx3CKs1bj1hToT1+p4kcMoHXA7kA+VBLUpEs
VwIDAQAB
-----END PUBLIC KEY-----
EOD;

#$publicKeyID = openssl_pkey_get_public($publicKey);
#$publicKeyArray = openssl_pkey_get_details($publicKeyID);

// Verify the signature
$result = openssl_verify($data, $signature, $publicKey, OPENSSL_ALGO_SHA256);

// Check the result
if ($result === 1) {
    echo "Signature is valid!";
} elseif ($result === 0) {
    echo "Signature is invalid!";
} else {
    echo "An error occurred while verifying the signature. result: ".$result;
}
?>
