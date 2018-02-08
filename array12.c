#include <stdio.h>
main()
{
      int i,j;
      char  nama[5][3][15] = {
           "ade","faisal","haris",
           "dika","firman","bintang",
           "adit","dika","robby",
           "ayu","sinta","febry",
           "aida","afi","pirna"};
        for (i=0;i<5;i++)
		{
			printf ("Nama nama di kelas %1d adalah :\n",i+1);
                for (j=0;j<3;j++)
				{
                    printf ("%s\n",nama[i][j]);
                }
                    printf("\n");
        }
                    return 0;
}
