<?php
mb_internal_encoding("UTF-8");
mb_regex_encoding("UTF-8");

$text = "PHPはすごい。phpは強力です。123abc";

echo "=== mb_ereg ===\n";
if (mb_ereg("php", $text, $regs)) {
    echo "PASS: Match found - " . $regs[0] . "\n";
} else {
    echo "FAIL: No match found\n";
}

echo "=== mb_eregi ===\n";
if (mb_eregi("php", $text, $regs)) {
    echo "PASS: Match found (case-insensitive) - " . $regs[0] . "\n";
} else {
    echo "FAIL: No match found\n";
}

echo "=== mb_ereg_replace ===\n";
$result = mb_ereg_replace("php", "PHP", $text);
if ($result !== false) {
    echo "PASS: Replacement result - " . $result . "\n";
} else {
    echo "FAIL: Replacement failed\n";
}

echo "=== mb_eregi_replace ===\n";
$result = mb_eregi_replace("php", "PHP", $text);
if ($result !== false) {
    echo "PASS: Replacement result - " . $result . "\n";
} else {
    echo "FAIL: Replacement failed\n";
}

echo "=== mb_split ===\n";
$parts = mb_split("[。、]", $text);
if (is_array($parts)) {
    echo "PASS: Split into " . count($parts) . " parts\n";
} else {
    echo "FAIL: mb_split failed\n";
}

echo "=== mb_ereg_search ===\n";
mb_ereg_search_init($text, "[a-z]+");
$match_count = 0;
while (($regs = mb_ereg_search_regs())) {
    echo "Match: " . $regs[0] . "\n";
    $match_count++;
}
if ($match_count > 0) {
    echo "PASS: Found $match_count matches\n";
} else {
    echo "FAIL: No matches found\n";
}

echo "=== mb_ereg_search_pos ===\n";
mb_ereg_search_init($text, "php");
$pos = mb_ereg_search_pos();
if ($pos !== false) {
    echo "PASS: Found match at position " . $pos[0] . ", length " . $pos[1] . "\n";
} else {
    echo "FAIL: mb_ereg_search_pos failed\n";
}

echo "=== mb_ereg_search_getregs ===\n";
mb_ereg_search_init($text, "[a-z]+");
mb_ereg_search();
$regs = mb_ereg_search_getregs();
if ($regs !== false) {
    echo "PASS: Found regs - " . implode(", ", $regs) . "\n";
} else {
    echo "FAIL: mb_ereg_search_getregs failed\n";
}

echo "=== mb_regex_encoding ===\n";
$enc = mb_regex_encoding();
echo "Current encoding: $enc\n";

echo "=== mb_regex_set_options ===\n";
$old_opts = mb_regex_set_options("i");
$new_opts = mb_regex_set_options($old_opts);
echo "Set options to 'i', restored to '$old_opts'\n";
?>

