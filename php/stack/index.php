<?php

include 'class/Node.php';
include 'class/Stack.php';

$stack = new Stack();
$stack->put("Mark");
$stack->put("Mira");
$stack->put("Mike");

echo $stack->get() . "<br>\n";
echo $stack->get() . "<br>\n";
echo $stack->get() . "<br>\n";
echo $stack->get() . "<br>\n";
