#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cout << "Enter number of rows and columns" << endl;
    cin >> N >> M;

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cout << '*';
        }
        cout << '\n';
    }

    cout << "\n\n\n";

    for(int i = 0; i < M; i++){
        for(int j = 0; j < M-i-1; j++){
            cout << ' ';
        }
        for(int j = 0; j < 2*i+1; j++){
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}
