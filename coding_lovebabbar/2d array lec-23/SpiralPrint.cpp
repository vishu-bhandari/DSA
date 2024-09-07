#include <iostream>
using namespace std;


vector<int> spiralPrint(vector<vector<int> >& matrix){

    int rows=matrix.size();
    int cols=matrix[0].size();

    //indexing 

    int startingRow=0;
    int endingCol=cols-1;
    int endingRow=rows-1;
    int staringCol=0;


    int count=0;
    int totalElem=rows*cols;

    vector<int> ans;
    while(count<totalElem){

        for(int i=staringCol;i<=endingCol && count<totalElem; i++){
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        for(int i=startingRow;i<=endingRow && count<totalElem;i++){
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        for(int i=endingCol;i>=staringCol && count<totalElem;i--){
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        for(int i=endingRow;i>=startingRow && count<totalElem;i--){
            ans.push_back(matrix[i][staringCol]);
            count++;
        }
        staringCol++;
    }

    return ans;

}

int main()
{

    vector<vector<int> > matrix(3, vector<int>(3));

    cout << "enter the matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "your entered matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    vector<int> answer = spiralPrint(matrix);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    cout<<endl;

    return 0;
}