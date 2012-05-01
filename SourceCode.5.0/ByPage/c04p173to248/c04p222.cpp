// delete the node to which cur points
(cur->precede)->next = cur->next;
(cur->next)->precede = cur->precede;
