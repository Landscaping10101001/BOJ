#include <iostream>
#include <vector>
using namespace std;

int board[2001][2001];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, K;
    cin >> N >> M >> K;
    if (N == 1 && M == 1 && K == 1) {
        int b;
        cin >> b;
        if (b) {
            cout << "1 1";
        } else {
            cout << "0";
        }

        return 0;
    }
    int one_count = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> board[i][j];
            if (board[i][j] == 1) {
                one_count++;
            }
        }
    }

    int multi_grow = 2*K - one_count;
    cout << multi_grow << '\n';

    if (multi_grow > 0) {
        int start_x = 2002;
        int start_y = 2002;
        int end_x = 0;
        int end_y = 0;
        bool garo = false;
        bool sero = false;
        int garo_value = 0;
        int sero_value = 0;

        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= M; j++) {
                if (board[i][j] == 1) {
                    bool check_x = false;
                    bool check_y = false;
                    for (int k = 0; k < 4; k++) {
                        int nx = i + dx[k];
                        int ny = j + dy[k];

                        if (1 <= nx && nx <= N && 1 <= ny && ny <= M) {
                            if (board[nx][ny] && nx == i) {
                                check_y = true;
                                garo = true;
                                sero_value = i;
                                if (j < start_y) {
                                    start_y = j;
                                }
                                if (end_y < j) {
                                    end_y = j;
                                }
                            }

                            if (board[nx][ny] && ny == j) {
                                check_x = true;
                                sero = true;
                                garo_value = j;
                                if (i < start_x) {
                                    start_x = i;
                                }
                                if (end_x < i) {
                                    end_x = i;
                                }
                            }

                            if (check_x && check_y) {
                                cout << i << ' ' << j;
                                return 0;
                            }
                        }
                    }
                }
            }
        }

        if (garo) {
            while (K--) {
//                cout << "start_y + K - 1: " << start_y + K - 1 << '\n';
                board[sero_value][start_y + K] = 2;
            }

            for (int j = 1; j <= M; j++) {
//                cout << "j: " << j << '\n';
                if (board[sero_value][j] == 2) {
                    cout << sero_value << ' ' << j << '\n';
                }
            }

            return 0;
        }

        if (sero) {
            while (K--) {
                board[start_x + K][garo_value] = 2;
            }

            for (int i = 1; i <= N; i++) {
                if (board[i][garo_value] == 2) {
                    cout << i << ' ' << garo_value << '\n';
                }
            }

            return 0;
        }

        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= M; j++) {
                if (board[i][j] >= 1) {
                    cout << i << ' ' << j << '\n';
                }
            }
        }
    }

    return 0;
}