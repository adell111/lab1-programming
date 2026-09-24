print("Hello, World!")
print("Студент: Адель Хакимов")
print("Дата: 2026-09-24")


def factorial(n: int) -> int:
    """Вычисление факториала числа n."""
    if n < 0:
        raise ValueError("Факториал не определён для отрицательных чисел")
    result = 1
    for i in range(2, n + 1):
        result *= i
    return result


if __name__ == "__main__":
    for num in range(11):
        print(f"{num}! = {factorial(num)}")