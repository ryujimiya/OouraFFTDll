#pragma once

#ifdef OOURAFFTDll_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif


extern "C"
{
    DLL_API void OouraFFT_cdft4g(int n, int isgn, double* a, int* ip, double* w);
    DLL_API void OouraFFT_rdft4g(int n, int isgn, double* a, int* ip, double* w);
    DLL_API void OouraFFT_ddct4g(int n, int isgn, double* a, int* ip, double* w);
    DLL_API void OouraFFT_ddst4g(int n, int isgn, double* a, int* ip, double* w);
    DLL_API void OouraFFT_dfct4g(int n, double* a, double* t, int* ip, double* w);
    DLL_API void OouraFFT_dfst4g(int n, double* a, double* t, int* ip, double* w);

    DLL_API void OouraFFT_cdft8g(int n, int isgn, double* a, int* ip, double* w);
    DLL_API void OouraFFT_rdft8g(int n, int isgn, double* a, int* ip, double* w);
    DLL_API void OouraFFT_ddct8g(int n, int isgn, double* a, int* ip, double* w);
    DLL_API void OouraFFT_ddst8g(int n, int isgn, double* a, int* ip, double* w);
    DLL_API void OouraFFT_dfct8g(int n, double* a, double* t, int* ip, double* w);
    DLL_API void OouraFFT_dfst8g(int n, double* a, double* t, int* ip, double* w);

    DLL_API void OouraFFT_cdftsg(int n, int isgn, double* a, int* ip, double* w);
    DLL_API void OouraFFT_rdftsg(int n, int isgn, double* a, int* ip, double* w);
    DLL_API void OouraFFT_ddctsg(int n, int isgn, double* a, int* ip, double* w);
    DLL_API void OouraFFT_ddstsg(int n, int isgn, double* a, int* ip, double* w);
    DLL_API void OouraFFT_dfctsg(int n, double* a, double* t, int* ip, double* w);
    DLL_API void OouraFFT_dfstsg(int n, double* a, double* t, int* ip, double* w);
}
