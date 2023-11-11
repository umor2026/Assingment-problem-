#include <iostream>
using namespace std;

class Manchester_United
{
    int coach, player;

public:

    void getData(int a, int b)
    {
        coach = a;
        player = b;
    }

    Manchester_United& operator++ ()
    {
        ++coach;
        ++player;
        return *this;
    }

    bool operator== (const Manchester_United &obj) const
    {
        return (coach == obj.coach) && (player == obj.player);
    }
};

int main()
{
    Manchester_United ronaldo;
    ronaldo.getData(4, 5);

    Manchester_United fernandes;
    fernandes.getData(5, 6);

    if (ronaldo == fernandes)
        cout << "Ronaldo and Fernandes are equal before increment\n";
    else
        cout << "Ronaldo and Fernandes are not equal before increment\n";

    ++ronaldo;

    if (ronaldo == fernandes)
        cout << "Ronaldo and Fernandes are equal after increment\n";
    else
        cout << "Ronaldo and Fernandes are not equal after increment\n";

    return 0;
}
