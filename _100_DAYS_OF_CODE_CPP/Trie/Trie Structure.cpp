class TrieNode{
public:
    TrieNode* child[26];
    bool isTerminal;
    TrieNode(){
        isTerminal=false;
        for(int i=0;i<26;i++) child[i]=NULL;
    }
};


class Trie {
public:
    TrieNode* root;
    Trie() {
        root=new TrieNode();
    }
    
    void insert(string word) {
        if(word.size()==0){
            root->isTerminal=true;
            return;
        }
        TrieNode* head=root;
        for(int i=0;i<word.size();i++){
            int index=word[i]-'a';
            if(head->child[index]==NULL) head->child[index]=new TrieNode();
            head=head->child[index];
        }
        head->isTerminal=true;
    }
    
    bool search(string word) {
        TrieNode* head=root;
        for(char ch:word){
            int index=ch-'a';
            if(head->child[index]==NULL) return false;
            head=head->child[index];
        }
        return head->isTerminal;
    }
    
    bool startsWith(string prefix) {
        TrieNode* head=root;
        for(char ch:prefix){
            int index=ch-'a';
            if(head->child[index]==NULL) return false;
            head=head->child[index];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
