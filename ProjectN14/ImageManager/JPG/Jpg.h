#ifndef CJpg_h
#define CJpg_h
#include "Imagen.h"
#endif /* CJpg_h */


class CJpg : public CImagen
{
public:
	virtual int SetImageFile(const char *pszJpgFile);

private:
	int UncompressImage();
};
