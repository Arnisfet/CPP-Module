#include <iostream>

int main(int ac, char **argv)
{
    using std::cout;
    using std::cin;

    int len;
    if (ac == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < ac; i++)
        {
          len = argv[i].length();
          for (int j = 0; j < len; j++)
              cout << (char) (toupper(argv[i][j]));
          cout << " ";
        }
    }
    cout << std::endl;
	return 0;
}
