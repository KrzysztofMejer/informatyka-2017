#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int k=0;
    while (k<9) {
        k++;
        if (k==4 || k==6) continue;
        cout<<setw(3)<<k;
    }
    return 0;
   }

// J�zeli warto�� k osi�gnie 4 lub 6 program przechodzi do kolejnego argumentu (po prostu nie wy�wietli 4 i 6)
