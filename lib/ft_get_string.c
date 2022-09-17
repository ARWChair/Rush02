#include <stdlib.h>


int		ft_strlen(char *str);
char	*ft_get_string(char *str)
{
	char *arr = malloc(ft_strlen(str)+1);
	char *te;
	te=arr;
    
    while(*str == ' ' || *str =='0'){
        if(*str=='0' && (*(str+1)==' ' ||*(str+1)=='\0')){
            break;
        }
        str++;
    }
    while(*str> 47 && *str<58){
        *arr=*str;
        arr++;
        str++;
    }
    *arr='\0';
	arr=te;
	return arr;
}