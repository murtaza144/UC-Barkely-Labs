#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
  /* TODO: Implement ll_has_cycle */
    if (head == NULL) return 0;  // If list is empty, it doesn't have a cycle

    node *slow_ptr = head, *fast_ptr = head->next;  // Initialize pointers

    while (fast_ptr != NULL && fast_ptr->next != NULL) {
        if (fast_ptr == slow_ptr) return 1;  // Cycle found

        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;
    }

    return 0;  // No cycle found
}

