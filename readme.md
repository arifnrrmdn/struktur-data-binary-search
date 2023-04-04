## Pengertian Binary Search
Metode pencarian sebuah data dari suatu kumpulan data, dimana kumpulan data tersebut harus berurutan dengan benar agar proses pencarian data bisa di lakukan. 
Dalam proses pencarian data pada metode ini data akan di bagi menjadi dua bagian untuk setiap tahap pencariannya. 
- Hanya dapat digunakan untuk data-data yang telah terurut baik secara menaik maupun menurun.
- Elemen array akan dibagi menjadi dua, sehingga banyaknya proses pembandingan nilai dapat dikurangi.

## Algoritma :
- Pertama pengambilan data dimulai  dari posisi 1 sampai  dengan posisi akhir (n) 
- Selanjutnya mencari posisi data yang tengah dengan menggunakan rumus: (posisi awal + posisi akhir) / 2. 
- Setelah itu data yang akan dicari dibandingkan dengan data yang berada di tengah, apakah data tersebut sama atau lebih kecil, atau lebih besar? 
- Seandainya data tersebut  lebih besar, maka proses pencarian yang dicari dengan posisi awal adalah posisi tengah + 1 
- Apabila data lebih kecil, maka proses pencarian yang dicari dengan posisi akhir adalah posisi tengah – 1 
- Jika data sama dengan data yang di cari, berarti  data tersebut telah ketemu.

## Screenshot
![Screenshot (3)](https://user-images.githubusercontent.com/91766087/229853200-e128ea21-2508-427c-a13a-078d582aca18.png)


