#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> playlist;

    //  while(true)
    //  {
    //     string song;
    //      cin >> song;
    //      if(song=="stop")
    //      {
    //          break;
    //      }
    //      playlist.push_back(song);
    //  }

    string song;
    while (cin >> song && song != "stop")
        playlist.push_back(song);

    int q;
    cin >> q;
    auto currentSong = playlist.begin();

    while (q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "play")
        {
            string songName;
            cin >> songName;
            auto isFound = find(playlist.begin(), playlist.end(), songName);

            if (isFound != playlist.end())
            {
                cout << "Playing " << *isFound << endl;
                currentSong = isFound;
            }
            else
            {
                cout << "Song not found" << endl;
            }
        }
        else if (cmd == "right")
        {
            if (next(currentSong) != playlist.end())
            {
                currentSong = next(currentSong);
                cout << "Playing " << *currentSong << endl;
            }
            else
            {
                // currentSong = playlist.begin();
                // cout << "Playing " << *currentSong << endl;
                cout << "Song not found" << endl;
            }
        }
        else if (cmd == "left")
        {
            if (currentSong != playlist.begin())
            {
                currentSong = prev(currentSong);
                cout << "Playing " << *currentSong << endl;
            }
            else
            {
                cout << "Song not found" << endl;
            }
        }
    }
    return 0;
}