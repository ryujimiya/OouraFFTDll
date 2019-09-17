#pragma once

void cdft4g(int n, int isgn, double* a, int* ip, double* w);
void rdft4g(int n, int isgn, double* a, int* ip, double* w);
void ddct4g(int n, int isgn, double* a, int* ip, double* w);
void ddst4g(int n, int isgn, double* a, int* ip, double* w);
void dfct4g(int n, double* a, double* t, int* ip, double* w);
void dfst4g(int n, double* a, double* t, int* ip, double* w);

void cdft8g(int n, int isgn, double* a, int* ip, double* w);
void rdft8g(int n, int isgn, double* a, int* ip, double* w);
void ddct8g(int n, int isgn, double* a, int* ip, double* w);
void ddst8g(int n, int isgn, double* a, int* ip, double* w);
void dfct8g(int n, double* a, double* t, int* ip, double* w);
void dfst8g(int n, double* a, double* t, int* ip, double* w);

void cdftsg(int n, int isgn, double* a, int* ip, double* w);
void rdftsg(int n, int isgn, double* a, int* ip, double* w);
void ddctsg(int n, int isgn, double* a, int* ip, double* w);
void ddstsg(int n, int isgn, double* a, int* ip, double* w);
void dfctsg(int n, double* a, double* t, int* ip, double* w);
void dfstsg(int n, double* a, double* t, int* ip, double* w);

