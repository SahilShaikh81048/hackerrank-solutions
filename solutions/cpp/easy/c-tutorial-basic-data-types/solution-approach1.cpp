// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true
// Problem     Basic Data Types
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-07-22, 01:10 a.m.
// ──────────────────────────────────────────────────

#include <iostream>
#include <cstdio>
#include <iomanip>
// #include <stdio.h>
using namespace std;

int main() {
    int a;
    // scanf("%d",a);
    cin>>a;
    long long b;
    cin>>b;
    char c;
    cin>>c;
    float d;
    cin>>d;
    long double e;
    cin>>e;
    cout <<a<<endl;
    cout <<b<<endl;
    cout <<c<<endl;
    cout << fixed << setprecision(3)<<d<<endl;
    cout <<fixed<<setprecision(9)<<e<<endl;
    return 0;
}
