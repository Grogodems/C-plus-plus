template <typename T>
class TreeNode {
public:
    T data;
    TreeNode<T>* left;
    TreeNode<T>* right;

    TreeNode(T data) {
        this->data = data;
        left = right = nullptr;
    }ô
};

template <typename T>
class BinaryTree {
private:
    TreeNode<T>* root;

    void addHelper(TreeNode<T>* node, T data) {
        if (data < node->data) {
            if (node->left == nullptr) {
                node->left = new TreeNode<T>(data);
            }
            else {
                addHelper(node->left, data);
            }
        }
        else {
            if (node->right == nullptr) {
                node->right = new TreeNode<T>(data);
            }
            else {
                addHelper(node->right, data);
            }
        }
    }

    void printHelper(TreeNode<T>* node) {
        if (node == nullptr) {
            return;
        }
        printHelper(node->left);
        cout << node->data << " ";
        printHelper(node->right);
    }

    TreeNode<T>* findMinNode(TreeNode<T>* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    TreeNode<T>* removeHelper(TreeNode<T>* node, T data) {
        if (node == nullptr) {
            return nullptr;
        }
        if (data < node->data) {
            node->left = removeHelper(node->left, data);
        }
        else if (data > node->data) {
            node->right = removeHelper(node->right, data);
        }
        else {
            if (node->left == nullptr && node->right == nullptr) {
                delete node;
                node = nullptr;
            }
            else if (node->left == nullptr) {
                TreeNode<T>* temp = node->right;
                delete node;
                node = temp;
            }
            else if (node->right == nullptr) {
                TreeNode<T>* temp = node->left;
                delete node;
                node = temp;
            }
            else {
                TreeNode<T>* temp = findMinNode(node->right);
                node->data = temp->data;
                node->right = removeHelper(node->right, temp->data);
            }
        }
        return node;
    }

public:
    BinaryTree() {
        root = nullptr;
    }

    void add(T data) {
        if (root == nullptr) {
            root = new TreeNode<T>(data);
        }
        else {
            addHelper(root, data);
        }
    }

    void remove(T data) {
        root = removeHelper(root, data);
    }

    void print() {
        printHelper(root);
        cout << endl;
    }