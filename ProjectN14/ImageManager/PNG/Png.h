#ifndef CPng_h
#define CPng_h
#include "Imagen.h"
#endif /* CJpg_h */

class CPng : public CImagen
{
public:
	virtual int SetImageFile(const char *pszFile);
    void RemoveAlphaChannel();

private:
	int UncompressImage();
};
