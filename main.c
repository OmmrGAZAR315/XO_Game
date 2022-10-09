#include <stdio.h>

int userMistake(int);

int main() {
    char one = '1',
            two = '2',
            three = '3',
            four = '4',
            five = '5',
            six = '6',
            seven = '7',
            eight = '8',
            nine = '9',
            X_O;
    int x = 0, input, xTurn = 1,
            counter1 = 0,
            counter2 = 0,
            counter3 = 0,
            counter4 = 0,
            counter5 = 0,
            counter6 = 0,
            counter7 = 0,
            counter8 = 0,
            skipper = 0,
            counter9 = 0;
    do {
        if (skipper) {
            if (xTurn) {
                printf("X turn : ");
                X_O = 'X';
            } else {
                printf("O turn : ");
                X_O = 'O';
            }
            xTurn = !xTurn;
            scanf("%d", &input);
            switch (input) {
                case 1:
                    if (counter1 == 0) {
                        one = X_O;
                        counter1++;
                    } else {
                        xTurn = userMistake(xTurn);
                        x--;
                    }
                    break;
                case 2:
                    if (counter2 == 0) {
                        two = X_O;
                        counter2++;
                    } else {
                        xTurn = userMistake(xTurn);
                        x--;
                    }
                    break;
                case 3:
                    if (counter3 == 0) {
                        three = X_O;
                        counter3++;
                    } else {
                        xTurn = userMistake(xTurn);
                        x--;
                    }
                    break;
                case 4:
                    if (counter4 == 0) {
                        four = X_O;
                        counter4++;
                    } else {
                        xTurn = userMistake(xTurn);
                        x--;
                    }
                    break;
                case 5:
                    if (counter5 == 0) {
                        five = X_O;
                        counter5++;
                    } else {
                        xTurn = userMistake(xTurn);
                        x--;
                    }
                    break;
                case 6:
                    if (counter6 == 0) {
                        six = X_O;
                        counter6++;
                    } else {
                        xTurn = userMistake(xTurn);
                        x--;
                    }
                    break;
                case 7:
                    if (counter7 == 0) {
                        seven = X_O;
                        counter7++;
                    } else {
                        xTurn = userMistake(xTurn);
                        x--;
                    }
                    break;
                case 8:
                    if (counter8 == 0) {
                        eight = X_O;
                        counter8++;
                    } else {
                        xTurn = userMistake(xTurn);
                        x--;
                    }
                    break;
                case 9:
                    if (counter9 == 0) {
                        nine = X_O;
                        counter9++;
                    } else {
                        xTurn = userMistake(xTurn);
                        x--;
                    }
                    break;
            }
            if (x > 0) {
                if (one != ' ') {
                    if (one == four && one == seven) {
                        one = '|';
                        four = '|';
                        seven = '|';
                        x = 10;
                    } else if (one == two && one == three) {
                        one = '-';
                        two = '-';
                        three = '-';
                        x = 10;

                    } else if (one == five && one == nine) {
                        one = '\\';
                        five = '\\';
                        nine = '\\';
                        x = 10;
                    }
                }
                if (two != ' ') {
                    if (two == five && two == eight) {
                        two = '|';
                        five = '|';
                        eight = '|';
                        x = 10;
                    }
                }
                if (three != ' ') {
                    if (three == five && three == seven) {
                        three = '/';
                        five = '/';
                        seven = '/';
                        x = 10;
                    }
                }
                if (five == six && five == nine) {
                    five = '|';
                    six = '|';
                    nine = '|';
                    x = 10;
                }
                if (four == five && four == six) {
                    four = '-';
                    five = '-';
                    six = '-';
                    x = 10;
                }
                if (seven == eight && seven == nine) {
                    seven = '-';
                    eight = '-';
                    nine = '-';
                    x = 10;
                }
            }
        } else skipper = 1;
        printf("\n %c | ", one);
        printf(" %c | ", two);
        printf(" %c\n", three);
        printf("---|----|-----\n");
        printf(" %c | ", four);
        printf(" %c | ", five);
        printf(" %c\n", six);
        printf("---|----|-----\n");
        printf(" %c | ", seven);
        printf(" %c | ", eight);
        printf(" %c\n\n", nine);
        if (x == 10)printf("Winner Winner Chicken Dinner %c player", X_O);
        x++;
    } while (x < 10);
    return 0;
}

int userMistake(int xTurn) {
    printf("\nthis place is already choosen, please try again\n\n");
    return !xTurn;
}
