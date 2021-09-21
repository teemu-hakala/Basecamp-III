/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 07:41:31 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/09/19 20:35:53 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		max_digit_check(int number, int n)
{
	int		digit_count;
	int		digit;
	int		k;

	digit_count = 0;
	k = 10;
	while (digit_count < n)
	{
		digit = number % k / (k / 10);
		if (digit > 9 - digit_count)
			return (0);
		k *= 10;
		digit_count++;
	}
	return (1);
}

int		push_digit_further(int num, int n)
{
	int		result;
	int		digit_count;
	int		digit;
	int		carry;
	int		k;

	result = 0;
	digit_count = 0;
	carry = 0;
	k = 10;
	while (digit_count < n)
	{
		digit = num % k / (k / 10);
		if (carry)
		{
			digit += carry;
			carry = 0;
		}
		if (digit > 9 - digit_count)
		{
			carry = 1;
			digit = 0;
		}
		result = (k / 10) * digit + result;
		k *= 10;
		digit_count++;
	}
	if (carry)
		return (0);
	return (result);
}

int		digit_order_check(int num, int n)
{
	int		result;
	int		k;
	int		digit_count;
	int		digit_next;
	int		digit;

	digit_count = 0;
	k = 1;
	while (digit_count++ < n)
		k *= 10;
	if (digit_count - 1 == 1)
		return (num);
	result = num % k / (k / 10);
	digit_next = num % k / (k / 10);
	while (--digit_count > 1)
	{
		digit = num % (k / 10) / (k / 100);
		if (digit_next >= digit)
			digit = digit_next + 1;
		result = 10 * result + digit;
		digit_next = digit;
		k /= 10;
	}
	return (result);
}

int		grow_num(int num, int n)
{
	int		k;

	num++;
	k = 10;
	while (!max_digit_check(num, n))
		if (!(num = push_digit_further(num, n)))
			return (0);
	num = digit_order_check(num, n);
	return (num);
}

void	ft_putnbr_pos(int num, int n, int m)
{
	if (num > 10)
	{
		ft_putnbr_pos(num / 10, --n, m);
		ft_putnbr_pos(num % 10, 0, m);
	}
	else if (num > 0)
	{
		if (n == 2)
			ft_putchar('0');
		ft_putchar('0' + num);
	}
	else if (num == 0)
	{
		ft_putchar('0' + num);
	}
}

void	ft_print_combn(int n)
{
	int		num;
	int		i;
	int		max;
	int		d;
	int		j;

	num = 0;
	i = 0;
	max = 0;
	d = 1;
	j = 9;
	while (i < n)
	{
		num = 10 * num + i;
		if (i++ < n)
			max = d * j-- + max;
		d *= 10;
	}
	num = n == 1 ? num : num - 1;
	while ((num = grow_num(num, n)))
	{
		ft_putnbr_pos(num, n, n);
		if (num != max)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		else
			return ;
	}
}
