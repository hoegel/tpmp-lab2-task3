# Отчёт

## Необходимо проверить работу функций:
- `print_flight`
- `print_max_duration`
- `print_by_direction`
- `average_distance`
- `count_by_model`

## Тестовые данные
| id | departure  | arrival | direction   | aircraft_model | distance |
|----|------------|---------|-------------|----------------|----------|
|101 | 08:30 (510)| 10:45 (645) | new york    | boeing 737     | 450.0    |
|102 | 09:00 (540)| 11:30 (690) | los angeles | airbus A320    | 550.0    |
|103 | 14:15 (855)| 16:20 (980) | chicago     | boeing 737     | 300.0    |
|104 | 23:50 (1430)| 01:30 (90) | miami       | boeing 777     | 800.0    |
|105 | 07:45 (465)| 09:15 (555) | new york    | bombardier     | 200.0    |

## Ожидаемые результаты

### Вывод всех рейсов (функция `print_flight`)
Должны быть выведены все 5 рейсов c корректным выводом времени

### Рейс с максимальной длительностью (`print_max_duration`)
Максимальная длительность у рейса 102 – 150 мин (2 ч 30 мин)

### Поиск по направлению «New York» (`print_by_direction`)
Это рейсы рейсы 101 и 105

### Среднее расстояние (`average_distance`)
Сумма расстояний: 450 + 550 + 300 + 800 + 200 = 2300
Среднее = 2300 / 5 = 460.0 км

### Количество рейсов по маркам самолётов (`count_by_model`)
- boeing 737: 2
- airbus A320: 1
- boeing 777: 1
- bombardier: 1

## 5. Результаты тестирования
Программа была запущена с тестовыми данными. Ниже приведён вывод из консоли:
```
=== DEMONSTRATION OF AIRPLANE FUNCTIONS ===

all flights:
race 101: 08:30 -> 10:45, direction: new york, aircraft: boeing 737, distance: 450.00 km
race 102: 09:00 -> 11:30, direction: los angeles, aircraft: airbus A320, distance: 550.00 km
race 103: 14:15 -> 16:20, direction: chicago, aircraft: boeing 737, distance: 300.00 km
race 104: 23:50 -> 01:30, direction: miami, aircraft: boeing 777, distance: 800.00 km
race 105: 07:45 -> 09:15, direction: new york, aircraft: bombardier, distance: 200.00 km

--- flight with maximum duration ---

maximum duration race:
race 102: 09:00 -> 11:30, direction: los angeles, aircraft: airbus A320, distance: 550.00 km
duration: 150 minutes (02:30)

--- flights to new york ---

races to 'new york':
race 101: 08:30 -> 10:45, direction: new york, aircraft: boeing 737, distance: 450.00 km
race 105: 07:45 -> 09:15, direction: new york, aircraft: bombardier, distance: 200.00 km

--- average distance ---
average distance: 460.00 km

--- count by aircraft model ---

number of races for each destination:
boeing 737: 2
airbus A320: 1
boeing 777: 1
bombardier: 1
```

## Анализ результатов
Все полученные результаты полностью совпадают с ожидаемыми