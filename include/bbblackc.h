
#define OUT "out"
#define IN "in"

#define HIGH 1
#define LOW 0

#define GPIO_PATH "/sys/class/gpio/"

#define P8_03 38
#define P8_04 39
#define P8_05 34
#define P8_06 35
#define P8_07 66
#define P8_08 67
#define P8_09 69
#define P8_10 68
#define P8_11 45
#define P8_12 44
#define P8_13 23
#define P8_14 26
#define P8_15 47
#define P8_16 46
#define P8_17 27
#define P8_18 65
#define P8_19 22
#define P8_20 63
#define P8_21 27
#define P8_22 37
#define P8_23 36
#define P8_24 33
#define P8_25 1
#define P8_26 61
#define P8_27 86
#define P8_28 88
#define P8_29 87
#define P8_30 89
#define P8_31 10
#define P8_32 11
#define P8_33 9
#define P8_34 81
#define P8_35 8
#define P8_36 80
#define P8_37 78
#define P8_38 79
#define P8_39 76
#define P8_40 77
#define P8_41 74
#define P8_42 75
#define P8_43 72
#define P8_44 73
#define P8_45 70
#define P8_46 71

#define P9_11 30
#define P9_12 60
#define P9_13 31
#define P9_14 50
#define P9_15 48
#define P9_16 51
#define P9_17 5
#define P9_18 4
#define P9_19 13
#define P9_20 12
#define P9_21 3
#define P9_22 2
#define P9_23 49
#define P9_24 15
#define P9_25 117
#define P9_26 14
#define P9_27 115
#define P9_28 113
#define P9_29 111
#define P9_30 112
#define P9_31 110
#define P9_41A 20
#define P9_41B 116
#define P9_42A 7
#define P9_42B 114

int gpio_init(int GPIO, char* direction);
int gpio_clean(int GPIO);
int gpio_set(int GPIO, int value);