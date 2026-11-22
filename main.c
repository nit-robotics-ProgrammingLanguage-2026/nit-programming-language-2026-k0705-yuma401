
#include <stdio.h>

// ユークリッドの互除法で最大公約数を求める
int gcd(int m, int x) {
    // 負の数にも対応するため、long longで扱う
    long long first_number = m;
    long long second_number = x;

    if (first_number < 0) {
        first_number = -first_number;
    }

    if (second_number < 0) {
        second_number = -second_number;
    }

    // 余りが0になるまで計算を繰り返す
    while (second_number != 0) {
        long long remainder = first_number % second_number;
        first_number = second_number;
        second_number = remainder;
    }

    return (int)first_number;
}

int main(void) {
    int input_number;
    int result;

    scanf("%d", &input_number);

    // 9966990より大きい場合はNG
    if (input_number > 9966990) {
        printf("NG");
        return 0;
    }

    // 関数に値を渡して最大公約数を受け取る
    result = gcd(9966990, input_number);

    printf("%d", result);

    return 0;
}
