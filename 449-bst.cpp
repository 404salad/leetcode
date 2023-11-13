class Codec {
public:
    string strip(const string &inpt) {
        auto start_it = inpt.begin();
        auto end_it = inpt.rbegin();
        while (isspace(*start_it))
            ++start_it;
        while (isspace(*end_it))
            ++end_it;
        return string(start_it, end_it.base());
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        stringstream ss;
        queue<TreeNode*> q;
        if (root) {
            q.push(root);
            while (!q.empty()) {
                TreeNode* current = q.front(); q.pop();
                if (current != NULL) {
                    ss << current->val << " ";
                    q.push(current->left);
                    q.push(current->right);
                } else {
                    ss << "- ";
                }
            }
        }
        return ss.str();
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data.empty()) return nullptr;
        vector <string> doc;
        string word = "";
        for (auto e : data) {
            if (e == ' ') {
                doc.push_back(strip(word));
                cout << word;
                word = "";
            }
            word += e;
        }
        queue<TreeNode*> q;
        TreeNode* root;
        if (doc[0] != "-")
            root = new TreeNode(stoi(doc[0]));
        else
            return nullptr;
        q.push(root);
        int i = 1;
        cout << "docsize is > " << doc.size() << endl;
        while (i + 1 < doc.size() && !q.empty()) {
            cout << "running" << endl;
            TreeNode* current = q.front(); q.pop();
            if (i < doc.size() && doc[i] != "-") {
                current->left = new TreeNode(stoi(doc[i]));
                q.push(current->left);
            } else {
                current->left = nullptr;
            }
            i++;
            if (i < doc.size() && doc[i] != "-") {
                current->right = new TreeNode(stoi(doc[i]));
                q.push(current->right);
            } else {
                current->right = nullptr;
            }
            i++;
        }
        return root;
    }
};

