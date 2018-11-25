#ifndef CImagen_h
#define CImagen_h

enum CImageType{ JPG, PNG };

class CImagen
{
public:
    ~CImagen();
    virtual int SetImageFile (const char *pszFile);
    unsigned int GetNumPixels () const;
    unsigned int GetUncompressedSize () const;
    const unsigned char *GetBuffer () const;
    int Draw () const;
    int InvertImage ();
    CImageType getTypeOfImage();
    
protected:
    unsigned int m_uResX;
    unsigned int m_uResY;
    unsigned int m_uColorBytes;
    unsigned char *m_pBuffer;
    unsigned int m_uSize;
    CImageType imageType;
};


#endif /* CImagen_h */

