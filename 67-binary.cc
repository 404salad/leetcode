class Solution {
public:
    char carry(char a,char b,char c){
        char r;
        if(a=='0' && b == '0'&& c=='0') r='0';
        if(a=='0' && b == '0'&& c=='1') r='0';
        if(a=='0' && b == '1'&& c=='0') r='0';
        if(a=='0' && b == '1'&& c=='1') r='1';
        if(a=='1' && b == '0'&& c=='0') r='0';
        if(a=='1' && b == '0'&& c=='1') r='1';
        if(a=='1' && b == '1'&& c=='0') r='1';
        if(a=='1' && b == '1'&& c=='1') r='1';
        return r;
        }
    
    char sum(char a,char b,char c){
        char r;
        if(a=='0' && b == '0'&& c=='0') r='0';
        if(a=='0' && b == '0'&& c=='1') r='1';
        if(a=='0' && b == '1'&& c=='0') r='1';
        if(a=='0' && b == '1'&& c=='1') r='0';
        if(a=='1' && b == '0'&& c=='0') r='1';
        if(a=='1' && b == '0'&& c=='1') r='0';
        if(a=='1' && b == '1'&& c=='0') r='0';
        if(a=='1' && b == '1'&& c=='1') r='1';
        return r;
    }
    string addBinary(string a, string b) {
        int lena = a.length(); 
        int lenb = b.length(); 
        if(lena>lenb) {
            for(int i = 0; i<(lena-lenb); i++){
                b = "0"+b;
            }
        }
        else {
            for(int i = 0; i<(lenb-lena); i++){
                a = "0"+a;
            }
        }
        cout<<a<<endl;
        cout<<b<<endl;
        char c = '0';
        string ans = "";
        for(int i = a.length()-1; i>=0; i--){
            cout << "i is "<<i;
            ans = sum(a[i],b[i],c) + ans;
            c = carry(a[i],+b[i],c);
        }
        if(c=='1'){
            ans='1'+ans;
        }
        return ans;
    }
};
