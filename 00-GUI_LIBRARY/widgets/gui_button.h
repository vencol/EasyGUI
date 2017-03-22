/**
 * \author  Tilen Majerle
 * \brief   GUI button widget
 *	
\verbatim
   ----------------------------------------------------------------------
    Copyright (c) 2017 Tilen Majerle

    Permission is hereby granted, free of charge, to any person
    obtaining a copy of this software and associated documentation
    files (the "Software"), to deal in the Software without restriction,
    including without limitation the rights to use, copy, modify, merge,
    publish, distribute, sublicense, and/or sell copies of the Software, 
    and to permit persons to whom the Software is furnished to do so, 
    subject to the following conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
    OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
    AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
    HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
    WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
    OTHER DEALINGS IN THE SOFTWARE.
   ----------------------------------------------------------------------
\endverbatim
 */
#ifndef GUI_BUTTON_H
#define GUI_BUTTON_H

/* C++ detection */
#ifdef __cplusplus
extern "C" {
#endif
    
/**
 * \addtogroup      GUI_WIDGETS
 * \{
 */
    
#include "gui_widget.h"

/**
 * \defgroup        GUI_BUTTON Button
 * \brief           Button which can be pressed
 * \{
 */

/**
 * \brief           Button color list enumeration
 */
typedef enum GUI_BUTTON_COLOR_t {
    GUI_BUTTON_COLOR_FG = 0x00,             /*!< Foreground color index in array */
    GUI_BUTTON_COLOR_BG = 0x01,             /*!< Background color index in array */
    GUI_BUTTON_COLOR_BORDER = 0x02          /*!< Border color index in array */
} GUI_BUTTON_COLOR_t;

/**
 * \brief           GUI button structure
 */
typedef struct GUI_BUTTON_t {
    GUI_HANDLE C;                           /*!< GUI handle object, must always be first on list */
    
    GUI_Color_t Color[3];                   /*!< List of colors */
    GUI_Gradient_t Gradient[2];             /*!< List of gradient colors */
    
    GUI_Dim_t BorderWidth;                  /*!< Border width */
    GUI_Dim_t BorderRadius;                 /*!< Border radius */
} GUI_BUTTON_t;

/**
 * \brief           Create new button widget
 * \param[in]       id: Widget unique ID to use for identity for callback processing
 * \param[in]       x: Widget X position relative to parent widget
 * \param[in]       y: Widget Y position relative to parent widget
 * \param[in]       width: Widget width in units of pixels
 * \param[in]       height: Widget height in uints of pixels
 * \retval          > 0: \ref GUI_HANDLE_t object of created widget
 * \retval          0: Widget creation failed
 */
GUI_HANDLE_t GUI_BUTTON_Create(GUI_ID_t id, GUI_iDim_t x, GUI_iDim_t y, GUI_Dim_t width, GUI_Dim_t height);

/**
 * \brief           Set color to specific part of widget
 * \param[in,out]   h: Widget handle
 * \param[in]       index: Color index. This parameter can be a value of \ref GUI_BUTTON_COLOR_t enumeration
 * \param[in]       color: Color value
 * \retval          Widget handle
 */
GUI_HANDLE_t GUI_BUTTON_SetColor(GUI_HANDLE_t h, GUI_BUTTON_COLOR_t index, GUI_Color_t color);
GUI_HANDLE_t GUI_BUTTON_SetBorderWidth(GUI_HANDLE_t h, GUI_Dim_t width);
GUI_HANDLE_t GUI_BUTTON_SetBorderRadius(GUI_HANDLE_t h, GUI_Dim_t size);
    
/**
 * \}
 */
 
/**
 * \}
 */

/* C++ detection */
#ifdef __cplusplus
}
#endif

#endif