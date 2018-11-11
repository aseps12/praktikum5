# praktikum5
 #Latihan1#Penggunaan perintah loop menggunakan do while

```
1.Alur algoritmanya
	-Mendeklarasikan int a sebagai nilai input.
	-mendeklrasikan int max sebagai nilai tertetinggi.
	-memasukan nilai a
	-membandingkan nilai a dengan max jika a < max max = a
```
		
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
2.Berikut kode lengkapnya
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

3.Berikut Hasilnya
![img](https://raw.githubusercontent.com/aseps12/praktikum5/master/hasil.png)

4.Berikut contoh flowchartnya

![img](https://raw.githubusercontent.com/aseps12/praktikum5/master/flowchart.png)


#Latihan2#Menentukan Penjumlahan Bilangan Benar atau Salah

```
1.Alur Algoritmanya
	-Mendeklarasikan int a,b, dan c
	-Mendeklarasikan variabel a,b, dan c sebagai nilai input
	-Memasukan nilai inputan a,b,c
	-Membandingkan penjumlahan nilai a + b =c dan a+c=b dan c+b=a
```	
	```c++
		if( (a+b==c) || (a+c==b) )
    		{
        		cout<<"BENAR";
    		}
    		else if((b+c==a))
    		{
        		cout<<"BENAR";
    		}
    		else
        	{
        	cout<< "SALAH";
        ```
2.Berikut kode lengkapnya
```c++
int main()
{
    int a,b,c;

    cout<<"Masukan nilai ke 1:";
    cin>>a;
    cout<<"Masukan nilai ke 2:";
    cin>>b;
    cout<<"Masukan nilai ke 3:";
    cin>>c;

    if( (a+b==c) || (a+c==b) )
    {
        cout<<"BENAR";
    }
    else if((b+c==a))
    {
        cout<<"BENAR";
    }
    else
        {
        cout<< "SALAH";
        }
}
```
3.Berikut Flowchartnya
![img](https://raw.githubusercontent.com/aseps12/praktikum5/master/flowchart2.png)

4.Berikut hasilnya
![img](https://raw.githubusercontent.com/aseps12/praktikum5/master/hasil1.png)
![img](https://raw.githubusercontent.com/aseps12/praktikum5/master/hasil2.png)
![img](https://raw.githubusercontent.com/aseps12/praktikum5/master/hasil3.png)
![img](https://raw.githubusercontent.com/aseps12/praktikum5/master/hasil4.png)