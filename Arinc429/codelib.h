/*
 * File:   codelib.h
 * Author: Васа
 *
 * Created on 6 марта 2016 г., 22:32
 */

/*!
 **  \file   codeLib.h
 **  \brief  Библиотека кодирования/декодирования для РТМ и МКИО
 */

#ifndef CODELIB_H
#define	CODELIB_H

#ifdef	__cplusplus
extern "C" {
#endif

    /*  Включаемые файлы
     *******************************************************************************
     */
#include "public.h"

    /*  Макросы и константы
     *******************************************************************************
     */
#define MASK_ONE     0x01    /*!< Маска для 1 бита */
#define MASK_TWO     0x03    /*!< Маска для 2 бит */
#define MASK_THREE   0x07    /*!< Маска для 3 бит */
#define MASK_FOUR    0x0F    /*!< Маска для 4 бит */
#define MASK_FIVE    0x1F    /*!< Маска для 5 бит */
#define MASK_SIX     0x3F    /*!< Маска для 6 бит */
#define MASK_SEVEN   0x7F    /*!< Маска для 7 бит */
#define MASK_EIGHT   0xFF    /*!< Маска для 8 бит */
#define MASK_NINE    0x1FF   /*!< Маска для 9 бит */
#define MASK_TEN     0x3FF   /*!< Маска для 10 бит */
#define MASK_FIFTEEN 0x7FFF  /*!< Маска для 15 бит */

    /*  Типы данных
     *******************************************************************************
     */

    /*  Глобальные, локальные данные
     *******************************************************************************
     */

    /*  Описание и определение функций
     *******************************************************************************
     */
    /*! Реверс битов в байте
     *******************************************************************************
     **	\return	измененный байт
     */
    extern TUInt8 byte_revers(
            TUInt8 byte
            );

#ifdef	__cplusplus
}
#endif

#endif	/* CODELIB_H */

