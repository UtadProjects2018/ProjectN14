//
//  ImageUtils.cpp
//  ProjectN14
//
//  Created by pc-laptop on 11/1/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include "ImageUtils.h"
#include "PNG.h"

void ImageUtils::RemoveAlphaImage(CImagen **images, int size)
{
    for (int i = 0; i < size; i ++)
    {
        if (images[i]->getTypeOfImage() == PNG)
        {
            CPng *pngImage = static_cast<CPng *>(images[i]);
            pngImage->RemoveAlphaChannel();
        }
    }
}
