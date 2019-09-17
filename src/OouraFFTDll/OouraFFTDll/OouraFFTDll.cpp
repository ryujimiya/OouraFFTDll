#include "pch.h"

#include "OouraFFTDll.h"
#include "OouraFFTLib.h"

void OouraFFT_cdft4g(int n, int isgn, double* a, int* ip, double* w)
{
    cdft4g(n, isgn, a, ip, w);

}

void OouraFFT_rdft4g(int n, int isgn, double* a, int* ip, double* w)
{
    rdft4g(n, isgn, a, ip, w);
}

void OouraFFT_ddct4g(int n, int isgn, double* a, int* ip, double* w)
{
    ddct4g(n, isgn, a, ip, w);
}

void OouraFFT_ddst4g(int n, int isgn, double* a, int* ip, double* w)
{
    ddst4g(n, isgn, a, ip, w);

}

void OouraFFT_dfct4g(int n, double* a, double* t, int* ip, double* w)
{
    dfct4g(n, a, t, ip, w);
}

void OouraFFT_dfst4g(int n, double* a, double* t, int* ip, double* w)
{
    dfst4g(n, a, t, ip, w);
}

void OouraFFT_cdft8g(int n, int isgn, double* a, int* ip, double* w)
{
    cdft8g(n, isgn, a, ip, w);

}

void OouraFFT_rdft8g(int n, int isgn, double* a, int* ip, double* w)
{
    rdft8g(n, isgn, a, ip, w);

}

void OouraFFT_ddct8g(int n, int isgn, double* a, int* ip, double* w)
{
    ddct8g(n, isgn, a, ip, w);
}

void OouraFFT_ddst8g(int n, int isgn, double* a, int* ip, double* w)
{
    ddst8g(n, isgn, a, ip, w);
}

void OouraFFT_dfct8g(int n, double* a, double* t, int* ip, double* w)
{
    dfct8g(n, a, t, ip, w);
}

void OouraFFT_dfst8g(int n, double* a, double* t, int* ip, double* w)
{
    dfst8g(n, a, t, ip, w);
}

void OouraFFT_cdftsg(int n, int isgn, double* a, int* ip, double* w)
{
    cdftsg(n, isgn, a, ip, w);
}

void OouraaFFT_rdftsg(int n, int isgn, double* a, int* ip, double* w)
{
    rdftsg(n, isgn, a, ip, w);
}

void OouraFFT_ddctsg(int n, int isgn, double* a, int* ip, double* w)
{
    ddctsg(n, isgn, a, ip, w);
}

void OouraFFT_ddstsg(int n, int isgn, double* a, int* ip, double* w)
{
    ddstsg(n, isgn, a, ip, w);
}

void OouraFFT_dfctsg(int n, double* a, double* t, int* ip, double* w)
{
    dfctsg(n, a, t, ip, w);
}

void OouraFFT_dfstsg(int n, double* a, double* t, int* ip, double* w)
{
    dfstsg(n, a, t, ip, w);
}



