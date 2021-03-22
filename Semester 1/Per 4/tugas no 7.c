#include <stdio.h>
int main(){

	int gajih_perjam = 50000;
	int gaji_pokok = 1500000;
	int jam_kerja;
	int gajih_pegawai;
	
	printf("Masukan Jumlah Jam Kerja : ");
	scanf("%d",&jam_kerja);
	
	if(jam_kerja <= 40){
		
		gajih_pegawai = jam_kerja*gajih_perjam;
		
	}else if(jam_kerja <= 60){
		
		gajih_pegawai = (gaji_pokok*3) / 2; //3/2
		printf("Gaji Pokok : (%d*%d)/%d \n", gaji_pokok, 3, 2 );
		
	}else if(jam_kerja <= 80) {
		
		gajih_pegawai = gaji_pokok*2;
		
	}else{
		printf("\nNilai jam kerja melebihi batas wajar , mohon hubungi bagian admin. Terimakasih!");
		return 0;
	}
	
	printf("Total gajih : %d\n\n", gajih_pegawai);


	printf("*Catatan\n");
	printf("Jam kerja : %d\n", jam_kerja );
	printf("Gaji Pokok : %d\n", gaji_pokok );
    
    return 0;
}
