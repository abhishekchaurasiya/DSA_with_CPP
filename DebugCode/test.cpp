
#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int numSubjects;
    double totalMarks = 0, marksObtained, totalPossibleMarks, percentage;

    cout << "Enter number of subects: " << endl;
    cin >> numSubjects;

    for (int i = 1; i <= numSubjects; i++)
    {
        cout << "Enter marks in each subject: " << i << ": ";
        cin >> marksObtained;
        totalMarks += marksObtained;
    }

    cout << endl;
    cout << totalMarks << endl;
    cout << "Enter the total possible marks: " << endl;
    cin >> totalPossibleMarks;

    percentage = (totalMarks / totalPossibleMarks) * 100;
    cout << "Overall Percentage: " << percentage << "%" << endl;

    return 0;
}