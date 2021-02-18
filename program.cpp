#include <iostream>
using namespace std;

int main()
{

    string name;
    double eng_score;
    double mth_score;
    double sci_score;
    cout << "English score (out of 100)\n" << endl;
    cin >> eng_score;
    cout << "Maths score (out of 100)\n" << endl;
    cin >> mth_score;
    cout << "Science score (out of 100)\n" << endl;
    cin >> sci_score;
    
    if(eng_score >= 85){
        cout << "You have passed english!" << endl;
    } else {
        cout << "You have not passed english!" << endl;
    }

    if(mth_score >= 85){
        cout << "You have passed maths!" << endl;
    } else {
        cout << "You have not passed maths!" << endl;
    }

    if(sci_score >= 85){
        cout << "You have passed science!" << endl;
    } else {
        cout << "You have not passed science!" << endl;
    }
    
    return 0;
    
}