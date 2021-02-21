<?php

abstract class Sequence {

    abstract public function put(string $item) : void;
    abstract public function get() : ?string;
    abstract public function isEmpty() : bool;

}
