## PHP 5.6.40 and PHP-FPM 4.4.9 suhosin official sources patched with openssl-1.1.1, openssl-3.x and compatible with Apache-2.4+

You just need to download the tar.xz package and compile it as usual,
it will work smoothly on the modern OS with
openssl-3.x as default SSL libraries.

php-4.4.9 has been optimized for performance and compilation error free and surprisingly
comparable to php8. security bugs have been fixed also.

Please look at config.status (php4) and config.log (php5) to have an idea of how to compile php4/5 in FPM mode.

note about PHP4: if the compile option cli is used both fpm and cli will be compiled and installed automatically
it is patched to be compatible with openssl-3.x

note about PHP5: Once compiled and installed you have to copy manually the php cli to the bin folder.
it is patched to be compatible with openssl-1.1.x and no more update will be done, unless if there is a demand.
