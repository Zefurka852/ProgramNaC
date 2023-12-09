#include <stdio.h>
#include <string.h>

unsigned int my_strlen(const char* str_)
{
	if (!str_)
		return 0;
	unsigned int len = 0;
	for (; str_[len] != '\0'; ++len);

	return len;
}

char* my_strcpy(char* dst_, const char* src_)
{
	if (!dst_ || !src_)
		return NULL;

	char* tmp = dst_;
	while (*src_)
	{
		*dst_ = *src_;
		dst_++;
		src_++;
	}
	*dst_ = '\0';

	return tmp;
}

char* my_strcat(char* dst_, const char* src_)
{
	if (!dst_ || !src_)
		return NULL;

	char* tmp = dst_;
	while (*dst_)
	{
		dst_++;
	}
	
	while (*src_)
	{
		*dst_ = *src_;
		dst_++;
		src_++;
	}
	*dst_ = '\0';

	return tmp;
}

int my_strcmp(const char* str1_, const char* str2_)
{
	unsigned int len1 = my_strlen(str1_);
	unsigned int len2 = my_strlen(str2_);

	if (len1 == len2)
	{
		return 0;
	}
	else
	{
		if (len1 > len2)
		{
			return 234;
		}
		else
		{
			return -234;
		}
	}
}

int my_strstr(const char* str1_, const char* str_)
{

}

/*
char* fgetline(const FILE* f_)
{
	unsigned int linelen = 0;
	while (fgetc(f_) != EOF || fgetc(f_) != "\n")
	{ 
		linelen++;
	}
	char* RES = malloc(linelen * sizeof(char) + 1);
	fseek(f_, -linelen, SEEK_CUR);

	char* line = malloc(linelen * sezeof(char))

}
*/