class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //validating rows
        for(int row = 0; row<board.size(); row++) {
           array<int,10> countarray = {0,0,0,0,0,0,0,0,0};
           int breakflag = 0;
           for(int col=0; col<board.size(); col++) {
                char l = board[row][col];

                int el;
                if(l=='.') 
                    continue;
                else 
                    el=stoi(string(1,l));
                cout << el<< " ";

                if(countarray[el]==0){
                    countarray[el]++;
                }
                else{
                    cout << el<< "is repeating";
                    breakflag =1;
                    break;
                }
           }
           if(breakflag){
               cout << "not a valid sudoku horizontally";
               return false;
           }
           cout << endl;
        }

        for(int row = 0; row<board.size(); row++) {
           array<int,10> countarray = {0,0,0,0,0,0,0,0,0};
           int breakflag = 0;
           for(int col=0; col<board.size(); col++) {
                char l = board[col][row];
                int el;
                if(l=='.') 
                    continue;
                else 
                    el=stoi(string(1,l));
                cout << el<< " ";

                if(countarray[el]==0){
                    countarray[el]++;
                }
                else{
                    cout << el<< "is repeating";
                    breakflag =1;
                    break;
                }
           }
           if(breakflag){
               cout << "not a valid sudoku vertically";
               return false;
           }
           cout << endl;
        }
       //henters 0,0 0,3 0,6
       //lent i  3,0 3,3 3,6
       //centers 6,0 6,3 6,6
        for(int sx = 0; sx<3; sx++) {
        for(int sy = 0; sy<3; sy++) {
            array<int,10> countarray = {0,0,0,0,0,0,0,0,0};
            for(int row = 0; row<3; row++) {
            int breakflag = 0;
            for(int col=0; col<3; col++) {
                    char l = board[3*sx+row][3*sy+col];
                    int el;
                    if(l=='.') 
                        continue;
                    else 
                        el=stoi(string(1,l));
                    cout << el<< " ";
    
                    if(countarray[el]==0){
                        countarray[el]++;
                    }
                    else{
                        cout << el<< "is repeating";
                        breakflag =1;
                        return false;
                    }
            }
            if(breakflag){
                cout << "due to internal";
                return false;
            }
            cout << endl;
            }
        }
        }
       return true;
    }
};
