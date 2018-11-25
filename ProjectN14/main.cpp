//
//  main.cpp
//  ProjectN14
//
//  Created by pc-laptop on 11/1/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include <iostream>
#include "Png.h"
#include "Jpg.h"
#include "ImageUtils.h"

int main(int argc, const char * argv[])
{
    CImagen *images[] = { new CJpg(), new CJpg(), new CPng(), new CPng() };
    int size = sizeof(images)/sizeof(*images);
    
    for (int i = 0; i < size; i ++)
    {
        images[i]->SetImageFile("MyImageExampleFile");
    }
    
    ImageUtils::RemoveAlphaImage(images, size);
    return 0;
}
