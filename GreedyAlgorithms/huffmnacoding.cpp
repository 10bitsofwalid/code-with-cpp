#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of characters: ";
    cin >> n;

    char chars[100];
    int f[100];

    cout << "Enter the characters: ";
    for(int i=0; i<n; i++){
        cin >> chars[i];
    }

    cout << "Enter the frequencies: ";
    for(int i=0; i<n; i++){
        cin >> f[i];
    }

    priority_queue<Node*, vestor<Node*>, compare> pq;

    for(int i=0; i<n; i++){
        pq.push(new Node(chars[i], f[i]));
    }

    while(pq.size() > 1){
        
        Node* left = pq.top(); pq.pop();
        Node* right = pq.top(); pq.pop();

        Node* newNode = new Node('$', left->freq + right->freq);
        newNode->left = left;
        newNode->right = right;
        pq.push(newNode);

    }

    node* root = pq.top();
    cout << "\n" << "Huffman Codes: ";
    printCodes(root, " ");

    return 0;

}