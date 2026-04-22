*This project has been created as part of the 42 curriculum by jheyvaer.*

# Description
The goal of this project is to implement basic C functions and store them into a library called "libft.a".
This project contains 43 functions written in 43 separate C files.
- The first part of the project was recreating functions from *libc*.
(all the functions are renamed with the "ft_" prefix. eg: "strlen" becomes "ft_strlen").
- The second part of the project was implementing useful functions for the 42 cursus.
- the third part of the project was implementing useful linked list functions for the 42 cursus.

# Instructions
## Requirements
- A computer
- The "cc" C compiler

## Installation
Clone this repository on your machine.

## Execution
- Go to the project cloned on your machine
- Open a terminal
	- run **make** to compile the library (this will create the libft.a archive)
	- run **make clean** to delete all the object files
	- run **make fclean** to delete all the object files and the libft.a archive
	- run **make re** to delete all the object files and the libft.a and recompile the library.

# Resources
- 42 school subject
- The manual (man)

# Functions

## Part 1 - Libc functions

### ft_isalpha
**prototype**

`int ft_isalpha(int c)`

**description**

Returns 1 if c is corresponding to an alphabetical character, 0 either.

---

### ft_isdigit
**prototype**

`int ft_isdigit(int c)`

**description**

Returns 1 if c is corresponding to a digit character, 0 either.

---

### ft_isalnum
**prototype**

`int ft_isalnum(int c)`

**description**

Returns 1 if c is corresponding to an alphabetical or digit character, 0 either.

---

### ft_isascii
**prototype**

`int ft_isascii(int c)`

**description**

Returns 1 if c is corresponding to an ascii character (between 0 and 127), 0 either.

---

### ft_isprint
**prototype**

`int ft_isprint(int c)`

**description**

Returns 1 if c is corresponding to a printable character, 0 either.

---

### ft_strlen
**prototype**

`size_t ft_strlen(const char *str)`

**description**

Returns the length of str, as a size_t.

---

### ft_memset
**prototype**

`void *ft_memset(void *b, int c, size_t len)`

**description**

Sets len first bytes to c in memory starting from b. c is casted to an unsigned char during the process.

---

### ft_bzero
**prototype**

`void ft_bzero(void *s, size_t n)`

**description**

Sets the n first bytes to 0 in memory starting from s.

---

### ft_memcpy
**prototype**

`void *ft_memcpy(void *dst, const void *src, size_t n)`

**description**

Copies the n first bytes of src to dst. Overlaps are not handled.

---

### ft_memmove
**prototype**

`void *ft_memmove(void *dst, const void *src, size_t len)`

**description**

Copies the "len" first bytes of "src" to "dst". Overlaps are handled.

---

### ft_strlcpy
**prototype**

`size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)`

**description**

Copies dstsize-1 bytes of src to dst, null-terminating dst.
Returns the size of src to indicate if the copy has been truncated (if dst have not enough space to handle the full copy).

---

### ft_strlcat
**prototype**

`size_t ft_strlcat(char *dst, const char *src, size_t dstsize)`

**description**

Appends src to dst, null-terminating. Writes at most (dstsize - strlen(dst) - 1).
Returns strlen(src) + (min of strlen(dst), dstsize).
if return value is greater or equal to dstsize, the concatenation was truncated.

---

### ft_toupper
**prototype**

`int ft_toupper(int c)`

**description**

Returns c - 32 if c is corresponding to a lowercase char, c either.

---

### ft_tolower
**prototype**

`int ft_tolower(int c)`

**description**

Returns c + 32 if c is corresponding to an uppercase char, c either.

---

### ft_strchr
**prototype**

`char *ft_strchr(const char *s, int c)`

**description**

Returns a pointer to the first occurence of c in s (including \0), or NULL if c does not appear in s.

---

### ft_strrchr
**prototype**

`char *ft_strrchr(const char *s, int c)`

**description**

Returns a pointer to the last occurence of c in s (including \0), or NULL if c does not appear in s. s is null-terminated.

---

### ft_strncmp
**prototype**

`int ft_strncmp(const char *s1, const char *s2, size_t n)`

**description**

Compare the n first bytes of s1 and s2 (null-terminated). Returns a positive/negative integer if s1 is greater/less than s2, 0 if equal. Using unsigned char for comparison to handle non-ascii char.

---

### ft_memchr
**prototype**

`void *ft_memchr(const void *s, int c, size_t n)`

**description**

Returns a pointer to the first occurence of c in s, for the first n bytes.

---

### ft_memcmp
**prototype**

`int ft_memcmp(const void *s1, const void *s2, size_t n)`

**description**

