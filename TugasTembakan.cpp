// NAMA		: Muhammad Robikhul Zaki Zain
// NRP		: 5026221028
// Jurusan	: Sistem Informasi

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

 // tipe_data mencari_V0(tipe_data variabel1, tipe_data variabel2)
{
	/* cin >> v; */
  	return 
}

 // tipe_data speed_dgn_loss(tipe_data variabel)
{
	/* case 1 ... 10:
        v-=1;
        break;
        case 11 ... 20:
        v-=3;
        break;
        case 21 ... 30:
        v-=5;
        break; */
    return
}

int main() 
{
    int v;
    int jarak;
    float Vtangensial;
    cin >> v;
    switch (v)
    {
        case 1 ... 10:
        v-=1;
        break;
        case 11 ... 20:
        v-=3;
        break;
        case 21 ... 30:
        v-=5;
        break;
    }

    jarak = v*v/10;
    Vtangensial = sqrt(jarak*10)+ 5;

    cout << jarak << " " << Vtangensial << endl ;
    return 0;
}