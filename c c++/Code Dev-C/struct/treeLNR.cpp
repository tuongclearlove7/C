#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;
};

// Function to create a new node in the binary tree
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->value = value;
    newNode->left = NULL; 
    newNode->right = NULL;
    return newNode;
}

// Function to insert a value into the binary tree
Node* insertNode(Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    if (value < root->value) {
        root->left = insertNode(root->left, value);
    } else if (value > root->value) {
        root->right = insertNode(root->right, value);
    }
    return root;
}

// In-order traversal of the binary tree (Left-Node-Right)
void inOrderTraversal(Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        cout << root->value << " ";
        inOrderTraversal(root->right);
    }
}

// Function to search for a value in the binary tree
Node* searchNode(Node* root, int value) {
    if (root == NULL || root->value == value) {
        return root;
    }
    if (value < root->value) {
        return searchNode(root->left, value);
    }else{
    	 return searchNode(root->right, value);
    }
}

// Function to find the smallest value in the binary tree
Node* findMinimumValue(Node* root) {
    if (root == NULL || root->left == NULL) {
        return root;
    }
    return findMinimumValue(root->left);
}

Node* findMaximumValue(Node* root) {
    if (root == NULL || root->right == NULL) {
    	cout<<"value : "<<root->value<<endl;
    	
    	cout<<"check an lagest element in tree: "<<root->right<<endl;
    	cout<<"check an lagest element in tree: "<<root->left<<endl;
        return root;
    }
    return findMaximumValue(root->right);
}


// Function to delete a node from the binary tree
Node* deleteNode(Node* root, int value) {
    if (root == NULL) {
        return root;
    }
    if (value < root->value) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->value) {
        root->right = deleteNode(root->right, value);
    } else {
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = findMinimumValue(root->right);
		
        root->value = temp->value;
        
        root->right = deleteNode(root->right, temp->value);
        
    }
    return root;
}
bool isLeafNode(Node* node){
	return (node!=NULL && node->left==NULL &&node->right==NULL);
}
Node *deleteLeafNode(Node* root){
	if(root==NULL){
		return  NULL;
	}
	if(isLeafNode(root)){
		delete root;
		return NULL;
	}

	root->left=deleteLeafNode(root->left);
	root->right=deleteLeafNode(root->right);
	
	return root;
	
}

int main() {
    Node* root = NULL;
    
    root=insertNode(root, 6);
    insertNode(root, 10);
    insertNode(root, -3);
    insertNode(root, -4);
    insertNode(root, 0);
    //insertNode(root, -6);
    insertNode(root, 2);
    insertNode(root, 30);
    insertNode(root, 50);
    insertNode(root, 8);
    insertNode(root, 12);
    insertNode(root, 11);
    insertNode(root, 7);
//    insertNode(root, 9);
   
  
    cout << "In-order traversal of the binary tree: ";
    inOrderTraversal(root);
    cout << endl;

    int searchValue = 40;
    Node* searchResult = searchNode(root, searchValue);
    if (searchResult != NULL) {
        cout << "Found value " << searchValue << " in the binary tree." << endl;
    } else {
        cout << "Value " << searchValue << " not found in the binary tree." << endl;
    }

    Node* minNode = findMinimumValue(root);
    cout << "Smallest value in the binary tree: " << minNode->value << endl;

    int deleteValue = 100;
    root = deleteNode(root, deleteValue);
    cout << "Deleted value " << deleteValue << " from the binary tree." << endl;
    cout<<"Check after delete. "<<endl;
	 inOrderTraversal(root);
// -4 -3 0 2 6 7 8 11 12 30 50
    cout << "In-order traversal of the binary tree after deletion: ";
    inOrderTraversal(root);
    cout << endl;
    
    cout<<"check : ";
    findMaximumValue(root);
    
    cout<<"tree after deleting leafNode !";
    deleteLeafNode(root);
    cout<<endl;
    inOrderTraversal(root);

    return 0;
}
