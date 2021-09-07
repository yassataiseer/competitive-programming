
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None       
    def __repr__(self):
        return self.data

class LinkedList:
    def __init__(self):
        self.head = None
    def __repr__(self):
        node = self.head
        nodes = []
        while node is not None:
            nodes.append(node.data)
            node = node.next
        nodes.append("None")
        return "->".join(nodes)
    def add(self,value):
        new_node = Node(value)
        new_node.next = self.head
        self.head = new_node
    def reverse(self):
        prev = None
        current_value = self.head
        while (current_value is not None):
            next_value = current_value.next
            current_value.next = prev
            prev = current_value
            current_value = next_value
        self.head = prev
llist = LinkedList()

llist.add("a")
llist.add("b")
llist.add("c")

print(llist)

llist.reverse()
print(llist)

'''
first_node = Node("a")
llist.head = first_node
print(llist)

second_node = Node("b")
first_node.next = second_node
print(llist)

third_node = Node("c")
second_node.next= third_node
print(llist)
'''






