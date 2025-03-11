#include<iostream>
using namespace std;

int y, m, d;

bool check_range(int yn, int mn, int dn) {
    if (mn < 1 || mn > 12 || dn < 1) return false;
    
    if (mn == 1 || mn == 3 || mn == 5 || mn == 7 || mn == 8 || mn == 10 || mn == 12) {
        if (dn > 31) return false;
    }
    else if (mn == 4 || mn == 6 || mn == 9 || mn == 11) {
        if (dn > 30) return false;
    }
    else if (mn == 2) {
        if (yn % 4 == 0) {
            if (dn > 29) return false;
        }
        else if (dn > 28) return false;
    }

    return true;
}

int check_date(int yn, int mn, int dn) {
    if (yn < y) return 2;
    else if (yn > y) return 1;
    else if (mn < m) return 2;
    else if (mn > m) return 1;
    else if (dn < d) return 2;
    else return 1;
}

int check(int yn, int mn, int dn) {
    bool isvalid = check_range(yn, mn, dn);
    if (isvalid == false) return 0;

    return check_date(yn, mn, dn);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> y >> m >> d;

    int n;

    cin >> n;

    while(n--) {
        int a, b, c;

        cin >> a >> b >> c;

        int ymd, dmy, mdy;
        ymd = check(a, b, c);
        dmy = check(c, b, a);
        mdy = check(c, a, b);

        if (ymd == 0 && dmy == 0 && mdy == 0) cout << "invalid\n";
        else if (ymd != 2 && dmy != 2 && mdy != 2) cout << "safe\n";
        else cout << "unsafe\n";
    }
}