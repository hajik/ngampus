#include <stdio.h>
#include <string.h>
void main()
{
    char buff[255];
    char text[255];
    FILE *fptr;
    int len;

    // membuka file untuk ditulis
    fptr = fopen("text.txt","w");
	int i = 1;
	len = 2;
		
		while(len != 1){
			printf("Isi baris ke-%d: ", i);
        	fgets(text, sizeof(text), stdin);
		
			len = string_length(text);
			if(len != 1) {
				// menulis ke text ke file
	        	fputs(text, fptr);
	        	printf("File berhasil ditulis\n");
			}else{
				printf("Berhenti menulis karena inputan NULL\n");
			}
			
        	i++;
		}
        
    // tutup file setelah ditulis
    fclose(fptr);

    // buka kembali file untuk dibaca
    fptr = fopen("text.txt","r");

    // baca isi file dengna gets lalu simpan ke buff
    while(fgets(buff, sizeof(buff), fptr)){
        printf("Isi filenya sekarang: %s", buff);
    }

    // tutup file
    fclose(fptr);
}

int string_length(char *s) {
  if (*s == '\0') // Base condition
    return 0;

  return (1 + string_length(++s));
}
