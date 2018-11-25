
#include <iostream>
#include "Png.h"

// **************************************************************
//
// **************************************************************
int CPng::SetImageFile(const char *pszPngFile)
{
	printf("Lectura del fichero comprimido Png\n");
	UncompressImage();
    printf("Set Image type PNG\n");
    this->imageType = PNG;
	return 0;
}

// **************************************************************
//
// **************************************************************
int CPng::UncompressImage()
{
	printf("Descompresion de Imagen Png\n");
	m_uResX				= 480;
	m_uResY				= 320;
	m_uColorBytes	    = 4;
	m_uSize				= m_uResX * m_uResY * m_uColorBytes;
	m_pBuffer			= new unsigned char[m_uSize];
	strcpy(reinterpret_cast<char *>(m_pBuffer), "Bytes del buffer descomprimido desde Png");
	return 0;
}

// **************************************************************
//
// **************************************************************
void CPng::RemoveAlphaChannel()
{
    printf("Remove Alpha Channel\n");
}
