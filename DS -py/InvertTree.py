def invert_tree(root):
  """Inverts a binary tree.

  Args:
    root: The root node of the binary tree.

  Returns:
    The inverted binary tree.
  """
  if not root:
    return None

  left = invert_tree(root.left)
  right = invert_tree(root.right)

  root.left = right
  root.right = left

  return root
