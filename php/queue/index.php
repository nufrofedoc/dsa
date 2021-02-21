<?php

include 'class/Node.php';
include 'class/Sequence.php';
include 'class/Queue.php';

$queue = new Queue();
$queue->put("Angoo");
$queue->put("Anry");
$queue->put("Amanda");

echo $queue->get() . "<br>\n";
echo $queue->get() . "<br>\n";
echo $queue->get() . "<br>\n";