Compares s1 with s2 for the n first bytes. Returns a positive/negative integer if s1 is greater/less than s2, 0 if equal.

---

### ft_strnstr
**prototype**

`char *ft_strnstr(const char *haystack, const char *needle, size_t len)`

**description**

Returns a pointer to the first occurence of the full string needle in the len first bytes of haystack.

---

### ft_atoi
**prototype**

`int ft_atoi(const char *str)`

**description**

Returns an int corresponding to the number represented in str.
The number in str must follow the following format : an arbitrary number of whitespaces, then an optional sign char followed by the int represented. Ignores the remaining chars of str.

---

### ft_calloc
**prototype**

`void *ft_calloc(size_t count, size_t size)`

**description**

Returns a pointer of size "count * size", dynamically allocated with malloc, filled with values 0.

---

### ft_strdup
**prototype**

`char *ft_strdup(const char *s1)`

**description**

Returns a dynamically allocated pointer to a copy of s1. s1 is null-terminated.

---

## Part 2 - Additional functions

### ft_substr
**prototype**

`char *ft_substr(char const *s, unsigned int start, size_t len)`

**description**

Returns a dynamically allocated pointer that contains a copy of s starting from start of length len.

---

### ft_strjoin
**prototype**

`char *ft_strjoin(char const *s1, char const *s2)`

**description**

Returns a dynamically allocated pointer that contains s1 and s2 concatenated, null-terminated.

---

### ft_strtrim
**prototype**

`char *ft_strtrim(char const *s1, char const *set)`

**description**

Returns a dynamically allocated pointer that contains s without the characters from the string set at the beginning and at the end

---

### ft_split
**prototype**

`char **ft_split(char const *s, char c)`

**description**

Returns a pointer to an array of strings, splitted from s by a delimiter c, NULL-terminated.

---

### ft_itoa
**prototype**

`char *ft_itoa(int n)`

**description**

Returns a string representing an int n.

---

### ft_strmapi
**prototype**

`char *ft_strmapi(char const *s, char (*f)(unsigned int, char))`

**description**

Returns a pointer to a new string created dynamically by applying a function f to each characters of a string s.

---

### ft_striteri
**prototype**

`void ft_striteri(char *s, void (*f)(unsigned int, char*))`

**description**

Modifies the string s by applying a function f on each of the characters of the string.

---

### ft_putchar_fd
**prototype**

`void ft_putchar_fd(char c, int fd)`

**description**

Writes a character c on the fd output.

---

### ft_putstr_fd
**prototype**

`void ft_putstr_fd(char *s, int fd)`

**description**

Writes a string s on the fd output.

---

### ft_putendl_fd
**prototype**

`void ft_putendl_fd(char *s, int fd)`

**description**

Writes a string s followed by a new line on the fd output.

---

### ft_putnbr_fd
**prototype**

`void ft_putnbr_fd(int n, int fd)`

**description**

Writes an int n on the fd output.

---

## Part 3 - Linked list functions

### ft_lstnew
**prototype**

`t_list *ft_lstnew(void *content)`

**description**

Returns a new pointer to a t_list dynamically allocated with content as content and NULL as next.

---

### ft_lstadd_front
**prototype**

`void ft_lstadd_front(t_list **lst, t_list *new)`

**description**

Add a t_list pointer "new" to the front of a t_list lst, updating the head of the list.

---

### ft_lstsize
**prototype**

`int ft_lstsize(t_list *lst)`

**description**

Returns the size of a t_list "lst" as an int.

---

### ft_lstlast
**prototype**

`t_list *ft_lstlast(t_list *lst)`

**description**

Returns a pointer to a t_list that is the last non-null element of a list "lst".

---

### ft_lstadd_back
**prototype**

`void ft_lstadd_back(t_list **lst, t_list *new)`

**description**

Add a t_list "new" to the back of a t_lst "lst".

---

### ft_lstdelone
**prototype**

`void ft_lstdelone(t_list *lst, void (*del)(void*))`

**description**

Deletes the content of a t_list "lst" using a function "del" and frees lst.

---

### ft_lstclear
**prototype**

`void ft_lstclear(t_list **lst, void (*del)(void *))`

**description**

Deletes the content of a t_list "lst" using a function "del" to remove the contents and frees all the nodes.

---

### ft_lstiter
**prototype**

`void ft_lstiter(t_list *lst, void (*f)(void *))`

**description**

Applies a function "f" to each elements of a t_list "lst".

---

### ft_lstmap
**prototype**

`t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))`

**description**

Creates a new t_list pointer that points to a linked list created by applying a function "f"
on each node's content clearing the new list with a function "del" if the allocation of a new node fails.

---
