#include <unistd.h>

void    ft_error(void) 
{     
	write(1, "Error", 5); 
}
int    ft_checknum(char str) 
{     
	int    i;      
	i = 0;     
	while (str[i] != '\0')     
	{         
		if (i % 2 == 0 && !(str[i] >= '1' && str[i] <= '4'))         
		{         
			ft_error();             
			return (1);    
		}
		i++;     
	}     
	if (i != 31)     
	{         
		ft_error();         
		return (1);     
	} 
}  
int    ft_checkspace(charstr) 
{     
	int    i;      i = 1;     
	while (str[i] != '\0')     
	{         
		if (str[i] == ' ' && (i % 2 != 0))         
		{         
		}         
		else if (i % 2 != 0)         
		{             
			ft_error();             
			return (1);         
		}        
		i++;     
	} 
}  
int    main(int argc, char *argv) 
{     
	if (argc != 2)     
	{		
		ft_error();         
		return (1);     
	}     
	ft_checknum(argv[1]);     
	ft_checkspace(argv[1]);       
	return (0); 
}


