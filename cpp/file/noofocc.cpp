#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int isChecked[10] = {0};
    // vector<pair<int,int>> v;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        int count = 1;
        for (int j = i + 1; j < 10; j++)
        {
            if (isChecked[j] == 0)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    isChecked[j] = 1;
                }
            }
           // else continue;
        }
        if(isChecked[i]==0)
        cout<<"Occurence of "<<arr[i]<<" = "<<count<<endl;
        
    }

    return 0;
}