
#include <stdio.h>               

int main()
{
        // find right comb for  nums that cross at one point
        int     input[] = {1, 2 , 2, 1};
        int     i;
	int	j;
	int comb2d4[2][4] = {{3, 1, 2, 4},{3, 2, 1, 4}};
	int comb2d3[3][3] = {{3, 2, 4},{3, 1, 4},{2, 1, 4}};
	int comb2d2[3][2] = {{1, 4},{2, 4},{3, 4}};
	int comb3d4[3][4] = {{2, 3, 1, 4},{2, 1, 3, 4},{1, 3, 2, 4}};
	int comb3d3[3][3] = {{1, 2, 4},{1, 3, 4},{2, 3, 4}};
	int comb1[] = {4};
	int comb4[] = {1, 2, 3, 4};

	int	comb[] = {0, 0, 0, 0};
        i = 0;
        if (input[0] == 1)
        {
			comb[i] = comb1[i];
                        printf("%d\n",comb1[i]);
        }
	else if (input[0] == 2)
        {
                while(i != 4)
                {
			comb[i] = comb2d4[0][0];
                        printf("%d\n",comb[i]);
                        i++;
                }
        }
	else if (input[0] == 3)
        {
                while(i != 4)
                {
			comb[i] = comb3d4[0][0];
                        printf("%d\n",comb[i]);
                        i++;
                }
        }
	else if (input[0] == 4)
        {
                int comb4[] = {1, 2, 3, 4};

                while(i != 4)
                {
			comb[i] = comb4[i];
                        printf("%d\n",comb4[i]);
                        i++;
                }
        }
	printf("\n");
	j = 3;
	i = 0;
	if (input[2] == 2)
        {
		if(comb[0] == 4)
		{
			while(comb[j] != 4)
	                {
        	                comb[j] = comb2d4[0][i];
                	        j--;
                        	i++;
                	}

		}
		else if(comb[1] = 4)
		{
			while(comb[j] != 4)
                	{
                        	comb[j] = comb2d3[0][i];
                        	j--;
                        	i++;
                	}
		}
		else if(comb[2] = 4)
		{
			while(comb[j] != 4)
	                {
	                        comb[j] = comb2d2[0][i];
	                        j--;
	                        i++;
	                }

		}
		else if(comb[3] = 4)
			printf("error");
		i = 0;
                while(i != 4)
                {
                        printf("%d\n",comb[i]);
                        i++;
                }
        }
        if (input[2] == 1)
        {
		if(comb[0] == 4)
                {
                        printf("error");
		//	go back and change 1st arr;
                }
                else if(comb[1] = 4)
                {
			printf("error");
                }
                else if(comb[2] = 4)
		{
			printf("error");
		}
                else if(comb[3] = 4)
                {
                }

        }
        if (input[2] == 3)
        {
		if(comb[0] == 4)
                {
                        while(comb[j] != 4)
                        {
                                comb[j] = comb3d4[0][i];
                                j--;
                                i++;
                        }

                }
                else if(comb[1] = 4)
                {
                        while(comb[j] != 4)
                        {
                                comb[j] = comb3d3[0][i];
                                j--;
                                i++;
                        }
                }
                else if(comb[2] = 4)
                {
                        printf("error");
                }
                else if(comb[3] = 4)
                        printf("error");

        }
        if (input[2] == 4)
        {
		if(comb[0] == 4)
                {
                        while(comb[j] != 4)
                        {
                                comb[j] = comb4[i];
                                j--;
                                i++;
                        }

                }
                else if(comb[1] = 4)
                {
                        printf("error");
                }
                else if(comb[2] = 4)
                {
                        printf("error");
                }
                else if(comb[3] = 4)
                        printf("error");
        }
}
