#include <iostream>
#include <string>
using namespace std;
/*
จงเขียนคลาส MusicPlaylist เพื่อแทนเพลย์ลิสต์ของเพลง ซึ่งมีพฤติกรรมดังนี้

สามารถเก็บเพลงได้มากถึง 20 เพลง
เพิ่มเพลงลงเพลย์ลิสต์ ผ่าน method add(string)
เลือกลำดับของเพลงที่ต้องการจะฟังจากเพลย์ลิสต์ ด้วย method setCurrentTrack(int)
เล่นเพลงที่เลือกจากลำดับของเพลง ด้วย method play() ในที่นี้ให้ return string ของเพลงที่ตรงกับลำดับที่เลือก
*/
class MusicPlaylist {
private:
    string playlist[20];
    int count;
    int track;
public:
    MusicPlaylist() {
        this->count = 0;
        this->track = -1;
    }

    void add(string song) {
        if(count < 20) {
            playlist[count++] = song;
        }
    }
    void setCurrentTrack(int track) {
        this->track = track;
    }
    string play() {
        return this->playlist[track-1];
    }
};

int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}
