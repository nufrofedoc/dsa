<?php

// Node structure
class Node {
    public $data;
    public $next;
}

class LinkedList {
    public $head;

    public function __construct() {
        $this->head = null;
    }

    // Add new element at the end of the list
    public function pushBack($newElement) {
        $newNode = new Node();
        $newNode->data = $newElement;
        $newNode->next = null;

        if ($this->head == null) {
            $this->head = $newNode;
        } else {
            $temp = new Node();
            $temp = $this->head;

            while ($temp->next != null) {
                $temp = $temp->next;
            }

            $temp->next = $newNode;
        }
    }

    // Display the content of the list
    public function printList() {
        $temp = new Node();
        $temp = $this->head;

        if ($temp != null) {
            echo "\nThe list contains: ";

            while ($temp != null) {
                echo $temp->data." ";
                $temp = $temp->next;
            }
        } else {
            echo "\nThe list is empty";
        }
    }

}

// Test the code
$myList = new LinkedList();

// Add three elements at the end of the list.
$myList->pushBack(10);
$myList->pushBack(20);
$myList->pushBack(30);
$myList->printList();














