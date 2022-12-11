float average(float m[7])
{
    float marks, average;
    marks = m[0] + m[1] + m[2] + m[3] + m[4] + m[5] + m[6];
    average = marks / 7;
    for (int m = 0; m < 7; m++)
    {
        cout << marks;
    }
    return average;
}

int main()
{

    cout << "Displaying average marks: " << endl;
    float marks[7] = {88, 76, 90, 61, 69, 50, 45};
    cout << average;

    return 0;
}