/* 
 * File:   NumberBaseConverterFactory.h
 * Author: root
 *
 * Created on 15 November 2015, 22:31
 */

#ifndef NUMBERBASECONVERTERFACTORY_H
#define	NUMBERBASECONVERTERFACTORY_H

#include <string>
#include "ConverterBase.h"
#include "BinaryConverter.h"
#include "DecimalConverter.h"
#include "HexadecimalConverter.h"
#include "OctalConverter.h"

using namespace std;

namespace NumberBaseConverter
{
    class NumberBaseConverterFactory
    {
        private:
            BinaryConverter binConverter_m;
            DecimalConverter decConverter_m;
            HexadecimalConverter hexConverter_m;
            OctalConverter octConverter_m;
        public:
            ConverterBase *GetConverter(string converterType);
    };
} // end namespace

#endif	/* NUMBERBASECONVERTERFACTORY_H */

