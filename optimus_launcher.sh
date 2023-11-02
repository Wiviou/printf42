# gcc optimus_tester.c srcs/ft_printf.c srcs/ft_char_printf.c srcs/ft_check_situation.c srcs/ft_display_printf.c srcs/ft_hexa_printf.c srcs/ft_integer_printf.c srcs/ft_pointer_printf.c srcs/ft_string_printf.c srcs/ft_unsigned_itoa.c srcs/unsigned_printf.c libft/libft.a -I includes/ && ./a.out
gcc -w optimus_tester2.c srcs/*.c libftprintf.a -I includes
./a.out > optimus2
gcc -w optimus_tester1.c
./a.out > optimus1
xxd optimus1 > optimus1.hex
xxd optimus2 > optimus2.hex
diff optimus1.hex optimus2.hex
rm optimus1 optimus2 optimus1.hex optimus2.hex
