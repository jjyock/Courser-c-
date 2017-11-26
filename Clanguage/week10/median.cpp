#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numGroup = 0;
    vector<int> numAve;
    while(1)
    {
        int N = 0;
        cin >> N;       
        if (N == 0)
        {
            break;
        }
        else
        {           
            vector<int> sample(N);
            for (int i = 0; i < N; i++)
            {
                cin >> sample[i];
            }
            if (N%2 != 0)
            {
                int k = N/2 +1;
                for (int i = 0; i < k; i++)
                {
                    for (int j = i; j < N; j++)
                    {
                        if (sample[j] > sample[i])
                        {
                            int temp = sample[j];
                            sample[j] = sample[i];
                            sample[i] = temp;
                        }
                    }
                }
                numAve.push_back(sample[k-1]);
//              cout << sample[k-1] << endl;
            } 
            else
            {
                int k = N/2 +1;
                for (int i = 0; i < k; i++)
                {
                    for (int j = i; j < N; j++)
                    {
                        if (sample[j] > sample[i])
                        {
                            int temp = sample[j];
                            sample[j] = sample[i];
                            sample[i] = temp;
                        }
                    }
                }
                numAve.push_back((sample[k-2]+sample[k-1])/2);
//              cout << (sample[k-2]+sample[k-1])/2 << endl;
            }
        }
        numGroup++;
    }
    for (int i = 0; i < numGroup; i++)
    {
        cout << numAve[i] << endl;
    }
    return 0;
}