*This activity has been created as part of the 42 curriculum by ialnuman.*

# libft

## Description
The `libft` project is the first foundational programming milestone in the 42 core curriculum. The goal of this activity is to rewrite a custom C standard library from scratch. This custom library provides a deep understanding of memory allocation, data structures, and the internal workings of fundamental algorithms, ensuring a solid base for all future C programming projects.

## Detailed Description of the Library
The resulting static library, `libft.a`, is divided into three distinct parts:
*   **Libc Functions:** Direct implementations of standard C library functions, covering memory manipulation (e.g., `ft_memset`, `ft_bzero`, `ft_calloc`), string operations (e.g., `ft_strlen`, `ft_strlcpy`, `ft_strnstr`), and character classification (e.g., `ft_isalpha`, `ft_isdigit`).
*   **Additional Functions:** Custom utility functions that are not part of the standard `libc` but are crucial for string manipulation and output generation (e.g., `ft_split`, `ft_itoa`, `ft_strtrim`, `ft_putchar_fd`).
*   **Bonus Functions:** A robust set of tools designed specifically for managing singly linked lists using a custom `t_list` structure. These functions handle node creation, addition, iteration, mapped generation, and safe memory clearing (e.g., `ft_lstnew`, `ft_lstadd_back`, `ft_lstmap`, `ft_lstclear`).

## Instructions
The library is compiled using the provided `Makefile`. Standard rules apply:
*   `make` : Compiles the mandatory C files and creates the `libft.a` static library.
*   `make bonus` : Compiles both the mandatory and the linked-list bonus files into `libft.a`.
*   `make clean` : Removes all compiled object files (`.o`).
*   `make fclean` : Removes object files and the compiled `libft.a` library.
*   `make re` : Completely cleans and recompiles the library.

To link `libft.a` to your project, include the header `libft.h` in your source files and compile with `-lft` (e.g., `cc my_project.c -L. -lft`).

## Resources
*   **Documentation:** UNIX manual pages (`man 3`) and the GNU C Library (glibc) documentation for original function behaviors.
*   **AI Usage:** Artificial Intelligence was utilized as an interactive debugging and conceptual thought partner. Specifically, AI assisted in clarifying pointer-to-pointer (`**lst`) mechanics, generating isolated `main.c` test cases to verify memory safety and logical flow for complex bonus functions, and explaining Norminette formatting nuances. AI was not used to generate the core library logic blindly, but rather to reinforce algorithmic understanding and analyze compiler errors during the development of linked list manipulation functions.
