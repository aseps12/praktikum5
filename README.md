# praktikum5
 #Penggunaan perintah loop menggunakan do while

```
*Alur algoritmanya
	-Mendeklarasikan int a sebagai nilai input.
	-mendeklrasikan int max sebagai nilai tertetinggi.
	-memasukan nilai a
	-membandingkan nilai a dengan max jika a < max max = a
		
```c++
			if (a>max)
			max=a;
```
	-membandingkan inputan nilai a tidak sama dengan nilai 0 while(a!=0)

```c++
			do {
			cout<<"masukan angka:";
    			cin>> a;
      			if (a>max)
        		max=a;
			    }
    			while (a!=0);
```
	-mencetak nilai tertinggi cout<< max;

*Berikut contoh flowchartnya

![img](https://raw.githubusercontent.com/aseps12/praktikum5/master/flowchart.png)

*Berikut kode lengkapnya

```c++
	int main()
{
   int a=0;
   int max=0;

  do{
    cout<<"masukan angka:";
    cin>> a;
      if (a>max)
        max=a;

    }
    while (a!=0);


    cout<<"nilai terbesar :"<< max;
}

```

*Berikut Hasilnya
![img](https://raw.githubusercontent.com/aseps12/praktikum5/master/hasil.png)