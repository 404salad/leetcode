#include <string>
#include <iostream>
using namespace std;
class BrowserHistory {
public:
    string arr[200]; 
    int top;
    string data;
    
    BrowserHistory(string homepage) {
        data = homepage;
        top=-1;
        arr[++top]=data;
    }
    
    void visit(string url) {
        cout << "adding" << url << " ";
        arr[++top] = url;
        cout << "now top is " << top << endl;
        int clean = top;
        while(arr[clean]!="\0"){
            arr[++clean]="\0";
        }
    
    }
    string back(int steps) {
        cout << "going back " << steps;
        top = top - steps;
        if(top<0) top=0;
        cout << arr[top] << " ";
        cout << "now top is " << top << endl;
        return arr[top];
    }
    
    string forward(int steps) {
        for(int i =0; i<steps; i++){
            cout << "in loop "<< top<<endl;
            if(arr[top+1]!="\0"){
                top++;
            }
            else {
                break;
            }
        }
        cout << "going forwars " << steps <<"now top is " << top << endl;
        return arr[top];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
